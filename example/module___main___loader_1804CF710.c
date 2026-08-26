// sub_1804CF710 @ 0x1804CF710 (pseudocode)

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1804CF710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int *v9; // rbx
  __int64 v10; // r14
  int **v11; // rax
  int *v12; // rcx
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // r10
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // edx
  int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  int v51; // edx
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  int v58; // edx
  int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  int v71; // edx
  int v72; // r8d
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rsi
  int v77; // eax
  int v78; // edx
  int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rsi
  int v84; // eax
  int v85; // edx
  int v86; // r8d
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // eax
  int v91; // edx
  int v92; // r8d
  __int64 v93; // rax
  int v94; // edx
  int v95; // r8d
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  int v106; // edx
  int v107; // r8d
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  int v112; // edx
  int v113; // r8d
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // eax
  int v118; // edx
  int v119; // r8d
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rsi
  int v124; // eax
  _DWORD *v125; // rbx
  __int64 v126; // rbx
  _DWORD *v127; // rsi
  __int64 v128; // r14
  __int64 v129; // rax
  __int64 v130; // r12
  __int64 v131; // r15
  __int64 v132; // rbx
  int v133; // eax
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rbx
  int v137; // eax
  __int64 v138; // rax
  int v139; // edx
  int v140; // edx
  int v141; // eax
  __int64 v142; // rsi
  __int64 v143; // rbx
  _DWORD *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  int v147; // ecx
  int v148; // ecx
  int v149; // eax
  _DWORD *v150; // rsi
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rbx
  __int64 v154; // rsi
  __int64 v155; // rax
  int v156; // ecx
  int v157; // ecx
  int v158; // eax
  __int64 v159; // rsi
  int v160; // ecx
  __int64 v161; // rbx
  int v162; // ecx
  __int64 v163; // rsi
  int *v164; // rbx
  __int64 v165; // rdx
  int v166; // edx
  int *v167; // rax
  int v168; // ecx
  __int64 v169; // r8
  int v170; // edx
  int *v171; // rax
  int v172; // ecx
  int v173; // edx
  int *v174; // rax
  int v175; // ecx
  int v176; // edx
  int *v177; // rax
  int v178; // ecx
  __int64 v179; // rax
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rbx
  int v183; // ecx
  int v184; // eax
  __int64 v185; // rbx
  __int64 v186; // rbx
  __int64 v187; // rax
  int v188; // ecx
  int v189; // ecx
  int v190; // eax
  int v191; // eax
  int v192; // eax
  int v193; // eax
  int v194; // eax
  int v195; // eax
  __int64 v196; // rcx
  int v197; // eax
  _DWORD *v198; // rbx
  int v199; // eax
  int v200; // eax
  int v201; // eax
  int v202; // eax
  int v203; // eax
  int *v204; // rcx
  int v205; // eax
  int v206; // eax
  unsigned int *v207; // rbx
  __int64 v208; // rcx
  int *v209; // r14
  __int64 v210; // r15
  __int64 v211; // rax
  unsigned int v212; // ecx
  int *v213; // r13
  int *v214; // rsi
  int v215; // eax
  __int64 v216; // rax
  __int64 v217; // rsi
  __int64 v218; // rbx
  int v219; // eax
  __int64 v220; // rax
  int v221; // edx
  int v222; // edx
  int v223; // eax
  __int64 v224; // rsi
  _DWORD *v225; // r14
  __int64 v226; // rax
  __int64 v227; // rbx
  int *v228; // r9
  __int64 v229; // r14
  int v230; // ecx
  int v231; // eax
  int v232; // eax
  __int64 v233; // rcx
  __int64 v234; // r13
  __int64 v235; // rsi
  __int64 v236; // rbx
  __int64 v237; // rsi
  __int64 v238; // r12
  int v239; // ecx
  int v240; // eax
  __int64 v241; // rsi
  int v242; // ecx
  __int64 v243; // rbx
  int v244; // ecx
  __int64 v245; // rax
  unsigned int v246; // ecx
  __int64 v247; // r13
  _DWORD *v248; // r12
  __int64 v249; // rdx
  unsigned int v250; // r14d
  __int64 v251; // rbx
  int v252; // esi
  int v253; // ecx
  __int64 v254; // r13
  const char *v255; // rsi
  __int64 Item; // rbx
  __int64 v257; // rbx
  int v258; // eax
  __int64 v259; // r12
  int v260; // ecx
  __int64 v261; // rbx
  int v262; // r12d
  int v263; // ecx
  __int64 v264; // rbx
  int v265; // r12d
  int v266; // ecx
  __int64 v267; // rbx
  int v268; // r12d
  int v269; // ecx
  __int64 v270; // rbx
  __int64 v271; // rbx
  int v272; // eax
  __int64 v273; // r13
  __int64 v274; // r12
  int v275; // ecx
  int v276; // eax
  int v277; // ebx
  int v278; // ecx
  __int64 v279; // rbx
  __int64 v280; // rbx
  int v281; // eax
  __int64 v282; // r13
  __int64 v283; // r12
  int v284; // ecx
  int v285; // eax
  int v286; // ebx
  int v287; // ecx
  __int64 v288; // rbx
  int v289; // r12d
  int v290; // ecx
  __int64 v291; // r13
  __int64 v292; // rbx
  __int64 v293; // rbx
  int v294; // eax
  unsigned int *v295; // rax
  unsigned int v296; // eax
  __int64 v297; // r12
  int v298; // ecx
  __int64 v299; // rbx
  int v300; // r12d
  int v301; // ecx
  __int64 v302; // r13
  __int64 v303; // rbx
  __int64 v304; // rbx
  int v305; // eax
  unsigned int *v306; // rax
  unsigned int v307; // eax
  __int64 v308; // r12
  int v309; // ecx
  __int64 v310; // rbx
  int v311; // r12d
  int v312; // ecx
  __int64 v313; // r13
  __int64 v314; // rbx
  __int64 v315; // rbx
  int v316; // eax
  unsigned int *v317; // rax
  unsigned int v318; // eax
  __int64 v319; // r12
  int v320; // ecx
  __int64 v321; // rbx
  int v322; // r12d
  int v323; // ecx
  __int64 v324; // rbx
  int v325; // r12d
  int v326; // ecx
  __int64 v327; // rbx
  int v328; // r12d
  int v329; // ecx
  __int64 v330; // rbx
  int v331; // r12d
  int v332; // ecx
  __int64 v333; // rbx
  int v334; // r12d
  int v335; // ecx
  __int64 v336; // rbx
  int v337; // r12d
  int v338; // ecx
  __int64 v339; // rbx
  int v340; // r12d
  int v341; // ecx
  __int64 v342; // rbx
  int v343; // r12d
  int v344; // ecx
  __int64 v345; // rbx
  int v346; // r12d
  int v347; // ecx
  __int64 v348; // rbx
  int v349; // r12d
  int v350; // ecx
  __int64 v351; // rbx
  int v352; // r12d
  int v353; // ecx
  __int64 v354; // rbx
  int v355; // r12d
  int v356; // ecx
  __int64 v357; // rbx
  int v358; // r12d
  int v359; // ecx
  __int64 v360; // rbx
  int v361; // r12d
  int v362; // ecx
  __int64 v363; // rbx
  int v364; // r12d
  int v365; // ecx
  __int64 v366; // rbx
  int v367; // r12d
  int v368; // ecx
  __int64 v369; // rbx
  int v370; // r12d
  int v371; // ecx
  __int64 v372; // rbx
  int v373; // r12d
  int v374; // ecx
  __int64 v375; // rbx
  int v376; // r12d
  int v377; // ecx
  __int64 v378; // rbx
  int v379; // r12d
  int v380; // ecx
  __int64 v381; // rbx
  int v382; // r12d
  int v383; // ecx
  __int64 v384; // rbx
  int v385; // r12d
  int v386; // ecx
  __int64 v387; // rbx
  int v388; // r12d
  int v389; // ecx
  __int64 v390; // rbx
  int v391; // r12d
  int v392; // ecx
  __int64 v393; // rbx
  int v394; // r12d
  int v395; // ecx
  __int64 v396; // rbx
  int v397; // r12d
  int v398; // ecx
  __int64 v399; // rbx
  int v400; // r12d
  int v401; // ecx
  __int64 v402; // rbx
  int v403; // r12d
  int v404; // ecx
  __int64 v405; // rbx
  int v406; // r12d
  int v407; // ecx
  __int64 v408; // rbx
  int v409; // r12d
  int v410; // ecx
  __int64 v411; // rbx
  int v412; // r12d
  int v413; // ecx
  __int64 v414; // rbx
  int v415; // r12d
  int v416; // ecx
  __int64 v417; // rbx
  int v418; // r12d
  int v419; // ecx
  __int64 v420; // rcx
  __int64 v421; // rax
  __int64 v422; // rbx
  int v423; // ecx
  int v424; // eax
  __int64 v425; // rbx
  __int64 v426; // rbx
  __int64 v427; // r12
  int v428; // ecx
  int v429; // eax
  int *v430; // rcx
  int v431; // eax
  int v432; // eax
  int v433; // eax
  int v434; // eax
  int v435; // eax
  __int64 v436; // rcx
  int v437; // eax
  _DWORD *v438; // rbx
  int v439; // eax
  int v440; // eax
  int *v441; // rcx
  int v442; // eax
  int *v443; // rcx
  int v444; // eax
  int *v445; // rcx
  int v446; // eax
  int *v447; // rcx
  int v448; // eax
  int v449; // eax
  unsigned int *v450; // rbx
  __int64 v451; // r15
  __int64 v452; // rax
  unsigned int v453; // ecx
  int *v454; // r13
  int *v455; // r14
  int *v456; // r12
  int *v457; // rsi
  int v458; // eax
  __int64 v459; // rax
  __int64 v460; // r12
  __int64 v461; // rbx
  int v462; // eax
  __int64 v463; // rax
  int v464; // edx
  int v465; // edx
  int v466; // eax
  __int64 v467; // r12
  _DWORD *v468; // r13
  __int64 v469; // rax
  __int64 v470; // rbx
  int *v471; // rax
  __int64 v472; // rcx
  int *v473; // r9
  __int64 v474; // r13
  int v475; // ecx
  int v476; // eax
  int v477; // eax
  __int64 v478; // rcx
  __int64 v479; // r12
  __int64 v480; // rsi
  __int64 v481; // rbx
  __int64 v482; // rsi
  __int64 v483; // r14
  int v484; // ecx
  int v485; // eax
  __int64 v486; // rsi
  int v487; // ecx
  __int64 v488; // rbx
  int v489; // ecx
  __int64 v490; // r12
  int *v491; // rbx
  __int64 v492; // rbx
  int v493; // r13d
  int v494; // ecx
  __int64 v495; // rbx
  int v496; // r13d
  int v497; // ecx
  __int64 v498; // rbx
  int v499; // r13d
  int v500; // ecx
  __int64 v501; // rbx
  int v502; // r13d
  int v503; // ecx
  __int64 v504; // rbx
  __int64 v505; // rbx
  int v506; // eax
  __int64 v507; // r13
  int v508; // ecx
  __int64 v509; // rbx
  __int64 v510; // rbx
  int v511; // eax
  int v512; // eax
  __int64 v513; // rbx
  int v514; // r13d
  int v515; // ecx
  __int64 v516; // rbx
  int v517; // r13d
  int v518; // ecx
  __int64 v519; // rbx
  __int64 v520; // r13
  int v521; // ecx
  __int64 v522; // rbx
  int v523; // r13d
  int v524; // ecx
  __int64 v525; // rbx
  __int64 v526; // r13
  int v527; // ecx
  __int64 v528; // rbx
  int v529; // r13d
  int v530; // ecx
  __int64 v531; // rbx
  __int64 v532; // r13
  int v533; // ecx
  __int64 v534; // rbx
  int v535; // r13d
  int v536; // ecx
  __int64 v537; // rbx
  int v538; // r13d
  int v539; // ecx
  __int64 v540; // rbx
  int v541; // r13d
  int v542; // ecx
  __int64 v543; // rbx
  int v544; // r13d
  int v545; // ecx
  __int64 v546; // rbx
  int v547; // r13d
  int v548; // ecx
  __int64 v549; // rbx
  int v550; // r13d
  int v551; // ecx
  __int64 v552; // rbx
  int v553; // r13d
  int v554; // ecx
  __int64 v555; // rbx
  int v556; // r13d
  int v557; // ecx
  __int64 v558; // rbx
  int v559; // r13d
  int v560; // ecx
  __int64 v561; // rbx
  int v562; // r13d
  int v563; // ecx
  __int64 v564; // rbx
  int v565; // r13d
  int v566; // ecx
  __int64 v567; // rbx
  int v568; // r13d
  int v569; // ecx
  __int64 v570; // rbx
  unsigned int *v571; // rax
  unsigned int v572; // eax
  __int64 v573; // r13
  int v574; // ecx
  __int64 v575; // rbx
  int v576; // r13d
  int v577; // ecx
  __int64 v578; // rbx
  unsigned int *v579; // rax
  unsigned int v580; // eax
  __int64 v581; // r13
  int v582; // ecx
  __int64 v583; // rbx
  int v584; // r13d
  int v585; // ecx
  __int64 v586; // r13
  __int64 v587; // rbx
  unsigned int *v588; // rax
  unsigned int v589; // eax
  __int64 v590; // rsi
  int v591; // ecx
  __int64 v592; // rbx
  int v593; // esi
  int v594; // ecx
  __int64 v595; // rbx
  int v596; // esi
  int v597; // ecx
  __int64 v598; // rbx
  int v599; // esi
  int v600; // ecx
  __int64 v601; // rbx
  int v602; // esi
  int v603; // ecx
  int *v604; // r13
  __int64 v605; // rcx
  __int64 v606; // rax
  __int64 v607; // rbx
  int v608; // ecx
  int v609; // eax
  int v610; // eax
  __int64 v611; // rbx
  __int64 v612; // rbx
  __int64 v613; // rsi
  int v614; // ecx
  int v615; // eax
  int v616; // eax
  int v617; // eax
  int v618; // eax
  int v619; // eax
  int v620; // eax
  __int64 v621; // rcx
  int v622; // eax
  _DWORD *v623; // rbx
  int v624; // eax
  int v625; // eax
  int v626; // eax
  int v627; // eax
  int *v628; // rcx
  int v629; // eax
  int v630; // eax
  int v631; // eax
  __int64 v632; // rax
  __int64 v633; // rax
  int *v634; // rax
  int *v635; // rcx
  int v636; // eax
  int v637; // eax
  __int64 v638; // rcx
  __int64 v640; // rsi
  int v641; // eax
  __int64 v642; // rsi
  __int64 v643; // rax
  bool v644; // zf
  __int64 v645; // rbx
  __int64 v646; // rdx
  __int64 v647; // rcx
  unsigned int v648; // eax
  int v649; // eax
  int v650; // eax
  __int64 v651; // rcx
  int v652; // eax
  __int64 v653; // [rsp+20h] [rbp-A9h]
  __int64 v654; // [rsp+20h] [rbp-A9h]
  __int64 v655; // [rsp+20h] [rbp-A9h]
  __int64 v656; // [rsp+20h] [rbp-A9h]
  __int64 v657; // [rsp+20h] [rbp-A9h]
  __int64 v658; // [rsp+20h] [rbp-A9h]
  __int64 v659; // [rsp+20h] [rbp-A9h]
  __int64 v660; // [rsp+20h] [rbp-A9h]
  __int64 v661; // [rsp+20h] [rbp-A9h]
  __int64 v662; // [rsp+20h] [rbp-A9h]
  __int64 v663; // [rsp+20h] [rbp-A9h]
  __int64 v664; // [rsp+28h] [rbp-A1h]
  __int64 v665; // [rsp+28h] [rbp-A1h]
  __int64 v666; // [rsp+28h] [rbp-A1h]
  __int64 v667; // [rsp+28h] [rbp-A1h]
  __int64 v668; // [rsp+28h] [rbp-A1h]
  __int64 v669; // [rsp+28h] [rbp-A1h]
  __int64 v670; // [rsp+28h] [rbp-A1h]
  __int64 v671; // [rsp+28h] [rbp-A1h]
  __int64 v672; // [rsp+28h] [rbp-A1h]
  __int64 v673; // [rsp+28h] [rbp-A1h]
  __int64 v674; // [rsp+28h] [rbp-A1h]
  __int64 v675; // [rsp+28h] [rbp-A1h]
  __int64 v676; // [rsp+28h] [rbp-A1h]
  __int64 v677; // [rsp+60h] [rbp-69h] BYREF
  int *v678; // [rsp+68h] [rbp-61h]
  __int64 v679; // [rsp+70h] [rbp-59h]
  __int64 v680; // [rsp+78h] [rbp-51h]
  int *v681; // [rsp+80h] [rbp-49h]
  int *v682; // [rsp+88h] [rbp-41h]
  int *v683; // [rsp+90h] [rbp-39h] BYREF
  int *v684; // [rsp+98h] [rbp-31h]
  __int64 Src; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v686; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v687; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v688; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v689; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v690; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v691; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v692; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v693; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v694[7]; // [rsp+E8h] [rbp+1Fh] BYREF
  int v695; // [rsp+138h] [rbp+6Fh]
  _DWORD *v696; // [rsp+148h] [rbp+7Fh] BYREF

  qword_182781228 = a2;
  v5 = *(_QWORD *)(a2 + 16);
  qword_182781220 = v5;
  if ( !byte_1826CB269 )
  {
    if ( !byte_1826CB268 )
    {
      sub_1817C4800(a1, &qword_1826CB270, "__main__");
      byte_1826CB268 = 1;
    }
    sub_1804931F0();
    v5 = qword_182781220;
    byte_1826CB269 = 1;
  }
  sub_180005C00(v5, qword_1826A4BD0, Py_NoneStruct[0]);
  v6 = (_QWORD *)sub_180004100(qword_182781220, qword_1826A4C20);
  if ( !v6 || !*v6 )
    sub_180005C00(qword_182781220, qword_1826A4C20, qword_18277E368);
  v7 = sub_1817A79D0(a3);
  v8 = qword_1826A4C48;
  v9 = (int *)v7;
  v10 = qword_182781220;
  v11 = (int **)sub_180004100(qword_182781220, qword_1826A4C48);
  if ( !v11 )
  {
LABEL_16:
    PyDict_SetItem(v10, v8, v9);
    goto LABEL_17;
  }
  v12 = *v11;
  if ( v9 != *v11 )
  {
    if ( v12 )
    {
      if ( (unsigned int)*v9 < 0xC0000000 )
        ++*v9;
      *v11 = v9;
      if ( *v12 >= 0 )
      {
        v13 = *v12 - 1;
        *v12 = v13;
        if ( !v13 )
          (*(void (**)(void))(*((_QWORD *)v12 + 1) + 48LL))();
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
LABEL_17:
  sub_180005C00(qword_182781220, qword_1826A4E20, Py_NoneStruct[0]);
  v14 = 0;
  v677 = 0;
  sub_180005C00(qword_182781220, qword_1826A4BF8, Py_NoneStruct[0]);
  sub_180005C00(qword_182781220, qword_1826A4C00, qword_1826CC828);
  sub_180005C00(qword_182781220, qword_1826A4DA0, Py_NoneStruct[0]);
  sub_180005C00(qword_182781220, qword_1826A4C50, qword_1826A4B50);
  v15 = sub_1817A1380();
  sub_180005C00(qword_182781220, qword_1826CC290, v15);
  v16 = sub_1817A1260();
  sub_180005C00(qword_182781220, qword_1826CC298, v16);
  v17 = sub_1817A1470();
  sub_180005C00(qword_182781220, qword_1826CC2A0, v17);
  v680 = sub_1817A4B60(qword_1826CC978, qword_182781228);
  v18 = v680;
  sub_180011220(a1, v680);
  v19 = 7;
  v20 = qword_1826CC2B0;
  v21 = qword_1826CC2A8;
  v22 = qword_182781220;
  v664 = qword_1826A4B70;
  *(_DWORD *)(v680 + 40) = 7;
  v23 = sub_1817A1690(a1, v21, v22, Py_NoneStruct[0], v20, v664);
  v24 = v23;
  if ( !v23 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
LABEL_1289:
    v126 = v18;
LABEL_1290:
    v642 = *(_QWORD *)(v677 + 40);
    if ( v642 )
    {
      if ( *(_QWORD *)(v642 + 24) == v126 )
      {
LABEL_1310:
        sub_1800111B0(a1);
        v651 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = v677;
        if ( v651 && *(int *)v651 >= 0 )
        {
          v652 = *(_DWORD *)v651 - 1;
          *(_DWORD *)v651 = v652;
          if ( !v652 )
            (*(void (**)(void))(*(_QWORD *)(v651 + 8) + 48LL))();
        }
        return 0;
      }
      v643 = sub_1817A4C30(v126, v19);
      v645 = v643;
      *(_QWORD *)(v643 + 16) = v642;
      if ( *(_DWORD *)v642 < 0xC0000000 )
        ++*(_DWORD *)v642;
      v644 = v643 == Py_NoneStruct[0];
    }
    else
    {
      v643 = sub_1817A4C30(v126, v19);
      v644 = v643 == Py_NoneStruct[0];
      v645 = v643;
    }
    v646 = v677;
    v647 = *(_QWORD *)(v677 + 40);
    if ( v644 )
    {
      v643 = 0;
    }
    else if ( v645 )
    {
      v648 = *(_DWORD *)v643;
      if ( v648 < 0xC0000000 )
        *(_DWORD *)v645 = v648 + 1;
      v643 = v645;
    }
    *(_QWORD *)(v646 + 40) = v643;
    if ( v647 )
    {
      if ( *(int *)v647 >= 0 )
      {
        v649 = *(_DWORD *)v647 - 1;
        *(_DWORD *)v647 = v649;
        if ( !v649 )
          (*(void (**)(void))(*(_QWORD *)(v647 + 8) + 48LL))();
      }
    }
    if ( v645 )
    {
      if ( *(int *)v645 >= 0 )
      {
        v650 = *(_DWORD *)v645 - 1;
        *(_DWORD *)v645 = v650;
        if ( !v650 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v645 + 8) + 48LL))(v645);
      }
    }
    goto LABEL_1310;
  }
  if ( *(_QWORD *)(v23 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v25 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBD80, qword_1826A4B70);
  else
    v25 = sub_1817A1D10(a1, v24, qword_1826CBD80);
  if ( !v25 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBD80, v25);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v26 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB388, qword_1826A4B70);
  else
    v26 = sub_1817A1D10(a1, v24, qword_1826CB388);
  if ( !v26 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB388, v26);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v27 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB478, qword_1826A4B70);
  else
    v27 = sub_1817A1D10(a1, v24, qword_1826CB478);
  if ( !v27 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB478, v27);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v28 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB360, qword_1826A4B70);
  else
    v28 = sub_1817A1D10(a1, v24, qword_1826CB360);
  if ( !v28 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB360, v28);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v29 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB420, qword_1826A4B70);
  else
    v29 = sub_1817A1D10(a1, v24, qword_1826CB420);
  if ( !v29 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB420, v29);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v30 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBE08, qword_1826A4B70);
  else
    v30 = sub_1817A1D10(a1, v24, qword_1826CBE08);
  if ( !v30 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBE08, v30);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v31 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB9A0, qword_1826A4B70);
  else
    v31 = sub_1817A1D10(a1, v24, qword_1826CB9A0);
  if ( !v31 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB9A0, v31);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v32 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CC2B8, qword_1826A4B70);
  else
    v32 = sub_1817A1D10(a1, v24, qword_1826CC2B8);
  if ( !v32 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CC2B8, v32);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v33 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB3B8, qword_1826A4B70);
  else
    v33 = sub_1817A1D10(a1, v24, qword_1826CB3B8);
  if ( !v33 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB3B8, v33);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v34 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB430, qword_1826A4B70);
  else
    v34 = sub_1817A1D10(a1, v24, qword_1826CB430);
  if ( !v34 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB430, v34);
  if ( *(int *)v24 >= 0 )
  {
    v35 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v35;
    if ( !v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 19;
  v36 = qword_1826CC2A8;
  v37 = qword_182781220;
  v665 = qword_1826A4B70;
  v653 = qword_1826CC2C0;
  *(_DWORD *)(v18 + 40) = 19;
  v38 = sub_1817A1690(a1, v36, v37, Py_NoneStruct[0], v653, v665);
  v24 = v38;
  if ( !v38 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v39 = *(_QWORD *)(v38 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype()
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB310, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB310);
  if ( !v39 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB310, v39);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v40 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB820, qword_1826A4B70);
  else
    v40 = sub_1817A1D10(a1, v24, qword_1826CB820);
  if ( !v40 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB820, v40);
  if ( *(int *)v24 >= 0 )
  {
    v41 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v41;
    if ( !v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 20;
  v42 = qword_1826CC2C8;
  v43 = qword_182781220;
  v666 = qword_1826A4B70;
  v654 = qword_1826CC2D0;
  *(_DWORD *)(v18 + 40) = 20;
  v44 = sub_1817A1690(a1, v42, v43, Py_NoneStruct[0], v654, v666);
  v24 = v44;
  if ( !v44 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v45 = *(_QWORD *)(v44 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype()
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB2C0, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB2C0);
  if ( !v45 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB2C0, v45);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v46 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB510, qword_1826A4B70);
  else
    v46 = sub_1817A1D10(a1, v24, qword_1826CB510);
  if ( !v46 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB510, v46);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v47 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBF18, qword_1826A4B70);
  else
    v47 = sub_1817A1D10(a1, v24, qword_1826CBF18);
  if ( !v47 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBF18, v47);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v48 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB888, qword_1826A4B70);
  else
    v48 = sub_1817A1D10(a1, v24, qword_1826CB888);
  if ( !v48 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB888, v48);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v49 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CC088, qword_1826A4B70);
  else
    v49 = sub_1817A1D10(a1, v24, qword_1826CC088);
  if ( !v49 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CC088, v49);
  if ( *(int *)v24 >= 0 )
  {
    v50 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v50;
    if ( !v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 21;
  v51 = qword_1826CC2C8;
  v52 = qword_182781220;
  v667 = qword_1826A4B70;
  v655 = qword_1826CC2D8;
  *(_DWORD *)(v18 + 40) = 21;
  v53 = sub_1817A1690(a1, v51, v52, Py_NoneStruct[0], v655, v667);
  v24 = v53;
  if ( !v53 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v54 = *(_QWORD *)(v53 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype()
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB740, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB740);
  if ( !v54 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB740, v54);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v55 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB790, qword_1826A4B70);
  else
    v55 = sub_1817A1D10(a1, v24, qword_1826CB790);
  if ( !v55 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB790, v55);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v56 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB778, qword_1826A4B70);
  else
    v56 = sub_1817A1D10(a1, v24, qword_1826CB778);
  if ( !v56 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB778, v56);
  if ( *(int *)v24 >= 0 )
  {
    v57 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v57;
    if ( !v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 22;
  v58 = qword_1826CC2E0;
  v59 = qword_182781220;
  v668 = qword_1826A4B70;
  v656 = qword_1826CC2E8;
  *(_DWORD *)(v18 + 40) = 22;
  v60 = sub_1817A1690(a1, v58, v59, Py_NoneStruct[0], v656, v668);
  v24 = v60;
  if ( !v60 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v61 = *(_QWORD *)(v60 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype()
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CC2F0, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CC2F0);
  if ( !v61 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CC2F0, v61);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v62 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB850, qword_1826A4B70);
  else
    v62 = sub_1817A1D10(a1, v24, qword_1826CB850);
  if ( !v62 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB850, v62);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v63 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBEC0, qword_1826A4B70);
  else
    v63 = sub_1817A1D10(a1, v24, qword_1826CBEC0);
  if ( !v63 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBEC0, v63);
  v64 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB858, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB858);
  if ( !v64 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB858, v64);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v65 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBE20, qword_1826A4B70);
  else
    v65 = sub_1817A1D10(a1, v24, qword_1826CBE20);
  if ( !v65 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBE20, v65);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v66 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBE40, qword_1826A4B70);
  else
    v66 = sub_1817A1D10(a1, v24, qword_1826CBE40);
  if ( !v66 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBE40, v66);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v67 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBE80, qword_1826A4B70);
  else
    v67 = sub_1817A1D10(a1, v24, qword_1826CBE80);
  if ( !v67 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBE80, v67);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v68 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CC2F8, qword_1826A4B70);
  else
    v68 = sub_1817A1D10(a1, v24, qword_1826CC2F8);
  if ( !v68 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CC2F8, v68);
  if ( *(_QWORD *)(v24 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v69 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB618, qword_1826A4B70);
  else
    v69 = sub_1817A1D10(a1, v24, qword_1826CB618);
  if ( !v69 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB618, v69);
  if ( *(int *)v24 >= 0 )
  {
    v70 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v70;
    if ( !v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 34;
  v71 = qword_1826CBF00;
  v72 = qword_182781220;
  v669 = qword_1826A4B70;
  v657 = qword_1826CC300;
  *(_DWORD *)(v18 + 40) = 34;
  v73 = sub_1817A1690(a1, v71, v72, Py_NoneStruct[0], v657, v669);
  v74 = v73;
  if ( !v73 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  if ( *(_QWORD *)(v73 + 8) == PyModule_Type || (unsigned int)PyType_IsSubtype() )
    v75 = sub_1817A1E90(a1, v74, qword_182781220, qword_1826CC1C8, qword_1826A4B70);
  else
    v75 = sub_1817A1D10(a1, v74, qword_1826CC1C8);
  v76 = v75;
  if ( *(int *)v74 >= 0 )
  {
    v77 = *(_DWORD *)v74 - 1;
    *(_DWORD *)v74 = v77;
    if ( !v77 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v74 + 8) + 48LL))(v74);
  }
  if ( !v76 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  sub_180005C90(qword_182781220, qword_1826CC1C8, v76);
  v19 = 35;
  v78 = qword_1826CC308;
  v79 = qword_182781220;
  v670 = qword_1826A4B70;
  v658 = qword_1826CC310;
  *(_DWORD *)(v18 + 40) = 35;
  v80 = sub_1817A1690(a1, v78, v79, Py_NoneStruct[0], v658, v670);
  v81 = v80;
  if ( !v80 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  if ( (unsigned int)sub_180011AA0(v80, PyModule_Type) )
    v82 = sub_1817A1E90(a1, v81, qword_182781220, qword_1826CBC88, qword_1826A4B70);
  else
    v82 = sub_1817A1D10(a1, v81, qword_1826CBC88);
  v83 = v82;
  if ( *(int *)v81 >= 0 )
  {
    v84 = *(_DWORD *)v81 - 1;
    *(_DWORD *)v81 = v84;
    if ( !v84 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v81 + 8) + 48LL))(v81);
  }
  if ( !v83 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  sub_180005C90(qword_182781220, qword_1826CBC88, v83);
  v19 = 36;
  v85 = qword_1826CBB28;
  v86 = qword_182781220;
  v671 = qword_1826A4B70;
  v659 = qword_1826CC318;
  *(_DWORD *)(v18 + 40) = 36;
  v87 = sub_1817A1690(a1, v85, v86, Py_NoneStruct[0], v659, v671);
  v24 = v87;
  if ( !v87 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v88 = (unsigned int)sub_180011AA0(v87, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBB20, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CBB20);
  if ( !v88 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBB20, v88);
  v89 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBD18, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CBD18);
  if ( !v89 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CBD18, v89);
  if ( *(int *)v24 >= 0 )
  {
    v90 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v90;
    if ( !v90 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 37;
  v91 = qword_1826CB5D0;
  v92 = qword_182781220;
  v672 = qword_1826A4B70;
  *(_DWORD *)(v18 + 40) = 37;
  v93 = sub_1817A1690(a1, v91, v92, Py_NoneStruct[0], Py_NoneStruct[0], v672);
  if ( !v93 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  sub_180005C90(qword_182781220, qword_1826CB5D0, v93);
  v19 = 39;
  v94 = qword_1826CC2A8;
  v95 = qword_182781220;
  v673 = qword_1826A4B70;
  v660 = qword_1826CC320;
  *(_DWORD *)(v18 + 40) = 39;
  v96 = sub_1817A1690(a1, v94, v95, Py_NoneStruct[0], v660, v673);
  v24 = v96;
  if ( !v96 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v97 = (unsigned int)sub_180011AA0(v96, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB310, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB310);
  if ( !v97 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB310, v97);
  v98 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB3B8, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB3B8);
  if ( !v98 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB3B8, v98);
  v99 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
      ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB430, qword_1826A4B70)
      : sub_1817A1D10(a1, v24, qword_1826CB430);
  if ( !v99 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB430, v99);
  v100 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB478, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB478);
  if ( !v100 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB478, v100);
  v101 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB420, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB420);
  if ( !v101 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB420, v101);
  v102 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB360, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB360);
  if ( !v102 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB360, v102);
  v103 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB9A0, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB9A0);
  if ( !v103 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB9A0, v103);
  v104 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB3D0, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB3D0);
  if ( !v104 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB3D0, v104);
  if ( *(int *)v24 >= 0 )
  {
    v105 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v105;
    if ( !v105 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 49;
  v106 = qword_1826CC2C8;
  v107 = qword_182781220;
  v674 = qword_1826A4B70;
  v661 = qword_1826CC328;
  *(_DWORD *)(v18 + 40) = 49;
  v108 = sub_1817A1690(a1, v106, v107, Py_NoneStruct[0], v661, v674);
  v24 = v108;
  if ( !v108 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v109 = (unsigned int)sub_180011AA0(v108, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB2C0, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB2C0);
  if ( !v109 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB2C0, v109);
  v110 = (unsigned int)sub_180011AA0(v24, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CB510, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CB510);
  if ( !v110 )
    goto LABEL_1285;
  sub_180005C90(qword_182781220, qword_1826CB510, v110);
  if ( *(int *)v24 >= 0 )
  {
    v111 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v111;
    if ( !v111 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 50;
  v112 = qword_1826CC2E0;
  v113 = qword_182781220;
  v675 = qword_1826A4B70;
  v662 = qword_1826CC330;
  *(_DWORD *)(v18 + 40) = 50;
  v114 = sub_1817A1690(a1, v112, v113, Py_NoneStruct[0], v662, v675);
  v24 = v114;
  if ( !v114 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  v115 = (unsigned int)sub_180011AA0(v114, PyModule_Type)
       ? sub_1817A1E90(a1, v24, qword_182781220, qword_1826CBEC0, qword_1826A4B70)
       : sub_1817A1D10(a1, v24, qword_1826CBEC0);
  if ( !v115
    || ((sub_180005C90(qword_182781220, qword_1826CBEC0, v115), !(unsigned int)sub_180011AA0(v24, PyModule_Type))
      ? (v116 = sub_1817A1D10(a1, v24, qword_1826CC338))
      : (v116 = sub_1817A1E90(a1, v24, qword_182781220, qword_1826CC338, qword_1826A4B70)),
        !v116) )
  {
LABEL_1285:
    v640 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v677 = 0;
    if ( *(int *)v24 >= 0 )
    {
      v641 = *(_DWORD *)v24 - 1;
      *(_DWORD *)v24 = v641;
      if ( !v641 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
    }
    v677 = v640;
    goto LABEL_1289;
  }
  sub_180005C90(qword_182781220, qword_1826CC338, v116);
  if ( *(int *)v24 >= 0 )
  {
    v117 = *(_DWORD *)v24 - 1;
    *(_DWORD *)v24 = v117;
    if ( !v117 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24);
  }
  v19 = 53;
  v118 = qword_1826CC2C8;
  v119 = qword_182781220;
  v676 = qword_1826A4B70;
  v663 = qword_1826CC340;
  *(_DWORD *)(v18 + 40) = 53;
  v120 = sub_1817A1690(a1, v118, v119, Py_NoneStruct[0], v663, v676);
  v121 = v120;
  if ( !v120 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  if ( (unsigned int)sub_180011AA0(v120, PyModule_Type) )
    v122 = sub_1817A1E90(a1, v121, qword_182781220, qword_1826CBA40, qword_1826A4B70);
  else
    v122 = sub_1817A1D10(a1, v121, qword_1826CBA40);
  v123 = v122;
  if ( *(int *)v121 >= 0 )
  {
    v124 = *(_DWORD *)v121 - 1;
    *(_DWORD *)v121 = v124;
    if ( !v124 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v121 + 8) + 48LL))(v121);
  }
  if ( !v123 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1289;
  }
  sub_180005C90(qword_182781220, qword_1826CBA40, v123);
  v19 = 56;
  v125 = (_DWORD *)sub_1804D6640(a1);
  v695 = 56;
  if ( !v125 )
  {
    sub_1817AA970(a1, &v677, qword_1826CB430);
    v126 = v680;
    goto LABEL_1290;
  }
  v127 = 0;
  v128 = 0;
  v129 = sub_1817A4CD0(a1, 1);
  v130 = v129;
  if ( *v125 < 0xC0000000 )
    ++*v125;
  *(_QWORD *)(v129 + 32) = v125;
  if ( *(_DWORD *)v129 < 0xC0000000 )
    ++*(_DWORD *)v129;
  v696 = (_DWORD *)v129;
  v131 = sub_1804C93C0(a1, &v696);
  if ( !v131 )
  {
    v131 = 0;
LABEL_303:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
LABEL_411:
    v677 = 0;
LABEL_412:
    if ( *(int *)v130 >= 0 )
    {
      v191 = *(_DWORD *)v130 - 1;
      *(_DWORD *)v130 = v191;
      if ( !v191 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v130 + 8) + 48LL))(v130);
    }
    if ( v131 )
    {
      if ( *(int *)v131 >= 0 )
      {
        v192 = *(_DWORD *)v131 - 1;
        *(_DWORD *)v131 = v192;
        if ( !v192 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v131 + 8) + 48LL))(v131);
      }
    }
    if ( v14 )
    {
      if ( *(int *)v14 >= 0 )
      {
        v193 = *(_DWORD *)v14 - 1;
        *(_DWORD *)v14 = v193;
        if ( !v193 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 48LL))(v14);
      }
    }
    if ( v127 )
    {
      if ( (int)*v127 >= 0 )
      {
        v194 = *v127 - 1;
        *v127 = v194;
        if ( !v194 )
          (*(void (__fastcall **)(_DWORD *))(*((_QWORD *)v127 + 1) + 48LL))(v127);
      }
    }
    if ( v128 )
    {
      if ( *(int *)v128 >= 0 )
      {
        v195 = *(_DWORD *)v128 - 1;
        *(_DWORD *)v128 = v195;
        if ( !v195 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v128 + 8) + 48LL))(v128);
      }
    }
LABEL_431:
    v19 = v695;
    goto LABEL_432;
  }
  v14 = sub_1817A3AC0(a1);
  v133 = sub_180003C90(v131);
  if ( v133 == -1 )
    goto LABEL_303;
  if ( v133 )
  {
    v134 = sub_180004350(a1, v131, qword_1826A4B70, 0);
    v135 = v134;
    if ( !v134 )
      goto LABEL_307;
    v136 = sub_181792120(v134);
    if ( *(int *)v135 >= 0 )
    {
      v137 = *(_DWORD *)v135 - 1;
      *(_DWORD *)v135 = v137;
      if ( !v137 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v135 + 8) + 48LL))(v135);
    }
    if ( !v136 )
      goto LABEL_307;
  }
  else
  {
    v136 = PyType_Type;
    if ( PyType_Type < 0xC0000000 )
      ++PyType_Type;
  }
  v138 = sub_1817B00C0(a1, v136, v131);
  v139 = *(_DWORD *)v136;
  v127 = (_DWORD *)v138;
  v681 = (int *)v138;
  if ( v139 >= 0 )
  {
    v140 = v139 - 1;
    *(_DWORD *)v136 = v140;
    if ( !v140 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v136 + 8) + 48LL))(v136);
  }
  if ( !v127 )
  {
LABEL_307:
    v677 = *(_QWORD *)(a1 + 112);
    v127 = 0;
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
    goto LABEL_411;
  }
  v678 = v127;
  v141 = sub_1817A0EF0(a1, v127, qword_1826CC348);
  if ( v141 == -1 )
    goto LABEL_303;
  if ( v141 )
  {
    v142 = sub_1817A3670(a1, v127, qword_1826CC348);
    if ( !v142 )
      goto LABEL_322;
    v696 = (_DWORD *)qword_1826CB810;
    v143 = sub_1817A4CD0(a1, 2);
    v144 = v696;
    if ( *v696 < 0xC0000000 )
      ++*v696;
    *(_QWORD *)(v143 + 32) = v144;
    if ( *(_DWORD *)v131 < 0xC0000000 )
      ++*(_DWORD *)v131;
    v145 = v680;
    *(_QWORD *)(v143 + 40) = v131;
    *(_DWORD *)(v145 + 40) = 56;
    v146 = sub_180001300(a1, v142, v143, v14);
    v147 = *(_DWORD *)v142;
    v696 = (_DWORD *)v146;
    if ( v147 >= 0 )
    {
      v148 = v147 - 1;
      *(_DWORD *)v142 = v148;
      if ( !v148 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v142 + 8) + 48LL))(v142);
    }
    if ( *(int *)v143 >= 0 )
    {
      v149 = *(_DWORD *)v143 - 1;
      *(_DWORD *)v143 = v149;
      if ( !v149 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v143 + 8) + 48LL))(v143);
    }
    v150 = v696;
    if ( !v696 || (v128 = (__int64)v696, v151 = sub_1817A0EF0(a1, v696, qword_1826CB8F0), v151 == -1) )
    {
LABEL_322:
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
LABEL_410:
      v127 = v678;
      goto LABEL_411;
    }
    v152 = Py_FalseStruct;
    if ( v151 )
      v152 = Py_TrueStruct;
    if ( !(unsigned int)sub_180003C90(v152) )
    {
      v684 = (int *)qword_1826CC350;
      v683 = (int *)sub_181791250(a1, v681, *(_QWORD *)&qword_1826A4BC8, qword_1826CC358);
      if ( v683 )
      {
        v153 = sub_1817A4CD0(a1, 2);
        *(_QWORD *)(v153 + 32) = v683;
        v154 = sub_181792120(v150);
        v155 = sub_1817A3670(a1, v154, *(_QWORD *)&qword_1826A4BC8);
        v156 = *(_DWORD *)v154;
        v683 = (int *)v155;
        if ( v156 >= 0 )
        {
          v157 = v156 - 1;
          *(_DWORD *)v154 = v157;
          if ( !v157 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v154 + 8) + 48LL))(v154);
            v155 = (__int64)v683;
          }
        }
        if ( v155 )
        {
          *(_QWORD *)(v153 + 40) = v155;
          v159 = sub_18178F680(v684, v153);
          if ( *(int *)v153 >= 0 )
          {
            v160 = *(_DWORD *)v153 - 1;
            *(_DWORD *)v153 = v160;
            if ( !v160 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v153 + 8) + 48LL))(v153);
          }
          if ( !v159 )
          {
            v127 = v678;
            v677 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 112) = 0;
            v132 = v677;
            v677 = 0;
            goto LABEL_412;
          }
          *(_DWORD *)(v680 + 40) = 56;
          v161 = sub_18179C5C0(a1, PyExc_TypeError, v159);
          if ( *(int *)v159 >= 0 )
          {
            v162 = *(_DWORD *)v159 - 1;
            *(_DWORD *)v159 = v162;
            if ( !v162 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v159 + 8) + 48LL))(v159);
          }
          v677 = v161;
          sub_1817AAC50(a1, &v677);
        }
        else
        {
          v677 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0;
          if ( *(int *)v153 < 0 || (v158 = *(_DWORD *)v153 - 1, (*(_DWORD *)v153 = v158) != 0) )
          {
            v132 = v677;
            v127 = v681;
            goto LABEL_411;
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v153 + 8) + 48LL))(v153);
        }
        v132 = v677;
        v127 = v678;
        v677 = 0;
        goto LABEL_412;
      }
      goto LABEL_322;
    }
  }
  else
  {
    v128 = sub_1817A3AC0(a1);
  }
  v163 = PyCell_New(0);
  if ( *(_DWORD *)v128 < 0xC0000000 )
    ++*(_DWORD *)v128;
  if ( (unsigned int)PyObject_SetItem(v128, qword_1826A4BB8, qword_1826A4E50)
    || (unsigned int)PyObject_SetItem(v128, qword_1826A4BF8, qword_1826CC360)
    || (unsigned int)PyObject_SetItem(v128, qword_1826A4EB8, qword_1826CB810)
    || (unsigned int)PyObject_SetItem(v128, qword_1826CC370, qword_1826CC368) )
  {
    goto LABEL_406;
  }
  v682 = (int *)sub_1817A3A90(a1, qword_1826CC990, qword_182781228, 0, 8);
  v164 = v682;
  sub_1817A6F80(v682, v128);
  sub_180011220(a1, v682);
  v165 = qword_1826CC378;
  if ( *(_DWORD *)qword_1826CC378 < 0xC0000000 )
    ++*(_DWORD *)qword_1826CC378;
  Src = v163;
  if ( *(_DWORD *)v163 < 0xC0000000 )
    ++*(_DWORD *)v163;
  v683 = (int *)sub_1817A7190(
                  (int)sub_18049C6B0,
                  qword_1826A4C30,
                  qword_1826CC380,
                  qword_1826CC9A8,
                  v165,
                  0,
                  0,
                  qword_182781228,
                  0,
                  &Src,
                  1,
                  0);
  v166 = PyObject_SetItem(v128, *(_QWORD *)&qword_1826A4C30, v683);
  LODWORD(v696) = v166;
  v167 = v683;
  if ( *v683 >= 0 )
  {
    v168 = *v683 - 1;
    *v683 = v168;
    if ( !v168 )
    {
      (*(void (__fastcall **)(int *))(*((_QWORD *)v167 + 1) + 48LL))(v167);
      v166 = (int)v696;
    }
  }
  if ( v166 )
  {
    v169 = 59;
    goto LABEL_388;
  }
  v683 = (int *)sub_180492080(a1);
  v170 = PyObject_SetItem(v128, *(_QWORD *)&qword_1826CB6F0, v683);
  LODWORD(v696) = v170;
  v171 = v683;
  if ( *v683 >= 0 )
  {
    v172 = *v683 - 1;
    *v683 = v172;
    if ( !v172 )
    {
      (*(void (__fastcall **)(int *))(*((_QWORD *)v171 + 1) + 48LL))(v171);
      v170 = (int)v696;
    }
  }
  if ( v170 )
  {
    v169 = 73;
    goto LABEL_388;
  }
  v683 = (int *)sub_1804924A0(a1);
  v173 = PyObject_SetItem(v128, *(_QWORD *)&qword_1826CB700, v683);
  LODWORD(v696) = v173;
  v174 = v683;
  if ( *v683 >= 0 )
  {
    v175 = *v683 - 1;
    *v683 = v175;
    if ( !v175 )
    {
      (*(void (__fastcall **)(int *))(*((_QWORD *)v174 + 1) + 48LL))(v174);
      v173 = (int)v696;
    }
  }
  if ( v173 )
  {
    v169 = 76;
    goto LABEL_388;
  }
  v683 = (int *)sub_180492860(a1);
  v176 = PyObject_SetItem(v128, *(_QWORD *)&qword_1826CB708, v683);
  LODWORD(v696) = v176;
  v177 = v683;
  if ( *v683 >= 0 )
  {
    v178 = *v683 - 1;
    *v683 = v178;
    if ( !v178 )
    {
      (*(void (__fastcall **)(int *))(*((_QWORD *)v177 + 1) + 48LL))(v177);
      v176 = (int)v696;
    }
  }
  if ( v176 )
  {
    v169 = 79;
LABEL_388:
    v677 = *(_QWORD *)(a1 + 112);
    v179 = v677;
    *(_QWORD *)(a1 + 112) = 0;
    v180 = *(_QWORD *)(v179 + 40);
    if ( v180 )
    {
      if ( *(int **)(v180 + 24) == v164 )
      {
LABEL_397:
        sub_1817A6FA0(v164, "c", v163);
        sub_1800111B0(a1);
        sub_1817A7120(v164);
LABEL_407:
        v132 = v677;
        v677 = 0;
        if ( *(int *)v128 >= 0 )
        {
          v190 = *(_DWORD *)v128 - 1;
          *(_DWORD *)v128 = v190;
          if ( !v190 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v128 + 8) + 48LL))(v128);
        }
        goto LABEL_410;
      }
      v181 = sub_180003B60(v180, v164, v169);
    }
    else
    {
      v181 = sub_1817A4C30(v164, (unsigned int)v169);
    }
    v182 = v181;
    sub_180003B90(v677, v181);
    if ( v182 )
    {
      if ( *(int *)v182 >= 0 )
      {
        v183 = *(_DWORD *)v182 - 1;
        *(_DWORD *)v182 = v183;
        if ( !v183 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v182 + 8) + 48LL))(v182);
      }
    }
    v164 = v682;
    goto LABEL_397;
  }
  sub_1800111B0(a1);
  sub_1817A7120(v164);
  if ( (unsigned int)PyObject_SetItem(v128, qword_1826CC3A0, qword_1826A4B60) )
    goto LABEL_406;
  v184 = sub_1817AF7A0(v131, v130);
  if ( v184 == -1 || v184 == 1 && (unsigned int)PyObject_SetItem(v128, qword_1826CC3A8, v130) )
    goto LABEL_406;
  v185 = qword_1826CB810;
  PyDict_SetItem(v128, qword_1826A4E58, v163);
  v186 = sub_180011A30(a1, v185, v131, v128);
  v187 = sub_180001300(a1, v681, v186, v14);
  v188 = *(_DWORD *)v186;
  v696 = (_DWORD *)v187;
  if ( v188 >= 0 )
  {
    v189 = v188 - 1;
    *(_DWORD *)v186 = v189;
    if ( !v189 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v186 + 8) + 48LL))(v186);
      v187 = (__int64)v696;
    }
  }
  if ( !v187 )
  {
LABEL_406:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_407;
  }
  v196 = *(_QWORD *)(v163 + 16);
  *(_QWORD *)(v163 + 16) = v187;
  if ( v196 )
  {
    if ( *(int *)v196 >= 0 )
    {
      v197 = *(_DWORD *)v196 - 1;
      *(_DWORD *)v196 = v197;
      if ( !v197 )
        (*(void (**)(void))(*(_QWORD *)(v196 + 8) + 48LL))();
    }
  }
  v198 = *(_DWORD **)(v163 + 16);
  if ( *v198 < 0xC0000000 )
    ++*v198;
  if ( *(int *)v128 >= 0 )
  {
    v199 = *(_DWORD *)v128 - 1;
    *(_DWORD *)v128 = v199;
    if ( !v199 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v128 + 8) + 48LL))(v128);
  }
  if ( *(int *)v163 >= 0 )
  {
    v200 = *(_DWORD *)v163 - 1;
    *(_DWORD *)v163 = v200;
    if ( !v200 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v163 + 8) + 48LL))(v163);
  }
  sub_180005C90(qword_182781220, qword_1826CB810, v198);
  if ( *(int *)v130 >= 0 )
  {
    v201 = *(_DWORD *)v130 - 1;
    *(_DWORD *)v130 = v201;
    if ( !v201 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v130 + 8) + 48LL))(v130);
  }
  if ( *(int *)v131 >= 0 )
  {
    v202 = *(_DWORD *)v131 - 1;
    *(_DWORD *)v131 = v202;
    if ( !v202 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v131 + 8) + 48LL))(v131);
  }
  if ( *(int *)v14 >= 0 )
  {
    v203 = *(_DWORD *)v14 - 1;
    *(_DWORD *)v14 = v203;
    if ( !v203 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 48LL))(v14);
  }
  v204 = v681;
  if ( *v681 >= 0 )
  {
    v205 = *v681 - 1;
    *v681 = v205;
    if ( !v205 )
      (*(void (**)(void))(*((_QWORD *)v204 + 1) + 48LL))();
  }
  if ( *(int *)v128 >= 0 )
  {
    v206 = *(_DWORD *)v128 - 1;
    *(_DWORD *)v128 = v206;
    if ( !v206 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v128 + 8) + 48LL))(v128);
  }
  if ( SLODWORD(Py_NoneStruct[0]) >= 0 && !--LODWORD(Py_NoneStruct[0]) )
    (*(void (**)(void))(Py_NoneStruct[1] + 48))();
  v19 = 83;
  v207 = (unsigned int *)sub_1804D6CA0(a1);
  v208 = a1;
  if ( !v207 )
  {
LABEL_464:
    sub_1817AA970(v208, &v677, qword_1826CB388);
    v126 = v680;
    goto LABEL_1290;
  }
  v209 = 0;
  v210 = 0;
  v211 = sub_1817A4CD0(a1, 1);
  v212 = *v207;
  v683 = (int *)v211;
  if ( v212 < 0xC0000000 )
    *v207 = v212 + 1;
  *(_QWORD *)(v211 + 32) = v207;
  if ( *(_DWORD *)v211 < 0xC0000000 )
    ++*(_DWORD *)v211;
  v696 = (_DWORD *)v211;
  v682 = (int *)sub_1804C93C0(a1, &v696);
  v213 = v682;
  if ( !v682 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    v213 = 0;
    *(_QWORD *)(a1 + 112) = 0;
    v214 = 0;
    v132 = v677;
LABEL_868:
    v677 = 0;
    goto LABEL_869;
  }
  v678 = (int *)sub_1817A3AC0(a1);
  v214 = v678;
  v215 = sub_180003C90(v682);
  if ( v215 == -1 )
  {
LABEL_472:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
    goto LABEL_868;
  }
  if ( v215 )
  {
    v216 = sub_180004350(a1, v682, qword_1826A4B70, 0);
    v217 = v216;
    if ( !v216 )
    {
LABEL_475:
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
LABEL_867:
      v214 = v678;
      goto LABEL_868;
    }
    v218 = sub_181792120(v216);
    if ( *(int *)v217 >= 0 )
    {
      v219 = *(_DWORD *)v217 - 1;
      *(_DWORD *)v217 = v219;
      if ( !v219 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v217 + 8) + 48LL))(v217);
    }
    v214 = v678;
    if ( !v218 )
      goto LABEL_472;
  }
  else
  {
    v218 = PyType_Type;
    if ( PyType_Type < 0xC0000000 )
      ++PyType_Type;
  }
  v220 = sub_1817B00C0(a1, v218, v213);
  v221 = *(_DWORD *)v218;
  v209 = (int *)v220;
  v684 = (int *)v220;
  if ( v221 >= 0 )
  {
    v222 = v221 - 1;
    *(_DWORD *)v218 = v222;
    if ( !v222 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v218 + 8) + 48LL))(v218);
  }
  if ( !v209 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    v209 = 0;
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
    goto LABEL_868;
  }
  v681 = v209;
  v223 = sub_1817A0EF0(a1, v209, qword_1826CC348);
  if ( v223 == -1 )
    goto LABEL_472;
  if ( v223 )
  {
    v224 = sub_1817A3670(a1, v209, qword_1826CC348);
    if ( !v224 )
      goto LABEL_475;
    v225 = (_DWORD *)qword_1826CBDF0;
    v226 = sub_1817A4CD0(a1, 2);
    v227 = v226;
    if ( *v225 < 0xC0000000 )
      ++*v225;
    *(_QWORD *)(v226 + 32) = v225;
    if ( (unsigned int)*v213 < 0xC0000000 )
      ++*v213;
    v228 = v678;
    *(_QWORD *)(v226 + 40) = v213;
    *(_DWORD *)(v680 + 40) = 83;
    v229 = sub_180001300(a1, v224, v226, v228);
    if ( *(int *)v224 >= 0 )
    {
      v230 = *(_DWORD *)v224 - 1;
      *(_DWORD *)v224 = v230;
      if ( !v230 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v224 + 8) + 48LL))(v224);
    }
    if ( *(int *)v227 >= 0 )
    {
      v231 = *(_DWORD *)v227 - 1;
      *(_DWORD *)v227 = v231;
      if ( !v231 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v227 + 8) + 48LL))(v227);
    }
    if ( !v229 || (v210 = v229, v232 = sub_1817A0EF0(a1, v229, qword_1826CB8F0), v232 == -1) )
    {
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
LABEL_866:
      v209 = v681;
      goto LABEL_867;
    }
    v233 = Py_FalseStruct;
    if ( v232 )
      v233 = Py_TrueStruct;
    if ( !(unsigned int)sub_180003C90(v233) )
    {
      v234 = qword_1826CC350;
      v235 = sub_181791250(a1, v684, *(_QWORD *)&qword_1826A4BC8, qword_1826CC358);
      if ( v235 )
      {
        v236 = sub_1817A4CD0(a1, 2);
        *(_QWORD *)(v236 + 32) = v235;
        v237 = sub_181792120(v229);
        v238 = sub_1817A3670(a1, v237, *(_QWORD *)&qword_1826A4BC8);
        if ( *(int *)v237 >= 0 )
        {
          v239 = *(_DWORD *)v237 - 1;
          *(_DWORD *)v237 = v239;
          if ( !v239 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v237 + 8) + 48LL))(v237);
        }
        if ( v238 )
        {
          *(_QWORD *)(v236 + 40) = v238;
          v241 = sub_18178F680(v234, v236);
          if ( *(int *)v236 >= 0 )
          {
            v242 = *(_DWORD *)v236 - 1;
            *(_DWORD *)v236 = v242;
            if ( !v242 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v236 + 8) + 48LL))(v236);
          }
          v19 = 83;
          if ( v241 )
          {
            *(_DWORD *)(v680 + 40) = 83;
            v243 = sub_18179C5C0(a1, PyExc_TypeError, v241);
            if ( *(int *)v241 >= 0 )
            {
              v244 = *(_DWORD *)v241 - 1;
              *(_DWORD *)v241 = v244;
              if ( !v244 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)(v241 + 8) + 48LL))(v241);
            }
            v677 = v243;
            sub_1817AAC50(a1, &v677);
            v132 = v677;
            v213 = v682;
            v214 = v678;
            v209 = v681;
            v677 = 0;
          }
          else
          {
            v213 = v682;
            v214 = v678;
            v209 = v681;
            v677 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 112) = 0;
            v132 = v677;
            v677 = 0;
          }
        }
        else
        {
          v677 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0;
          if ( *(int *)v236 < 0 || (v240 = *(_DWORD *)v236 - 1, (*(_DWORD *)v236 = v240) != 0) )
          {
            v132 = v677;
            v213 = v682;
            v19 = 83;
            v209 = v684;
            goto LABEL_867;
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v236 + 8) + 48LL))(v236);
          v132 = v677;
          v213 = v682;
          v214 = v678;
          v209 = v681;
          v677 = 0;
          v19 = 83;
        }
LABEL_869:
        v430 = v683;
        if ( *v683 >= 0 )
        {
          v431 = *v683 - 1;
          *v683 = v431;
          if ( !v431 )
            (*(void (**)(void))(*((_QWORD *)v430 + 1) + 48LL))();
        }
        if ( v213 )
        {
          if ( *v213 >= 0 )
          {
            v432 = *v213 - 1;
            *v213 = v432;
            if ( !v432 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v213 + 1) + 48LL))(v213);
          }
        }
        if ( v214 )
        {
          if ( *v214 >= 0 )
          {
            v433 = *v214 - 1;
            *v214 = v433;
            if ( !v433 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v214 + 1) + 48LL))(v214);
          }
        }
        if ( v209 )
        {
          if ( *v209 >= 0 )
          {
            v434 = *v209 - 1;
            *v209 = v434;
            if ( !v434 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v209 + 1) + 48LL))(v209);
          }
        }
        if ( v210 )
        {
          if ( *(int *)v210 >= 0 )
          {
            v435 = *(_DWORD *)v210 - 1;
            *(_DWORD *)v210 = v435;
            if ( !v435 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v210 + 8) + 48LL))(v210);
              v677 = v132;
              v126 = v680;
              goto LABEL_1290;
            }
          }
        }
LABEL_432:
        v677 = v132;
        v126 = v680;
        goto LABEL_1290;
      }
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
      goto LABEL_865;
    }
  }
  else
  {
    v210 = sub_1817A3AC0(a1);
  }
  v245 = PyCell_New(0);
  v246 = *(_DWORD *)v210;
  v247 = v245;
  v679 = v245;
  if ( v246 < 0xC0000000 )
    *(_DWORD *)v210 = v246 + 1;
  if ( (unsigned int)PyObject_SetItem(v210, qword_1826A4BB8, qword_1826A4E50)
    || (unsigned int)PyObject_SetItem(v210, qword_1826A4BF8, qword_1826CC3B0)
    || (unsigned int)PyObject_SetItem(v210, qword_1826A4EB8, qword_1826CBDF0)
    || (unsigned int)PyObject_SetItem(v210, qword_1826CC370, qword_1826CC3B8) )
  {
    goto LABEL_860;
  }
  v696 = (_DWORD *)sub_1817A3A90(a1, qword_1826CC988, qword_182781228, 0, 8);
  v248 = v696;
  sub_1817A6F80(v696, v210);
  sub_180011220(a1, v248);
  v249 = qword_1826CC378;
  if ( *(_DWORD *)qword_1826CC378 < 0xC0000000 )
    ++*(_DWORD *)qword_1826CC378;
  v686 = v247;
  if ( *(_DWORD *)v247 < 0xC0000000 )
    ++*(_DWORD *)v247;
  v250 = 0;
  v251 = sub_1817A7190(
           (int)sub_1804BC3A0,
           qword_1826A4C30,
           qword_1826CC3C0,
           qword_1826CC9A0,
           v249,
           0,
           0,
           qword_182781228,
           0,
           &v686,
           1,
           0);
  v252 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826A4C30, v251);
  if ( *(int *)v251 >= 0 )
  {
    v253 = *(_DWORD *)v251 - 1;
    *(_DWORD *)v251 = v253;
    if ( !v253 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v251 + 8) + 48LL))(v251);
  }
  if ( v252 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v250 = 86;
LABEL_842:
    v255 = "c";
LABEL_843:
    v420 = *(_QWORD *)(v677 + 40);
    if ( v420 )
    {
      if ( *(_DWORD **)(v420 + 24) == v248 )
      {
LABEL_851:
        sub_1817A6FA0(v248, v255, v247);
        sub_1800111B0(a1);
        sub_1817A7120(v248);
        goto LABEL_861;
      }
      v421 = sub_180003B60(v420, v248, v250);
    }
    else
    {
      v421 = sub_1817A4C30(v248, v250);
    }
    v422 = v421;
    sub_180003B90(v677, v421);
    if ( v422 )
    {
      if ( *(int *)v422 >= 0 )
      {
        v423 = *(_DWORD *)v422 - 1;
        *(_DWORD *)v422 = v423;
        if ( !v423 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v422 + 8) + 48LL))(v422);
      }
    }
    goto LABEL_851;
  }
  v254 = qword_1826CC3C8;
  v255 = 0;
  Item = PyObject_GetItem(v210, qword_1826A4E10);
  if ( !Item )
  {
    v257 = *(_QWORD *)(a1 + 112);
    if ( v257 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
      {
        v247 = v679;
        v677 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = 0;
        goto LABEL_843;
      }
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v257 >= 0 )
      {
        v258 = *(_DWORD *)v257 - 1;
        *(_DWORD *)v257 = v258;
        if ( !v258 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v257 + 8) + 48LL))(v257);
      }
    }
    Item = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  v259 = PyDict_NewPresized(1);
  PyDict_SetItem(v259, v254, Item);
  if ( *(int *)Item >= 0 )
  {
    v260 = *(_DWORD *)Item - 1;
    *(_DWORD *)Item = v260;
    if ( !v260 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(Item + 8) + 48LL))(Item);
  }
  v261 = sub_180492EC0(a1, v259);
  v262 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB330, v261);
  if ( *(int *)v261 >= 0 )
  {
    v263 = *(_DWORD *)v261 - 1;
    *(_DWORD *)v261 = v263;
    if ( !v263 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v261 + 8) + 48LL))(v261);
  }
  if ( v262 )
  {
    v247 = v679;
    v250 = 233;
LABEL_840:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_841;
  }
  v264 = sub_1804930A0(a1);
  v265 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB340, v264);
  if ( *(int *)v264 >= 0 )
  {
    v266 = *(_DWORD *)v264 - 1;
    *(_DWORD *)v264 = v266;
    if ( !v266 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v264 + 8) + 48LL))(v264);
  }
  if ( v265 )
  {
    v247 = v679;
    v250 = 244;
    goto LABEL_840;
  }
  v267 = sub_180493100(a1);
  v268 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB5F8, v267);
  if ( *(int *)v267 >= 0 )
  {
    v269 = *(_DWORD *)v267 - 1;
    *(_DWORD *)v267 = v269;
    if ( !v269 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v267 + 8) + 48LL))(v267);
  }
  if ( v268 )
  {
    v247 = v679;
    v250 = 251;
    goto LABEL_840;
  }
  v270 = PyObject_GetItem(v210, qword_1826CB988);
  if ( !v270 )
  {
    v271 = *(_QWORD *)(a1 + 112);
    if ( v271 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
        goto LABEL_585;
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v271 >= 0 )
      {
        v272 = *(_DWORD *)v271 - 1;
        *(_DWORD *)v271 = v272;
        if ( !v272 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v271 + 8) + 48LL))(v271);
      }
    }
    v270 = PyProperty_Type;
    if ( PyProperty_Type < 0xC0000000 )
      ++PyProperty_Type;
  }
  v273 = sub_180493160(a1);
  v696[10] = 254;
  v274 = sub_18179C5C0(a1, v270, v273);
  if ( *(int *)v270 >= 0 )
  {
    v275 = *(_DWORD *)v270 - 1;
    *(_DWORD *)v270 = v275;
    if ( !v275 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v270 + 8) + 48LL))(v270);
  }
  if ( *(int *)v273 >= 0 )
  {
    v276 = *(_DWORD *)v273 - 1;
    *(_DWORD *)v273 = v276;
    if ( !v276 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v273 + 8) + 48LL))(v273);
  }
  if ( !v274 )
  {
    v247 = v679;
    v250 = 254;
    goto LABEL_840;
  }
  v277 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB620, v274);
  if ( *(int *)v274 >= 0 )
  {
    v278 = *(_DWORD *)v274 - 1;
    *(_DWORD *)v274 = v278;
    if ( !v278 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v274 + 8) + 48LL))(v274);
  }
  if ( v277 )
  {
    v247 = v679;
    v250 = 255;
    goto LABEL_840;
  }
  v279 = PyObject_GetItem(v210, *(_QWORD *)&qword_1826CB620);
  if ( !v279 )
  {
    v280 = *(_QWORD *)(a1 + 112);
    if ( !v280 )
    {
LABEL_597:
      sub_1817AA970(a1, &v677, *(_QWORD *)&qword_1826CB620);
      v247 = v679;
      v250 = 258;
LABEL_841:
      v248 = v696;
      goto LABEL_842;
    }
    if ( (unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
    {
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v280 >= 0 )
      {
        v281 = *(_DWORD *)v280 - 1;
        *(_DWORD *)v280 = v281;
        if ( !v281 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v280 + 8) + 48LL))(v280);
      }
      goto LABEL_597;
    }
LABEL_605:
    v247 = v679;
    v250 = 258;
    goto LABEL_840;
  }
  v282 = sub_180491A20(a1);
  v696[10] = 258;
  v283 = sub_18179D910(a1, v279, qword_1826CC3F0, v282);
  if ( *(int *)v279 >= 0 )
  {
    v284 = *(_DWORD *)v279 - 1;
    *(_DWORD *)v279 = v284;
    if ( !v284 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v279 + 8) + 48LL))(v279);
  }
  if ( *(int *)v282 >= 0 )
  {
    v285 = *(_DWORD *)v282 - 1;
    *(_DWORD *)v282 = v285;
    if ( !v285 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v282 + 8) + 48LL))(v282);
  }
  if ( !v283 )
    goto LABEL_605;
  v286 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB620, v283);
  if ( *(int *)v283 >= 0 )
  {
    v287 = *(_DWORD *)v283 - 1;
    *(_DWORD *)v283 = v287;
    if ( !v287 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v283 + 8) + 48LL))(v283);
  }
  if ( v286 )
  {
    v247 = v679;
    v250 = 259;
    goto LABEL_840;
  }
  v288 = sub_180491A80(a1);
  v289 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC3F8, v288);
  if ( *(int *)v288 >= 0 )
  {
    v290 = *(_DWORD *)v288 - 1;
    *(_DWORD *)v288 = v290;
    if ( !v290 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v288 + 8) + 48LL))(v288);
  }
  if ( v289 )
  {
    v247 = v679;
    v250 = 264;
    goto LABEL_840;
  }
  v291 = qword_1826CC408;
  v292 = PyObject_GetItem(v210, qword_1826CC2F0);
  if ( !v292 )
  {
    v293 = *(_QWORD *)(a1 + 112);
    if ( v293 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
        goto LABEL_585;
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v293 >= 0 )
      {
        v294 = *(_DWORD *)v293 - 1;
        *(_DWORD *)v293 = v294;
        if ( !v294 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v293 + 8) + 48LL))(v293);
      }
    }
    v295 = (unsigned int *)sub_1804D5FE0(a1);
    v292 = (__int64)v295;
    if ( !v295 )
    {
      sub_1817AA970(a1, &v677, qword_1826CC2F0);
      v247 = v679;
      v250 = 343;
      goto LABEL_841;
    }
    v296 = *v295;
    if ( v296 < 0xC0000000 )
      *(_DWORD *)v292 = v296 + 1;
  }
  v297 = PyDict_NewPresized(1);
  PyDict_SetItem(v297, v291, v292);
  if ( *(int *)v292 >= 0 )
  {
    v298 = *(_DWORD *)v292 - 1;
    *(_DWORD *)v292 = v298;
    if ( !v298 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v292 + 8) + 48LL))(v292);
  }
  v247 = v679;
  v687 = v679;
  if ( *(_DWORD *)v679 < 0xC0000000 )
    ++*(_DWORD *)v679;
  v299 = sub_1817A7190(
           (int)sub_1804967D0,
           qword_1826CB6F0,
           qword_1826CC410,
           qword_1826CCAC0,
           0,
           0,
           v297,
           qword_182781228,
           0,
           &v687,
           1,
           0);
  v300 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB6F0, v299);
  if ( *(int *)v299 >= 0 )
  {
    v301 = *(_DWORD *)v299 - 1;
    *(_DWORD *)v299 = v301;
    if ( !v301 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v299 + 8) + 48LL))(v299);
  }
  if ( v300 )
  {
    v250 = 343;
    goto LABEL_840;
  }
  v302 = qword_1826CC408;
  v303 = PyObject_GetItem(v210, qword_1826CC2F0);
  if ( !v303 )
  {
    v304 = *(_QWORD *)(a1 + 112);
    if ( v304 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
        goto LABEL_585;
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v304 >= 0 )
      {
        v305 = *(_DWORD *)v304 - 1;
        *(_DWORD *)v304 = v305;
        if ( !v305 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v304 + 8) + 48LL))(v304);
      }
    }
    v306 = (unsigned int *)sub_1804D5FE0(a1);
    v303 = (__int64)v306;
    if ( !v306 )
    {
      sub_1817AA970(a1, &v677, qword_1826CC2F0);
      v247 = v679;
      v250 = 359;
      goto LABEL_841;
    }
    v307 = *v306;
    if ( v307 < 0xC0000000 )
      *(_DWORD *)v303 = v307 + 1;
  }
  v308 = PyDict_NewPresized(1);
  PyDict_SetItem(v308, v302, v303);
  if ( *(int *)v303 >= 0 )
  {
    v309 = *(_DWORD *)v303 - 1;
    *(_DWORD *)v303 = v309;
    if ( !v309 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v303 + 8) + 48LL))(v303);
  }
  v247 = v679;
  v688 = v679;
  if ( *(_DWORD *)v679 < 0xC0000000 )
    ++*(_DWORD *)v679;
  v310 = sub_1817A7190(
           (int)sub_1804970A0,
           qword_1826CB700,
           qword_1826CC418,
           qword_1826CCAA0,
           0,
           0,
           v308,
           qword_182781228,
           0,
           &v688,
           1,
           0);
  v311 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB700, v310);
  if ( *(int *)v310 >= 0 )
  {
    v312 = *(_DWORD *)v310 - 1;
    *(_DWORD *)v310 = v312;
    if ( !v312 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v310 + 8) + 48LL))(v310);
  }
  if ( v311 )
  {
    v250 = 359;
    goto LABEL_840;
  }
  v313 = qword_1826CC408;
  v314 = PyObject_GetItem(v210, qword_1826CC2F0);
  if ( v314 )
    goto LABEL_666;
  v315 = *(_QWORD *)(a1 + 112);
  if ( v315 )
  {
    if ( (unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
    {
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v315 >= 0 )
      {
        v316 = *(_DWORD *)v315 - 1;
        *(_DWORD *)v315 = v316;
        if ( !v316 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v315 + 8) + 48LL))(v315);
      }
      goto LABEL_662;
    }
LABEL_585:
    v247 = v679;
    v248 = v696;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_843;
  }
LABEL_662:
  v317 = (unsigned int *)sub_1804D5FE0(a1);
  v314 = (__int64)v317;
  if ( !v317 )
  {
    sub_1817AA970(a1, &v677, qword_1826CC2F0);
    v247 = v679;
    v250 = 394;
    goto LABEL_841;
  }
  v318 = *v317;
  if ( v318 < 0xC0000000 )
    *(_DWORD *)v314 = v318 + 1;
LABEL_666:
  v319 = PyDict_NewPresized(1);
  PyDict_SetItem(v319, v313, v314);
  if ( *(int *)v314 >= 0 )
  {
    v320 = *(_DWORD *)v314 - 1;
    *(_DWORD *)v314 = v320;
    if ( !v320 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v314 + 8) + 48LL))(v314);
  }
  v247 = v679;
  v689 = v679;
  if ( *(_DWORD *)v679 < 0xC0000000 )
    ++*(_DWORD *)v679;
  v321 = sub_1817A7190(
           (int)sub_180497FA0,
           qword_1826CB708,
           qword_1826CC420,
           qword_1826CCAD8,
           0,
           0,
           v319,
           qword_182781228,
           0,
           &v689,
           1,
           0);
  v322 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB708, v321);
  if ( *(int *)v321 >= 0 )
  {
    v323 = *(_DWORD *)v321 - 1;
    *(_DWORD *)v321 = v323;
    if ( !v323 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v321 + 8) + 48LL))(v321);
  }
  if ( v322 )
  {
    v250 = 394;
    goto LABEL_840;
  }
  v324 = sub_180491AE0(a1);
  v325 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB668, v324);
  if ( *(int *)v324 >= 0 )
  {
    v326 = *(_DWORD *)v324 - 1;
    *(_DWORD *)v324 = v326;
    if ( !v326 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v324 + 8) + 48LL))(v324);
  }
  if ( v325 )
  {
    v250 = 427;
    goto LABEL_840;
  }
  v327 = sub_180491B40(a1);
  v328 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB678, v327);
  if ( *(int *)v327 >= 0 )
  {
    v329 = *(_DWORD *)v327 - 1;
    *(_DWORD *)v327 = v329;
    if ( !v329 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v327 + 8) + 48LL))(v327);
  }
  if ( v328 )
  {
    v250 = 443;
    goto LABEL_840;
  }
  v330 = sub_180491BA0(a1);
  v331 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB6A8, v330);
  if ( *(int *)v330 >= 0 )
  {
    v332 = *(_DWORD *)v330 - 1;
    *(_DWORD *)v330 = v332;
    if ( !v332 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v330 + 8) + 48LL))(v330);
  }
  if ( v331 )
  {
    v250 = 462;
    goto LABEL_840;
  }
  v333 = sub_180491C00(a1);
  v334 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB6B0, v333);
  if ( *(int *)v333 >= 0 )
  {
    v335 = *(_DWORD *)v333 - 1;
    *(_DWORD *)v333 = v335;
    if ( !v335 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v333 + 8) + 48LL))(v333);
  }
  if ( v334 )
  {
    v250 = 494;
    goto LABEL_840;
  }
  v336 = sub_180491C60(a1);
  v337 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB6B8, v336);
  if ( *(int *)v336 >= 0 )
  {
    v338 = *(_DWORD *)v336 - 1;
    *(_DWORD *)v336 = v338;
    if ( !v338 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v336 + 8) + 48LL))(v336);
  }
  if ( v337 )
  {
    v250 = 525;
    goto LABEL_840;
  }
  v339 = sub_180491CC0(a1);
  v340 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB7D8, v339);
  if ( *(int *)v339 >= 0 )
  {
    v341 = *(_DWORD *)v339 - 1;
    *(_DWORD *)v339 = v341;
    if ( !v341 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v339 + 8) + 48LL))(v339);
  }
  if ( v340 )
  {
    v250 = 534;
    goto LABEL_840;
  }
  v342 = sub_180491D20(a1);
  v343 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB930, v342);
  if ( *(int *)v342 >= 0 )
  {
    v344 = *(_DWORD *)v342 - 1;
    *(_DWORD *)v342 = v344;
    if ( !v344 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v342 + 8) + 48LL))(v342);
  }
  if ( v343 )
  {
    v250 = 541;
    goto LABEL_840;
  }
  v345 = sub_180491D80(a1);
  v346 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB710, v345);
  if ( *(int *)v345 >= 0 )
  {
    v347 = *(_DWORD *)v345 - 1;
    *(_DWORD *)v345 = v347;
    if ( !v347 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v345 + 8) + 48LL))(v345);
  }
  if ( v346 )
  {
    v250 = 600;
    goto LABEL_840;
  }
  v348 = sub_180491DE0(a1);
  v349 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBA20, v348);
  if ( *(int *)v348 >= 0 )
  {
    v350 = *(_DWORD *)v348 - 1;
    *(_DWORD *)v348 = v350;
    if ( !v350 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v348 + 8) + 48LL))(v348);
  }
  if ( v349 )
  {
    v250 = 630;
    goto LABEL_840;
  }
  v351 = sub_180491E40(a1);
  v352 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB7F8, v351);
  if ( *(int *)v351 >= 0 )
  {
    v353 = *(_DWORD *)v351 - 1;
    *(_DWORD *)v351 = v353;
    if ( !v353 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v351 + 8) + 48LL))(v351);
  }
  if ( v352 )
  {
    v250 = 635;
    goto LABEL_840;
  }
  v354 = sub_180491EA0(a1);
  v355 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB468, v354);
  if ( *(int *)v354 >= 0 )
  {
    v356 = *(_DWORD *)v354 - 1;
    *(_DWORD *)v354 = v356;
    if ( !v356 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v354 + 8) + 48LL))(v354);
  }
  if ( v355 )
  {
    v250 = 642;
    goto LABEL_840;
  }
  v357 = sub_180491F00(a1);
  v358 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB4C0, v357);
  if ( *(int *)v357 >= 0 )
  {
    v359 = *(_DWORD *)v357 - 1;
    *(_DWORD *)v357 = v359;
    if ( !v359 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v357 + 8) + 48LL))(v357);
  }
  if ( v358 )
  {
    v250 = 655;
    goto LABEL_840;
  }
  v360 = sub_180491F60(a1);
  v361 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC488, v360);
  if ( *(int *)v360 >= 0 )
  {
    v362 = *(_DWORD *)v360 - 1;
    *(_DWORD *)v360 = v362;
    if ( !v362 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v360 + 8) + 48LL))(v360);
  }
  if ( v361 )
  {
    v250 = 669;
    goto LABEL_840;
  }
  v363 = sub_180491FC0(a1);
  v364 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB8D8, v363);
  if ( *(int *)v363 >= 0 )
  {
    v365 = *(_DWORD *)v363 - 1;
    *(_DWORD *)v363 = v365;
    if ( !v365 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v363 + 8) + 48LL))(v363);
  }
  if ( v364 )
  {
    v250 = 680;
    goto LABEL_840;
  }
  v366 = sub_180492020(a1);
  v367 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB9F8, v366);
  if ( *(int *)v366 >= 0 )
  {
    v368 = *(_DWORD *)v366 - 1;
    *(_DWORD *)v366 = v368;
    if ( !v368 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v366 + 8) + 48LL))(v366);
  }
  if ( v367 )
  {
    v250 = 719;
    goto LABEL_840;
  }
  v369 = sub_1804920E0(a1);
  v370 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBBB0, v369);
  if ( *(int *)v369 >= 0 )
  {
    v371 = *(_DWORD *)v369 - 1;
    *(_DWORD *)v369 = v371;
    if ( !v371 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v369 + 8) + 48LL))(v369);
  }
  if ( v370 )
  {
    v250 = 728;
    goto LABEL_840;
  }
  v372 = sub_180492140(a1);
  v373 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBA58, v372);
  if ( *(int *)v372 >= 0 )
  {
    v374 = *(_DWORD *)v372 - 1;
    *(_DWORD *)v372 = v374;
    if ( !v374 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v372 + 8) + 48LL))(v372);
  }
  if ( v373 )
  {
    v250 = 764;
    goto LABEL_840;
  }
  v375 = sub_1804921A0(a1);
  v376 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC4B8, v375);
  if ( *(int *)v375 >= 0 )
  {
    v377 = *(_DWORD *)v375 - 1;
    *(_DWORD *)v375 = v377;
    if ( !v377 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v375 + 8) + 48LL))(v375);
  }
  if ( v376 )
  {
    v250 = 781;
    goto LABEL_840;
  }
  v378 = sub_180492200(a1);
  v379 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBA90, v378);
  if ( *(int *)v378 >= 0 )
  {
    v380 = *(_DWORD *)v378 - 1;
    *(_DWORD *)v378 = v380;
    if ( !v380 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v378 + 8) + 48LL))(v378);
  }
  if ( v379 )
  {
    v250 = 793;
    goto LABEL_840;
  }
  v381 = sub_180492260(a1);
  v382 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB8E0, v381);
  if ( *(int *)v381 >= 0 )
  {
    v383 = *(_DWORD *)v381 - 1;
    *(_DWORD *)v381 = v383;
    if ( !v383 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v381 + 8) + 48LL))(v381);
  }
  if ( v382 )
  {
    v250 = 805;
    goto LABEL_840;
  }
  v384 = sub_1804922C0(a1);
  v385 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CB588, v384);
  if ( *(int *)v384 >= 0 )
  {
    v386 = *(_DWORD *)v384 - 1;
    *(_DWORD *)v384 = v386;
    if ( !v386 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v384 + 8) + 48LL))(v384);
  }
  if ( v385 )
  {
    v250 = 841;
    goto LABEL_840;
  }
  v387 = sub_180492320(a1);
  v388 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC0E0, v387);
  if ( *(int *)v387 >= 0 )
  {
    v389 = *(_DWORD *)v387 - 1;
    *(_DWORD *)v387 = v389;
    if ( !v389 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v387 + 8) + 48LL))(v387);
  }
  if ( v388 )
  {
    v250 = 852;
    goto LABEL_840;
  }
  v390 = sub_180492380(a1);
  v391 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC4E8, v390);
  if ( *(int *)v390 >= 0 )
  {
    v392 = *(_DWORD *)v390 - 1;
    *(_DWORD *)v390 = v392;
    if ( !v392 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v390 + 8) + 48LL))(v390);
  }
  if ( v391 )
  {
    v250 = 857;
    goto LABEL_840;
  }
  v393 = sub_1804923E0(a1);
  v394 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBA78, v393);
  if ( *(int *)v393 >= 0 )
  {
    v395 = *(_DWORD *)v393 - 1;
    *(_DWORD *)v393 = v395;
    if ( !v395 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v393 + 8) + 48LL))(v393);
  }
  if ( v394 )
  {
    v250 = 868;
    goto LABEL_840;
  }
  if ( *(_DWORD *)qword_1826CC500 < 0xC0000000 )
    ++*(_DWORD *)qword_1826CC500;
  v396 = sub_180492440(a1);
  v397 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBB38, v396);
  if ( *(int *)v396 >= 0 )
  {
    v398 = *(_DWORD *)v396 - 1;
    *(_DWORD *)v396 = v398;
    if ( !v398 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v396 + 8) + 48LL))(v396);
  }
  if ( v397 )
  {
    v250 = 878;
    goto LABEL_840;
  }
  v399 = sub_180492500(a1);
  v400 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBAC8, v399);
  if ( *(int *)v399 >= 0 )
  {
    v401 = *(_DWORD *)v399 - 1;
    *(_DWORD *)v399 = v401;
    if ( !v401 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v399 + 8) + 48LL))(v399);
  }
  if ( v400 )
  {
    v250 = 901;
    goto LABEL_840;
  }
  v402 = sub_180492560(a1);
  v403 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBBE0, v402);
  if ( *(int *)v402 >= 0 )
  {
    v404 = *(_DWORD *)v402 - 1;
    *(_DWORD *)v402 = v404;
    if ( !v404 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v402 + 8) + 48LL))(v402);
  }
  if ( v403 )
  {
    v250 = 929;
    goto LABEL_840;
  }
  if ( *(_DWORD *)qword_1826CBC00 < 0xC0000000 )
    ++*(_DWORD *)qword_1826CBC00;
  v405 = sub_1804925C0(a1);
  v406 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBB50, v405);
  if ( *(int *)v405 >= 0 )
  {
    v407 = *(_DWORD *)v405 - 1;
    *(_DWORD *)v405 = v407;
    if ( !v407 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v405 + 8) + 48LL))(v405);
  }
  if ( v406 )
  {
    v250 = 950;
    goto LABEL_840;
  }
  v408 = sub_180492620(a1);
  v409 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBC28, v408);
  if ( *(int *)v408 >= 0 )
  {
    v410 = *(_DWORD *)v408 - 1;
    *(_DWORD *)v408 = v410;
    if ( !v410 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v408 + 8) + 48LL))(v408);
  }
  if ( v409 )
  {
    v250 = 972;
    goto LABEL_840;
  }
  v411 = sub_180492680(a1);
  v412 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBBF0, v411);
  if ( *(int *)v411 >= 0 )
  {
    v413 = *(_DWORD *)v411 - 1;
    *(_DWORD *)v411 = v413;
    if ( !v413 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v411 + 8) + 48LL))(v411);
  }
  if ( v412 )
  {
    v250 = 984;
    goto LABEL_840;
  }
  v414 = sub_1804926E0(a1);
  v415 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CBC20, v414);
  if ( *(int *)v414 >= 0 )
  {
    v416 = *(_DWORD *)v414 - 1;
    *(_DWORD *)v414 = v416;
    if ( !v416 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v414 + 8) + 48LL))(v414);
  }
  if ( v415 )
  {
    v250 = 991;
    goto LABEL_840;
  }
  v417 = sub_180492740(a1);
  v418 = PyObject_SetItem(v210, *(_QWORD *)&qword_1826CC540, v417);
  if ( *(int *)v417 >= 0 )
  {
    v419 = *(_DWORD *)v417 - 1;
    *(_DWORD *)v417 = v419;
    if ( !v419 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v417 + 8) + 48LL))(v417);
  }
  if ( v418 )
  {
    v250 = 1000;
    goto LABEL_840;
  }
  sub_1800111B0(a1);
  sub_1817A7120(v696);
  if ( (unsigned int)PyObject_SetItem(v210, qword_1826CC3A0, qword_1826CC550) )
    goto LABEL_860;
  v424 = sub_1817AF7A0(v682, v683);
  if ( v424 == -1 || v424 == 1 && (unsigned int)PyObject_SetItem(v210, qword_1826CC3A8, v683) )
    goto LABEL_860;
  v425 = qword_1826CBDF0;
  PyDict_SetItem(v210, qword_1826A4E58, v247);
  v426 = sub_180011A30(a1, v425, v682, v210);
  v427 = sub_180001300(a1, v684, v426, v678);
  if ( *(int *)v426 >= 0 )
  {
    v428 = *(_DWORD *)v426 - 1;
    *(_DWORD *)v426 = v428;
    if ( !v428 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v426 + 8) + 48LL))(v426);
  }
  if ( !v427 )
  {
LABEL_860:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
LABEL_861:
    v132 = v677;
    v677 = 0;
    if ( *(int *)v210 >= 0 )
    {
      v429 = *(_DWORD *)v210 - 1;
      *(_DWORD *)v210 = v429;
      if ( !v429 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v210 + 8) + 48LL))(v210, 0);
    }
    v19 = 83;
LABEL_865:
    v213 = v682;
    goto LABEL_866;
  }
  v436 = *(_QWORD *)(v247 + 16);
  *(_QWORD *)(v247 + 16) = v427;
  if ( v436 )
  {
    if ( *(int *)v436 >= 0 )
    {
      v437 = *(_DWORD *)v436 - 1;
      *(_DWORD *)v436 = v437;
      if ( !v437 )
        (*(void (**)(void))(*(_QWORD *)(v436 + 8) + 48LL))();
    }
  }
  v438 = *(_DWORD **)(v247 + 16);
  if ( *v438 < 0xC0000000 )
    ++*v438;
  if ( *(int *)v210 >= 0 )
  {
    v439 = *(_DWORD *)v210 - 1;
    *(_DWORD *)v210 = v439;
    if ( !v439 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v210 + 8) + 48LL))(v210);
  }
  if ( *(int *)v247 >= 0 )
  {
    v440 = *(_DWORD *)v247 - 1;
    *(_DWORD *)v247 = v440;
    if ( !v440 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v247 + 8) + 48LL))(v247);
  }
  sub_180005C90(qword_182781220, qword_1826CBDF0, v438);
  v441 = v683;
  if ( *v683 >= 0 )
  {
    v442 = *v683 - 1;
    *v683 = v442;
    if ( !v442 )
      (*(void (**)(void))(*((_QWORD *)v441 + 1) + 48LL))();
  }
  v443 = v682;
  if ( *v682 >= 0 )
  {
    v444 = *v682 - 1;
    *v682 = v444;
    if ( !v444 )
      (*(void (**)(void))(*((_QWORD *)v443 + 1) + 48LL))();
  }
  v445 = v678;
  if ( *v678 >= 0 )
  {
    v446 = *v678 - 1;
    *v678 = v446;
    if ( !v446 )
      (*(void (**)(void))(*((_QWORD *)v445 + 1) + 48LL))();
  }
  v447 = v684;
  if ( *v684 >= 0 )
  {
    v448 = *v684 - 1;
    *v684 = v448;
    if ( !v448 )
      (*(void (**)(void))(*((_QWORD *)v447 + 1) + 48LL))();
  }
  if ( *(int *)v210 >= 0 )
  {
    v449 = *(_DWORD *)v210 - 1;
    *(_DWORD *)v210 = v449;
    if ( !v449 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v210 + 8) + 48LL))(v210);
  }
  if ( SLODWORD(Py_NoneStruct[0]) >= 0 && !--LODWORD(Py_NoneStruct[0]) )
    (*(void (**)(void))(Py_NoneStruct[1] + 48))();
  v19 = 1010;
  v450 = (unsigned int *)sub_1804D6CA0(a1);
  v695 = 1010;
  v208 = a1;
  if ( !v450 )
    goto LABEL_464;
  v451 = 0;
  v452 = sub_1817A4CD0(a1, 1);
  v453 = *v450;
  v696 = (_DWORD *)v452;
  if ( v453 < 0xC0000000 )
    *v450 = v453 + 1;
  *(_QWORD *)(v452 + 32) = v450;
  if ( *(_DWORD *)v452 < 0xC0000000 )
    ++*(_DWORD *)v452;
  v683 = (int *)v452;
  v681 = (int *)sub_1804C93C0(a1, &v683);
  v454 = v681;
  if ( !v681 )
  {
    v455 = v696;
    v454 = 0;
    v677 = *(_QWORD *)(a1 + 112);
    v456 = 0;
    *(_QWORD *)(a1 + 112) = 0;
    v457 = 0;
    v132 = v677;
LABEL_1227:
    v677 = 0;
    goto LABEL_1228;
  }
  v678 = (int *)sub_1817A3AC0(a1);
  v456 = v678;
  v458 = sub_180003C90(v681);
  if ( v458 == -1 )
  {
LABEL_926:
    v455 = v696;
    v457 = 0;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
    goto LABEL_1227;
  }
  if ( v458 )
  {
    v459 = sub_180004350(a1, v681, qword_1826A4B70, 0);
    v460 = v459;
    if ( !v459 )
    {
      v455 = v696;
      v457 = 0;
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
LABEL_1226:
      v456 = v678;
      goto LABEL_1227;
    }
    v461 = sub_181792120(v459);
    if ( *(int *)v460 >= 0 )
    {
      v462 = *(_DWORD *)v460 - 1;
      *(_DWORD *)v460 = v462;
      if ( !v462 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v460 + 8) + 48LL))(v460);
    }
    v456 = v678;
    if ( !v461 )
      goto LABEL_926;
  }
  else
  {
    v461 = PyType_Type;
    if ( PyType_Type < 0xC0000000 )
      ++PyType_Type;
  }
  v463 = sub_1817B00C0(a1, v461, v454);
  v464 = *(_DWORD *)v461;
  v682 = (int *)v463;
  if ( v464 >= 0 )
  {
    v465 = v464 - 1;
    *(_DWORD *)v461 = v465;
    if ( !v465 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v461 + 8) + 48LL))(v461);
      v463 = (__int64)v682;
    }
  }
  if ( !v463 )
    goto LABEL_926;
  v679 = v463;
  v466 = sub_1817A0EF0(a1, v463, qword_1826CC348);
  if ( v466 == -1 )
  {
    v455 = v696;
    v457 = (int *)v679;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v132 = v677;
    goto LABEL_1227;
  }
  if ( v466 )
  {
    v467 = sub_1817A3670(a1, v682, qword_1826CC348);
    if ( !v467 )
    {
      v455 = v696;
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
LABEL_1225:
      v457 = (int *)v679;
      goto LABEL_1226;
    }
    v468 = (_DWORD *)qword_1826CC248;
    v469 = sub_1817A4CD0(a1, 2);
    v470 = v469;
    if ( *v468 < 0xC0000000 )
      ++*v468;
    *(_QWORD *)(v469 + 32) = v468;
    v471 = v681;
    if ( (unsigned int)*v681 < 0xC0000000 )
      ++*v681;
    v472 = v680;
    v473 = v678;
    *(_QWORD *)(v470 + 40) = v471;
    *(_DWORD *)(v472 + 40) = 1010;
    v474 = sub_180001300(a1, v467, v470, v473);
    if ( *(int *)v467 >= 0 )
    {
      v475 = *(_DWORD *)v467 - 1;
      *(_DWORD *)v467 = v475;
      if ( !v475 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v467 + 8) + 48LL))(v467);
    }
    if ( *(int *)v470 >= 0 )
    {
      v476 = *(_DWORD *)v470 - 1;
      *(_DWORD *)v470 = v476;
      if ( !v476 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v470 + 8) + 48LL))(v470);
    }
    if ( !v474 )
      goto LABEL_957;
    v451 = v474;
    v477 = sub_1817A0EF0(a1, v474, qword_1826CB8F0);
    if ( v477 == -1 )
      goto LABEL_957;
    v478 = Py_FalseStruct;
    if ( v477 )
      v478 = Py_TrueStruct;
    if ( !(unsigned int)sub_180003C90(v478) )
    {
      v479 = qword_1826CC350;
      v480 = sub_181791250(a1, v682, *(_QWORD *)&qword_1826A4BC8, qword_1826CC358);
      if ( v480 )
      {
        v481 = sub_1817A4CD0(a1, 2);
        *(_QWORD *)(v481 + 32) = v480;
        v482 = sub_181792120(v474);
        v483 = sub_1817A3670(a1, v482, *(_QWORD *)&qword_1826A4BC8);
        if ( *(int *)v482 >= 0 )
        {
          v484 = *(_DWORD *)v482 - 1;
          *(_DWORD *)v482 = v484;
          if ( !v484 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v482 + 8) + 48LL))(v482);
        }
        if ( v483 )
        {
          *(_QWORD *)(v481 + 40) = v483;
          v486 = sub_18178F680(v479, v481);
          if ( *(int *)v481 >= 0 )
          {
            v487 = *(_DWORD *)v481 - 1;
            *(_DWORD *)v481 = v487;
            if ( !v487 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v481 + 8) + 48LL))(v481);
          }
          if ( !v486 )
          {
            v677 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 112) = 0;
            v132 = v677;
            v677 = 0;
            goto LABEL_971;
          }
          *(_DWORD *)(v680 + 40) = 1010;
          v488 = sub_18179C5C0(a1, PyExc_TypeError, v486);
          if ( *(int *)v486 >= 0 )
          {
            v489 = *(_DWORD *)v486 - 1;
            *(_DWORD *)v486 = v489;
            if ( !v489 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v486 + 8) + 48LL))(v486);
          }
          v677 = v488;
          sub_1817AAC50(a1, &v677);
        }
        else
        {
          v677 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0;
          if ( *(int *)v481 < 0 || (v485 = *(_DWORD *)v481 - 1, (*(_DWORD *)v481 = v485) != 0) )
          {
            v132 = v677;
            v457 = v682;
            v454 = v681;
            v455 = v696;
            goto LABEL_1226;
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v481 + 8) + 48LL))(v481);
        }
        v132 = v677;
        v677 = 0;
LABEL_971:
        v454 = v681;
        v455 = v696;
        v456 = v678;
        v457 = (int *)v679;
LABEL_1228:
        if ( *v455 >= 0 )
        {
          v616 = *v455 - 1;
          *v455 = v616;
          if ( !v616 )
            (*(void (__fastcall **)(int *))(*((_QWORD *)v455 + 1) + 48LL))(v455);
        }
        if ( v454 )
        {
          if ( *v454 >= 0 )
          {
            v617 = *v454 - 1;
            *v454 = v617;
            if ( !v617 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v454 + 1) + 48LL))(v454);
          }
        }
        if ( v456 )
        {
          if ( *v456 >= 0 )
          {
            v618 = *v456 - 1;
            *v456 = v618;
            if ( !v618 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v456 + 1) + 48LL))(v456);
          }
        }
        if ( v457 )
        {
          if ( *v457 >= 0 )
          {
            v619 = *v457 - 1;
            *v457 = v619;
            if ( !v619 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v457 + 1) + 48LL))(v457);
          }
        }
        if ( v451 )
        {
          if ( *(int *)v451 >= 0 )
          {
            v620 = *(_DWORD *)v451 - 1;
            *(_DWORD *)v451 = v620;
            if ( !v620 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v451 + 8) + 48LL))(v451);
              v19 = 1010;
              v677 = v132;
              v126 = v680;
              goto LABEL_1290;
            }
          }
        }
        goto LABEL_431;
      }
LABEL_957:
      v454 = v681;
      v455 = v696;
      v677 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0;
      v132 = v677;
      goto LABEL_1225;
    }
    v454 = v681;
  }
  else
  {
    v451 = sub_1817A3AC0(a1);
  }
  v490 = PyCell_New(0);
  if ( *(_DWORD *)v451 < 0xC0000000 )
    ++*(_DWORD *)v451;
  if ( (unsigned int)PyObject_SetItem(v451, qword_1826A4BB8, qword_1826A4E50) )
  {
    v455 = v696;
LABEL_1221:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1222;
  }
  if ( (unsigned int)PyObject_SetItem(v451, qword_1826A4EB8, qword_1826CC248) )
  {
    v455 = v696;
    goto LABEL_1221;
  }
  if ( (unsigned int)PyObject_SetItem(v451, qword_1826CC370, qword_1826CC558) )
  {
    v455 = v696;
    goto LABEL_1221;
  }
  v683 = (int *)sub_1817A3A90(a1, qword_1826CC980, qword_182781228, 0, 8);
  v491 = v683;
  sub_1817A6F80(v683, v451);
  sub_180011220(a1, v491);
  v690 = v490;
  if ( *(_DWORD *)v490 < 0xC0000000 )
    ++*(_DWORD *)v490;
  v492 = sub_1817A7190(
           (int)sub_1804AEEC0,
           qword_1826A4C30,
           qword_1826CC560,
           qword_1826CC998,
           0,
           0,
           0,
           qword_182781228,
           0,
           &v690,
           1,
           0);
  v493 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826A4C30, v492);
  if ( *(int *)v492 >= 0 )
  {
    v494 = *(_DWORD *)v492 - 1;
    *(_DWORD *)v492 = v494;
    if ( !v494 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v492 + 8) + 48LL))(v492);
  }
  if ( v493 )
  {
    v250 = 1011;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
LABEL_1203:
    v255 = "c";
LABEL_1204:
    v604 = v683;
    v605 = *(_QWORD *)(v677 + 40);
    if ( v605 )
    {
      if ( *(int **)(v605 + 24) == v683 )
      {
LABEL_1212:
        sub_1817A6FA0(v604, v255, v490);
        sub_1800111B0(a1);
        sub_1817A7120(v604);
        v454 = v681;
        v455 = v696;
LABEL_1222:
        v132 = v677;
        v677 = 0;
        if ( *(int *)v451 >= 0 )
        {
          v615 = *(_DWORD *)v451 - 1;
          *(_DWORD *)v451 = v615;
          if ( !v615 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v451 + 8) + 48LL))(v451);
        }
        goto LABEL_1225;
      }
      v606 = sub_180003B60(v605, v683, v250);
    }
    else
    {
      v606 = sub_1817A4C30(v683, v250);
    }
    v607 = v606;
    sub_180003B90(v677, v606);
    if ( v607 )
    {
      if ( *(int *)v607 >= 0 )
      {
        v608 = *(_DWORD *)v607 - 1;
        *(_DWORD *)v607 = v608;
        if ( !v608 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v607 + 8) + 48LL))(v607);
      }
    }
    goto LABEL_1212;
  }
  v495 = sub_1804927A0(a1);
  v496 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBF78, v495);
  if ( *(int *)v495 >= 0 )
  {
    v497 = *(_DWORD *)v495 - 1;
    *(_DWORD *)v495 = v497;
    if ( !v497 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v495 + 8) + 48LL))(v495);
  }
  if ( v496 )
  {
    v250 = 1189;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v498 = sub_180492800(a1);
  v499 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBF70, v498);
  if ( *(int *)v498 >= 0 )
  {
    v500 = *(_DWORD *)v498 - 1;
    *(_DWORD *)v498 = v500;
    if ( !v500 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v498 + 8) + 48LL))(v498);
  }
  if ( v499 )
  {
    v250 = 1195;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v501 = sub_1804928C0(a1);
  v502 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC578, v501);
  if ( *(int *)v501 >= 0 )
  {
    v503 = *(_DWORD *)v501 - 1;
    *(_DWORD *)v501 = v503;
    if ( !v503 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v501 + 8) + 48LL))(v501);
  }
  if ( v502 )
  {
    v250 = 1198;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC588;
  v504 = PyObject_GetItem(v451, qword_1826A4E10);
  if ( !v504 )
  {
    v505 = *(_QWORD *)(a1 + 112);
    if ( v505 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
        goto LABEL_1041;
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v505 >= 0 )
      {
        v506 = *(_DWORD *)v505 - 1;
        *(_DWORD *)v505 = v506;
        if ( !v506 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v505 + 8) + 48LL))(v505);
      }
    }
    v504 = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  v507 = PyDict_NewPresized(2);
  PyDict_SetItem(v507, v684, v504);
  if ( *(int *)v504 >= 0 )
  {
    v508 = *(_DWORD *)v504 - 1;
    *(_DWORD *)v504 = v508;
    if ( !v508 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v504 + 8) + 48LL))(v504);
  }
  v684 = (int *)qword_1826CC590;
  v509 = PyObject_GetItem(v451, qword_1826A4E10);
  if ( !v509 )
  {
    v510 = *(_QWORD *)(a1 + 112);
    if ( v510 )
    {
      if ( !(unsigned __int8)sub_180003F70(a1, *(_QWORD *)(a1 + 112), PyExc_KeyError) )
        goto LABEL_1041;
      *(_QWORD *)(a1 + 112) = 0;
      if ( *(int *)v510 >= 0 )
      {
        v511 = *(_DWORD *)v510 - 1;
        *(_DWORD *)v510 = v511;
        if ( !v511 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v510 + 8) + 48LL))(v510);
      }
    }
    v509 = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  PyDict_SetItem(v507, v684, v509);
  if ( *(int *)v509 >= 0 )
  {
    v512 = *(_DWORD *)v509 - 1;
    *(_DWORD *)v509 = v512;
    if ( !v512 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v509 + 8) + 48LL))(v509);
  }
  v513 = sub_180492920(a1, v507);
  v514 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBD30, v513);
  if ( *(int *)v513 >= 0 )
  {
    v515 = *(_DWORD *)v513 - 1;
    *(_DWORD *)v513 = v515;
    if ( !v515 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v513 + 8) + 48LL))(v513);
  }
  if ( v514 )
  {
    v250 = 1210;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v516 = sub_180492980(a1);
  v517 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBD40, v516);
  if ( *(int *)v516 >= 0 )
  {
    v518 = *(_DWORD *)v516 - 1;
    *(_DWORD *)v516 = v518;
    if ( !v518 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v516 + 8) + 48LL))(v516);
  }
  if ( v517 )
  {
    v250 = 1222;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC5A8;
  v519 = PyObject_GetItem(v451, qword_1826A4E10);
  if ( !v519 )
  {
    if ( !(unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
      goto LABEL_1041;
    v519 = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  v520 = PyDict_NewPresized(1);
  PyDict_SetItem(v520, v684, v519);
  if ( *(int *)v519 >= 0 )
  {
    v521 = *(_DWORD *)v519 - 1;
    *(_DWORD *)v519 = v521;
    if ( !v521 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v519 + 8) + 48LL))(v519);
  }
  v522 = sub_1804929E0(a1, v520);
  v523 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBD50, v522);
  if ( *(int *)v522 >= 0 )
  {
    v524 = *(_DWORD *)v522 - 1;
    *(_DWORD *)v522 = v524;
    if ( !v524 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v522 + 8) + 48LL))(v522);
  }
  if ( v523 )
  {
    v250 = 1232;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC3C8;
  v525 = PyObject_GetItem(v451, qword_1826A4E10);
  if ( !v525 )
  {
    if ( !(unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
      goto LABEL_1041;
    v525 = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  v526 = PyDict_NewPresized(1);
  PyDict_SetItem(v526, v684, v525);
  if ( *(int *)v525 >= 0 )
  {
    v527 = *(_DWORD *)v525 - 1;
    *(_DWORD *)v525 = v527;
    if ( !v527 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v525 + 8) + 48LL))(v525);
  }
  v528 = sub_180492A40(a1, v526);
  v529 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBD60, v528);
  if ( *(int *)v528 >= 0 )
  {
    v530 = *(_DWORD *)v528 - 1;
    *(_DWORD *)v528 = v530;
    if ( !v530 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v528 + 8) + 48LL))(v528);
  }
  if ( v529 )
  {
    v250 = 1237;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC5A8;
  v531 = PyObject_GetItem(v451, qword_1826A4E10);
  if ( !v531 )
  {
    if ( !(unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
      goto LABEL_1041;
    v531 = PyLong_Type;
    if ( PyLong_Type < 0xC0000000 )
      ++PyLong_Type;
  }
  v532 = PyDict_NewPresized(1);
  PyDict_SetItem(v532, v684, v531);
  if ( *(int *)v531 >= 0 )
  {
    v533 = *(_DWORD *)v531 - 1;
    *(_DWORD *)v531 = v533;
    if ( !v533 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v531 + 8) + 48LL))(v531);
  }
  v534 = sub_180492AA0(a1, v532);
  v535 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBDC8, v534);
  if ( *(int *)v534 >= 0 )
  {
    v536 = *(_DWORD *)v534 - 1;
    *(_DWORD *)v534 = v536;
    if ( !v536 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v534 + 8) + 48LL))(v534);
  }
  if ( v535 )
  {
    v250 = 1242;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v537 = sub_180492B00(a1);
  v538 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBDB0, v537);
  if ( *(int *)v537 >= 0 )
  {
    v539 = *(_DWORD *)v537 - 1;
    *(_DWORD *)v537 = v539;
    if ( !v539 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v537 + 8) + 48LL))(v537);
  }
  if ( v538 )
  {
    v250 = 1260;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v691 = v490;
  if ( *(_DWORD *)v490 < 0xC0000000 )
    ++*(_DWORD *)v490;
  v540 = sub_1817A7190(
           (int)sub_1804BA550,
           qword_1826CC0A0,
           qword_1826CC5D0,
           qword_1826CCA70,
           0,
           0,
           0,
           qword_182781228,
           0,
           &v691,
           1,
           0);
  v541 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC0A0, v540);
  if ( *(int *)v540 >= 0 )
  {
    v542 = *(_DWORD *)v540 - 1;
    *(_DWORD *)v540 = v542;
    if ( !v542 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v540 + 8) + 48LL))(v540);
  }
  if ( v541 )
  {
    v250 = 1292;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v543 = sub_180492B60(a1);
  v544 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBDA8, v543);
  if ( *(int *)v543 >= 0 )
  {
    v545 = *(_DWORD *)v543 - 1;
    *(_DWORD *)v543 = v545;
    if ( !v545 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v543 + 8) + 48LL))(v543);
  }
  if ( v544 )
  {
    v250 = 1299;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v546 = sub_180492BC0(a1);
  v547 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CB340, v546);
  if ( *(int *)v546 >= 0 )
  {
    v548 = *(_DWORD *)v546 - 1;
    *(_DWORD *)v546 = v548;
    if ( !v548 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v546 + 8) + 48LL))(v546);
  }
  if ( v547 )
  {
    v250 = 1326;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v549 = sub_180492C20(a1);
  v550 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CB5F8, v549);
  if ( *(int *)v549 >= 0 )
  {
    v551 = *(_DWORD *)v549 - 1;
    *(_DWORD *)v549 = v551;
    if ( !v551 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v549 + 8) + 48LL))(v549);
  }
  if ( v550 )
  {
    v250 = 1335;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v552 = sub_180492C80(a1);
  v553 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC0C0, v552);
  if ( *(int *)v552 >= 0 )
  {
    v554 = *(_DWORD *)v552 - 1;
    *(_DWORD *)v552 = v554;
    if ( !v554 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v552 + 8) + 48LL))(v552);
  }
  if ( v553 )
  {
    v250 = 1343;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v555 = sub_180492CE0(a1);
  v556 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC5F8, v555);
  if ( *(int *)v555 >= 0 )
  {
    v557 = *(_DWORD *)v555 - 1;
    *(_DWORD *)v555 = v557;
    if ( !v557 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v555 + 8) + 48LL))(v555);
  }
  if ( v556 )
  {
    v250 = 1346;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v558 = sub_180492D40(a1);
  v559 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC1A0, v558);
  if ( *(int *)v558 >= 0 )
  {
    v560 = *(_DWORD *)v558 - 1;
    *(_DWORD *)v558 = v560;
    if ( !v560 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v558 + 8) + 48LL))(v558);
  }
  if ( v559 )
  {
    v250 = 1351;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v561 = sub_180492DA0(a1);
  v562 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC098, v561);
  if ( *(int *)v561 >= 0 )
  {
    v563 = *(_DWORD *)v561 - 1;
    *(_DWORD *)v561 = v563;
    if ( !v563 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v561 + 8) + 48LL))(v561);
  }
  if ( v562 )
  {
    v250 = 1403;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v564 = sub_180492E00(a1);
  v565 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC138, v564);
  if ( *(int *)v564 >= 0 )
  {
    v566 = *(_DWORD *)v564 - 1;
    *(_DWORD *)v564 = v566;
    if ( !v566 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v564 + 8) + 48LL))(v564);
  }
  if ( v565 )
  {
    v250 = 1440;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v567 = sub_180492E60(a1);
  v568 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC128, v567);
  if ( *(int *)v567 >= 0 )
  {
    v569 = *(_DWORD *)v567 - 1;
    *(_DWORD *)v567 = v569;
    if ( !v569 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v567 + 8) + 48LL))(v567);
  }
  if ( v568 )
  {
    v250 = 1448;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC408;
  v570 = PyObject_GetItem(v451, qword_1826CC2F0);
  if ( !v570 )
  {
    if ( !(unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
      goto LABEL_1041;
    v571 = (unsigned int *)sub_1804D5FE0(a1);
    v570 = (__int64)v571;
    if ( !v571 )
    {
      sub_1817AA970(a1, &v677, qword_1826CC2F0);
      v250 = 1452;
      goto LABEL_1203;
    }
    v572 = *v571;
    if ( v572 < 0xC0000000 )
      *(_DWORD *)v570 = v572 + 1;
  }
  v573 = PyDict_NewPresized(1);
  PyDict_SetItem(v573, v684, v570);
  if ( *(int *)v570 >= 0 )
  {
    v574 = *(_DWORD *)v570 - 1;
    *(_DWORD *)v570 = v574;
    if ( !v574 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v570 + 8) + 48LL))(v570);
  }
  v692 = v490;
  if ( *(_DWORD *)v490 < 0xC0000000 )
    ++*(_DWORD *)v490;
  v575 = sub_1817A7190(
           (int)sub_1804C4030,
           qword_1826CB6F0,
           qword_1826CC628,
           qword_1826CCAB8,
           0,
           0,
           v573,
           qword_182781228,
           0,
           &v692,
           1,
           0);
  v576 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CB6F0, v575);
  if ( *(int *)v575 >= 0 )
  {
    v577 = *(_DWORD *)v575 - 1;
    *(_DWORD *)v575 = v577;
    if ( !v577 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v575 + 8) + 48LL))(v575);
  }
  if ( v576 )
  {
    v250 = 1452;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v684 = (int *)qword_1826CC408;
  v578 = PyObject_GetItem(v451, qword_1826CC2F0);
  if ( !v578 )
  {
    if ( !(unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
      goto LABEL_1041;
    v579 = (unsigned int *)sub_1804D5FE0(a1);
    v578 = (__int64)v579;
    if ( !v579 )
    {
      sub_1817AA970(a1, &v677, qword_1826CC2F0);
      v250 = 1468;
      goto LABEL_1203;
    }
    v580 = *v579;
    if ( v580 < 0xC0000000 )
      *(_DWORD *)v578 = v580 + 1;
  }
  v581 = PyDict_NewPresized(1);
  PyDict_SetItem(v581, v684, v578);
  if ( *(int *)v578 >= 0 )
  {
    v582 = *(_DWORD *)v578 - 1;
    *(_DWORD *)v578 = v582;
    if ( !v582 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v578 + 8) + 48LL))(v578);
  }
  v693 = v490;
  if ( *(_DWORD *)v490 < 0xC0000000 )
    ++*(_DWORD *)v490;
  v583 = sub_1817A7190(
           (int)sub_1804C48A0,
           qword_1826CB700,
           qword_1826CC630,
           qword_1826CCA98,
           0,
           0,
           v581,
           qword_182781228,
           0,
           &v693,
           1,
           0);
  v584 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CB700, v583);
  if ( *(int *)v583 >= 0 )
  {
    v585 = *(_DWORD *)v583 - 1;
    *(_DWORD *)v583 = v585;
    if ( !v585 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v583 + 8) + 48LL))(v583);
  }
  if ( v584 )
  {
    v250 = 1468;
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1203;
  }
  v586 = qword_1826CC408;
  v587 = PyObject_GetItem(v451, qword_1826CC2F0);
  if ( !v587 )
  {
    if ( (unsigned __int8)sub_180005D20(a1, PyExc_KeyError) )
    {
      v588 = (unsigned int *)sub_1804D5FE0(a1);
      v587 = (__int64)v588;
      if ( !v588 )
      {
        sub_1817AA970(a1, &v677, qword_1826CC2F0);
        v250 = 1511;
        goto LABEL_1203;
      }
      v589 = *v588;
      if ( v589 < 0xC0000000 )
        *(_DWORD *)v587 = v589 + 1;
      goto LABEL_1178;
    }
LABEL_1041:
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1204;
  }
LABEL_1178:
  v590 = PyDict_NewPresized(1);
  PyDict_SetItem(v590, v586, v587);
  if ( *(int *)v587 >= 0 )
  {
    v591 = *(_DWORD *)v587 - 1;
    *(_DWORD *)v587 = v591;
    if ( !v591 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v587 + 8) + 48LL))(v587);
  }
  v694[0] = v490;
  if ( *(_DWORD *)v490 < 0xC0000000 )
    ++*(_DWORD *)v490;
  v592 = sub_1817A7190(
           (int)sub_1804C53A0,
           qword_1826CB708,
           qword_1826CC638,
           qword_1826CCAD0,
           0,
           0,
           v590,
           qword_182781228,
           0,
           v694,
           1,
           0);
  v593 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CB708, v592);
  if ( *(int *)v592 >= 0 )
  {
    v594 = *(_DWORD *)v592 - 1;
    *(_DWORD *)v592 = v594;
    if ( !v594 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v592 + 8) + 48LL))(v592);
  }
  if ( v593 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v250 = 1511;
    goto LABEL_1203;
  }
  v595 = sub_180492F20(a1);
  v596 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CC1B0, v595);
  if ( *(int *)v595 >= 0 )
  {
    v597 = *(_DWORD *)v595 - 1;
    *(_DWORD *)v595 = v597;
    if ( !v597 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v595 + 8) + 48LL))(v595);
  }
  if ( v596 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v250 = 1538;
    goto LABEL_1203;
  }
  v598 = sub_180492F80(a1);
  v599 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBED0, v598);
  if ( *(int *)v598 >= 0 )
  {
    v600 = *(_DWORD *)v598 - 1;
    *(_DWORD *)v598 = v600;
    if ( !v600 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v598 + 8) + 48LL))(v598);
  }
  if ( v599 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v250 = 1547;
    goto LABEL_1203;
  }
  v601 = sub_180492FE0(a1);
  v602 = PyObject_SetItem(v451, *(_QWORD *)&qword_1826CBEE8, v601);
  if ( *(int *)v601 >= 0 )
  {
    v603 = *(_DWORD *)v601 - 1;
    *(_DWORD *)v601 = v603;
    if ( !v603 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v601 + 8) + 48LL))(v601);
  }
  if ( v602 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    v250 = 1565;
    goto LABEL_1203;
  }
  sub_1800111B0(a1);
  sub_1817A7120(v683);
  v609 = PyObject_SetItem(v451, qword_1826CC3A0, qword_1826CC658);
  v454 = v681;
  v455 = v696;
  if ( v609 )
    goto LABEL_1221;
  v610 = sub_1817AF7A0(v681, v696);
  if ( v610 == -1 || v610 == 1 && (unsigned int)PyObject_SetItem(v451, qword_1826CC3A8, v455) )
    goto LABEL_1221;
  v611 = qword_1826CC248;
  PyDict_SetItem(v451, qword_1826A4E58, v490);
  v612 = sub_180011A30(a1, v611, v681, v451);
  v613 = sub_180001300(a1, v682, v612, v678);
  if ( *(int *)v612 >= 0 )
  {
    v614 = *(_DWORD *)v612 - 1;
    *(_DWORD *)v612 = v614;
    if ( !v614 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v612 + 8) + 48LL))(v612);
  }
  if ( !v613 )
    goto LABEL_1221;
  v621 = *(_QWORD *)(v490 + 16);
  *(_QWORD *)(v490 + 16) = v613;
  if ( v621 )
  {
    if ( *(int *)v621 >= 0 )
    {
      v622 = *(_DWORD *)v621 - 1;
      *(_DWORD *)v621 = v622;
      if ( !v622 )
        (*(void (**)(void))(*(_QWORD *)(v621 + 8) + 48LL))();
    }
  }
  v623 = *(_DWORD **)(v490 + 16);
  if ( *v623 < 0xC0000000 )
    ++*v623;
  if ( *(int *)v451 >= 0 )
  {
    v624 = *(_DWORD *)v451 - 1;
    *(_DWORD *)v451 = v624;
    if ( !v624 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v451 + 8) + 48LL))(v451);
  }
  if ( *(int *)v490 >= 0 )
  {
    v625 = *(_DWORD *)v490 - 1;
    *(_DWORD *)v490 = v625;
    if ( !v625 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v490 + 8) + 48LL))(v490);
  }
  sub_180005C90(qword_182781220, qword_1826CC248, v623);
  if ( *v455 >= 0 )
  {
    v626 = *v455 - 1;
    *v455 = v626;
    if ( !v626 )
      (*(void (__fastcall **)(int *))(*((_QWORD *)v455 + 1) + 48LL))(v455);
  }
  if ( *v454 >= 0 )
  {
    v627 = *v454 - 1;
    *v454 = v627;
    if ( !v627 )
      (*(void (__fastcall **)(int *))(*((_QWORD *)v454 + 1) + 48LL))(v454);
  }
  v628 = v678;
  if ( *v678 >= 0 )
  {
    v629 = *v678 - 1;
    *v678 = v629;
    if ( !v629 )
      (*(void (**)(void))(*((_QWORD *)v628 + 1) + 48LL))();
  }
  if ( *v682 >= 0 )
  {
    v630 = *v682 - 1;
    *v682 = v630;
    if ( !v630 )
      (*(void (**)(void))(*(_QWORD *)(v679 + 8) + 48LL))();
  }
  if ( *(int *)v451 >= 0 )
  {
    v631 = *(_DWORD *)v451 - 1;
    *(_DWORD *)v451 = v631;
    if ( !v631 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v451 + 8) + 48LL))(v451);
  }
  if ( SLODWORD(Py_NoneStruct[0]) >= 0 && !--LODWORD(Py_NoneStruct[0]) )
    (*(void (**)(void))(Py_NoneStruct[1] + 48))();
  v632 = sub_180493040(a1);
  sub_180005C90(qword_182781220, *(_QWORD *)&qword_1826CC660, v632);
  v633 = sub_1804D71F0(a1);
  v126 = v680;
  v19 = 1586;
  *(_DWORD *)(v680 + 40) = 1586;
  v634 = (int *)sub_1817928F0(a1, v633);
  v635 = v634;
  if ( !v634 )
  {
    v677 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_1290;
  }
  v636 = *v634;
  if ( v636 >= 0 )
  {
    v637 = v636 - 1;
    *v635 = v637;
    if ( !v637 )
      (*(void (**)(void))(*((_QWORD *)v635 + 1) + 48LL))();
  }
  sub_1800111B0(a1);
  v638 = qword_182781228;
  if ( *(_DWORD *)qword_182781228 < 0xC0000000 )
  {
    ++*(_DWORD *)qword_182781228;
    return qword_182781228;
  }
  return v638;
}

