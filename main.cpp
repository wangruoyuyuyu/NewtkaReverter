/*
 * NewtkaReverter - Nuitka onefile EXE extractor
 *
 * Extracts files from a Nuitka --onefile packaged executable.
 *
 * Payload format (inside ZSTD stream):
 *   [UTF-16LE null-terminated filename] [8-byte LE file size] [raw file data]
 *   ...repeated for each file...
 *
 * The whole thing is wrapped in:
 *   "KAY" (3 bytes) + ZSTD compressed stream
 *
 * Usage:
 *   NewtkaReverter <input.exe> [output_dir]
 */

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "zstd.h"

namespace fs = std::filesystem;

static constexpr size_t CHUNK_SIZE = 256 * 1024; // 256 KB

// ---------------------------------------------------------------------------
// Find KAY + ZSTD magic
// ---------------------------------------------------------------------------
static bool find_payload(const uint8_t* data, size_t size, size_t& out_offset) {
    for (size_t i = 0; i + 7 <= size; ++i) {
        if (data[i]=='K' && data[i+1]=='A' && data[i+2]=='Y' &&
            data[i+3]==0x28 && data[i+4]==0xB5 &&
            data[i+5]==0x2F && data[i+6]==0xFD) {
            out_offset = i;
            return true;
        }
    }
    return false;
}

// ---------------------------------------------------------------------------
// UTF-16LE -> UTF-8 (BMP only, fine for file paths)
// ---------------------------------------------------------------------------
static std::string to_utf8(const std::u16string& s) {
    std::string r;
    r.reserve(s.size() * 3);
    for (char16_t c : s) {
        if (c < 0x80)       { r += (char)c; }
        else if (c < 0x800) { r += (char)(0xC0|(c>>6)); r += (char)(0x80|(c&0x3F)); }
        else                { r += (char)(0xE0|(c>>12)); r += (char)(0x80|((c>>6)&0x3F)); r += (char)(0x80|(c&0x3F)); }
    }
    return r;
}

// ---------------------------------------------------------------------------
// Streaming archive parser
//
// State machine that consumes decompressed bytes and writes files.
// Carries partial data across chunk boundaries via a small residual buffer.
// ---------------------------------------------------------------------------
struct Extractor {
    enum { S_NAME, S_SIZE, S_DATA } state = S_NAME;

    std::string     out_dir;
    std::ofstream   file;
    std::string     cur_utf8;
    int             count = 0;

    // Residual bytes carried from previous chunk (for partial headers)
    std::vector<uint8_t> residual;

    // Current entry state
    uint64_t file_remaining = 0;

    void init(const std::string& dir) { out_dir = dir; }

    // Feed a chunk of decompressed bytes
    void feed(const uint8_t* chunk, size_t len) {
        // Prepend residual from last call
        std::vector<uint8_t> buf;
        if (!residual.empty()) {
            buf = std::move(residual);
            residual.clear();
        }
        buf.insert(buf.end(), chunk, chunk + len);

        size_t pos = 0;
        const uint8_t* p = buf.data();
        size_t total = buf.size();

        while (pos < total) {
            if (state == S_NAME) {
                // Scan for null-terminated UTF-16LE string
                std::u16string name;
                bool found = false;
                size_t i = pos;
                while (i + 1 < total) {
                    char16_t ch;
                    std::memcpy(&ch, p + i, 2);
                    i += 2;
                    if (ch == 0) { found = true; break; }
                    name += ch;
                }
                if (!found) {
                    // Not enough data for complete name + null terminator
                    // Save remainder as residual
                    residual.assign(p + pos, p + total);
                    return;
                }
                pos = i;
                cur_utf8 = to_utf8(name);
                state = S_SIZE;
            }

            if (state == S_SIZE) {
                size_t avail = total - pos;
                if (avail < 8) {
                    // Not enough for the 8-byte size field
                    residual.assign(p + pos, p + total);
                    return;
                }
                std::memcpy(&file_remaining, p + pos, 8);
                pos += 8;

                // Open output file
                fs::path fpath = fs::path(out_dir) / cur_utf8;
                fs::create_directories(fpath.parent_path());
                file.open(fpath, std::ios::binary);
                if (!file)
                    std::fprintf(stderr, "  Warning: cannot create %s\n", fpath.string().c_str());
                ++count;
                std::printf("  [%3d] %-55s %10llu bytes\n",
                    count, cur_utf8.c_str(), (unsigned long long)file_remaining);

                state = S_DATA;
            }

            if (state == S_DATA) {
                size_t avail = total - pos;
                size_t to_write = (size_t)std::min<uint64_t>(avail, file_remaining);
                if (to_write == 0) {
                    // Edge case: file has 0 bytes
                    file.close();
                    state = S_NAME;
                    continue;
                }
                if (file.is_open())
                    file.write((const char*)(p + pos), to_write);
                pos += to_write;
                file_remaining -= to_write;
                if (file_remaining == 0) {
                    file.close();
                    state = S_NAME;
                }
            }
        }
    }

    void finish() {
        if (file.is_open()) file.close();
    }
};

// ---------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::fprintf(stderr,
            "NewtkaReverter - Nuitka onefile EXE extractor\n\n"
            "Usage: %s <input.exe> [output_dir]\n\n"
            "  output_dir defaults to 'nuitka_extracted'\n", argv[0]);
        return 1;
    }

    const char* input = argv[1];
    std::string out_dir = (argc >= 3) ? argv[2] : "nuitka_extracted";

    // --- Read header to find KAY marker ---
    FILE* fp = std::fopen(input, "rb");
    if (!fp) { std::fprintf(stderr, "Error: cannot open %s\n", input); return 1; }

    std::fseek(fp, 0, SEEK_END);
    size_t fsize = (size_t)std::ftell(fp);
    std::fseek(fp, 0, SEEK_SET);
    std::printf("[*] Input: %s (%.1f MB)\n", input, fsize / (1024.0*1024.0));

    // Scan first 10 MB for the marker (it's always early in .rdata)
    size_t scan = std::min(fsize, (size_t)(10*1024*1024));
    std::vector<uint8_t> hdr(scan);
    std::fread(hdr.data(), 1, scan, fp);

    size_t payload_off = 0;
    if (!find_payload(hdr.data(), scan, payload_off)) {
        std::fprintf(stderr, "Error: KAY+ZSTD signature not found\n");
        std::fclose(fp); return 1;
    }
    hdr.clear();
    std::printf("[*] Payload at file offset 0x%zX\n", payload_off);

    // Seek past "KAY" (3 bytes) to the ZSTD data
    size_t zstd_off = payload_off + 3;
    std::fseek(fp, (long)zstd_off, SEEK_SET);
    std::printf("[*] ZSTD data: %.1f MB\n\n", (fsize - zstd_off) / (1024.0*1024.0));

    // --- Create output ---
    fs::create_directories(out_dir);

    // --- Decompress & extract ---
    ZSTD_DCtx* dctx = ZSTD_createDCtx();
    if (!dctx) { std::fprintf(stderr, "Error: zstd init failed\n"); std::fclose(fp); return 1; }

    Extractor ext;
    ext.init(out_dir);

    std::vector<uint8_t> inbuf(CHUNK_SIZE), outbuf(CHUNK_SIZE);
    ZSTD_inBuffer zin = {nullptr, 0, 0};

    for (;;) {
        if (zin.pos >= zin.size) {
            size_t n = std::fread(inbuf.data(), 1, CHUNK_SIZE, fp);
            if (n == 0) break;
            zin = {inbuf.data(), n, 0};
        }
        ZSTD_outBuffer zout = {outbuf.data(), outbuf.size(), 0};
        size_t ret = ZSTD_decompressStream(dctx, &zout, &zin);
        if (ZSTD_isError(ret)) {
            std::fprintf(stderr, "Error: zstd: %s\n", ZSTD_getErrorName(ret));
            break;
        }
        if (zout.pos > 0)
            ext.feed(outbuf.data(), zout.pos);
        if (ret == 0) break; // frame complete
    }

    ext.finish();
    ZSTD_freeDCtx(dctx);
    std::fclose(fp);

    std::printf("\n[*] Done. Extracted %d files to %s\n", ext.count, out_dir.c_str());
    return 0;
}
