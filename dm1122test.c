// positive sp value has been detected, the output may be wrong!
void __fastcall dm_getToken_sub_7F30C(__int64 *a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x29
  int v4; // w9
  __int64 v5; // x30
  __int64 v6; // x30
  int v7; // w9
  __int64 v8; // x30
  __int64 v9; // x1
  unsigned __int64 v10; // x10
  int v11; // w9
  __int64 v13; // x0
  __int64 v14; // x30
  int v15; // w10
  int v17; // w10
  __int64 v19; // x0
  __int64 v20; // x30
  int v22; // w11
  __int64 v23; // x0
  __int64 v24; // x30
  bool v25; // zf
  __int64 v26; // x30
  __int64 v27; // x30
  int v28; // w9
  int v29; // w10
  __int64 v32; // x0
  __int64 v33; // x30
  _QWORD *v34; // x30
  __int64 v35; // x0
  __int64 v36; // x30
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x30
  __int64 v41; // x0
  __int64 v42; // x30
  int v43; // w9
  __int64 v44; // x0
  __int64 v45; // x30
  int v46; // w10
  __int64 v47; // x0
  __int64 v48; // x30
  __int64 v49; // x0
  __int64 v50; // x30
  const char *v51; // x1
  int v52; // w9
  int v53; // w10
  int v55; // w9
  int v56; // w10
  __int64 v58; // x0
  __int64 v59; // x30
  int v60; // w11
  int v61; // w10
  const char *v63; // x1
  __int64 v64; // x30
  __int64 v65; // x0
  int v66; // w9
  int v68; // w9
  int v69; // w10
  __int64 v71; // x0
  __int64 v72; // x30
  int v73; // w8
  __int64 v74; // x0
  __int64 v75; // x30
  __int64 v77; // x30
  __int64 v78; // x0
  __int64 v79; // x30
  int v80; // w9
  __int64 v81; // x0
  __int64 v82; // x30
  int v83; // w9
  __int64 v84; // x9
  int v85; // w10
  __int64 v86; // x30
  char v87; // w11
  char v88; // w12
  __int64 v89; // x0
  __int64 v90; // x30
  __int64 v91; // x0
  __int64 v92; // x30
  __int64 v93; // x0
  __int64 v94; // x30
  int v95; // w9
  int v96; // w11
  __int64 v97; // x0
  __int64 v98; // x30
  int v99; // w9
  __int64 v100; // x0
  __int64 v101; // x30
  __int64 v102; // x8
  __int64 v103; // x30
  int v104; // w9
  __int64 v106; // x0
  __int64 v107; // x30
  int v108; // w9
  int v109; // w9
  __int64 v110; // x0
  __int64 v111; // x30
  __int64 v112; // x0
  __int64 v113; // x30
  int v114; // w9
  int v115; // w11
  int v116; // w10
  int v117; // w8
  __int64 v118; // x0
  __int64 v119; // x30
  __int64 v120; // x8
  __int64 v123; // x1
  int v124; // w10
  __int64 v126; // x0
  __int64 v127; // x30
  __int64 v128; // x0
  __int64 v129; // x30
  int v130; // w9
  int v131; // w11
  __int64 v132; // x8
  __int64 v133; // x0
  __int64 v134; // x30
  __int64 v135; // x0
  __int64 v136; // x30
  __int64 v137; // x1
  __int64 v138; // x9
  __int64 v139; // x0
  __int64 v140; // x30
  int v142; // w9
  int v143; // w9
  int v146; // w11
  int v148; // w10
  __int64 v149; // x30
  int v150; // w10
  int v151; // w9
  __int64 v152; // x0
  __int64 v153; // x30
  __int64 v155; // x0
  __int64 v156; // x30
  __int64 v158; // x0
  __int64 v159; // x30
  int v160; // w9
  int v161; // w9
  int v162; // w10
  __int64 v164; // x0
  __int64 v165; // x30
  int v167; // w11
  __int64 v169; // x0
  __int64 v170; // x30
  int v172; // w9
  __int64 v173; // x0
  __int64 v174; // x30
  char v176; // w11
  int v177; // w11
  __int64 v178; // x30
  unsigned __int64 v179; // x10
  int v180; // w10
  __int64 v182; // x0
  int v183; // w9
  __int64 v184; // x30
  __int64 v186; // x9
  int v187; // w9
  __int64 v188; // x0
  __int64 v189; // x30
  __int64 v190; // x9
  int v194; // w9
  __int64 v196; // x0
  __int64 v197; // x30
  __int64 v198; // x30
  __int64 v199; // x30
  int v200; // w8
  __int64 v201; // x30
  int v202; // w9
  __int64 v203; // x30
  int v204; // w10
  char v206; // w11
  char v207; // w12
  int v208; // w8
  int v209; // w8
  __int64 v210; // x0
  __int64 v211; // x30
  int v212; // w8
  __int64 v213; // x30
  int v214; // w10
  int v217; // w9
  __int64 v218; // x0
  __int64 v219; // x30
  unsigned __int64 v220; // x10
  unsigned __int64 v221; // x10
  int v222; // w9
  int v224; // w10
  int v225; // w10
  __int64 v227; // x0
  __int64 v228; // x30
  __int64 v229; // x0
  __int64 v230; // x30
  int v231; // w11
  __int64 v232; // x0
  __int64 v233; // x8
  __int64 v234; // x0
  __int64 v235; // x0
  __int64 v236; // x30
  int v237; // w11
  __int64 v238; // x0
  __int64 v239; // x30
  int v240; // w8
  __int64 v241; // x0
  __int64 v242; // x30
  int v243; // w11
  __int64 v244; // x30
  __int64 v245; // x0
  __int64 v246; // x30
  int v247; // w9
  int v248; // w9
  __int64 v249; // x30
  __int64 v250; // x0
  __int64 v251; // x30
  __int64 v252; // x8
  __int64 v253; // x0
  __int64 v254; // x30
  __int64 v255; // x0
  __int64 v256; // x30
  __int64 *v257; // x8
  int v258; // w8
  unsigned __int64 v259; // x10
  int v260; // w9
  int v261; // w10
  __int64 v263; // x0
  __int64 v264; // x30
  int v266; // w9
  char v267; // w11
  char v268; // w12
  __int64 v269; // x0
  __int64 v270; // x30
  __int64 v271; // x9
  int v272; // w8
  int v273; // w9
  __int64 v274; // x0
  __int64 v275; // x30
  __int64 v276; // x0
  __int64 v277; // x30
  int v278; // w11
  __int64 v279; // x0
  __int64 v280; // x30
  __int64 v281; // x9
  int v283; // w11
  int v284; // w9
  __int64 v285; // x0
  __int64 v286; // x30
  char v287; // w11
  char v288; // w12
  int v289; // w10
  int v290; // w9
  __int64 v291; // x0
  __int64 v292; // x30
  __int64 v293; // x0
  __int64 v294; // x30
  __int64 v295; // x0
  __int64 v296; // x30
  int v297; // w9
  __int64 v298; // x30
  unsigned int v299; // w0
  int v300; // w9
  __int64 v301; // x0
  __int64 v302; // x30
  __int64 v303; // x0
  __int64 v304; // x30
  int v305; // w0
  int v306; // w9
  int v308; // w9
  unsigned __int64 v309; // x10
  int v310; // w9
  int v311; // w9
  __int64 v312; // x0
  __int64 v313; // x0
  __int64 v314; // x30
  __int64 v315; // x0
  int v316; // w9
  int v317; // w11
  __int64 v318; // x0
  __int64 v319; // x30
  __int64 v320; // x0
  __int64 v321; // x30
  __int64 v322; // x0
  __int64 v323; // x30
  int v324; // w10
  __int64 v326; // x0
  __int64 v327; // x30
  __int64 v328; // x0
  __int64 v329; // x30
  int v330; // w10
  __int64 v332; // x0
  __int64 v333; // x30
  int v334; // w9
  __int64 v335; // x0
  __int64 v336; // x30
  __int64 v337; // x0
  __int64 v338; // x30
  int v340; // w10
  __int64 v342; // x0
  __int64 v343; // x30
  int v344; // w9
  __int64 v345; // x30
  __int64 v346; // x10
  __int64 v347; // x8
  __int64 v348; // x0
  __int64 v349; // x30
  int v350; // w11
  __int64 v351; // x0
  __int64 v352; // x30
  char v353; // w11
  char v354; // w12
  _QWORD *v355; // x30
  __int64 v356; // x0
  __int64 v357; // x30
  const char *v358; // x1
  __int64 v359; // x0
  __int64 v360; // x30
  __int64 v361; // x9
  __int64 v362; // x0
  __int64 v363; // x30
  __int64 v364; // x0
  __int64 v365; // x30
  __int64 v366; // x0
  __int64 v367; // x30
  int v368; // w10
  int v370; // w10
  __int64 v372; // x1
  __int64 v374; // x0
  __int64 v375; // x30
  int v376; // w11
  int v377; // w10
  __int64 v379; // x0
  __int64 v380; // x30
  __int64 v381; // x0
  __int64 v382; // x30
  __int64 v384; // x0
  __int64 v385; // x30
  __int64 v386; // x0
  __int64 v387; // x30
  int v388; // w9
  __int64 v389; // x0
  __int64 v390; // x30
  int v391; // w9
  int v392; // w9
  __int64 v393; // x0
  __int64 v394; // x30
  __int64 v395; // x0
  __int64 v396; // x30
  __int64 v397; // x0
  __int64 v398; // x30
  __int64 v399; // x0
  __int64 v400; // x30
  int v401; // w11
  __int64 v403; // x0
  __int64 v404; // x30
  __int64 v405; // x30
  __int64 v406; // x0
  __int64 v407; // x30
  __int64 v408; // x0
  __int64 v409; // x30
  __int64 v410; // x30
  __int64 v411; // x0
  __int64 v412; // x30
  int v414; // w11
  __int64 v415; // x0
  __int64 v416; // x0
  __int64 v417; // x30
  __int64 v418; // x0
  __int64 v419; // x30
  __int64 v420; // x0
  __int64 v421; // x30
  __int64 v422; // x30
  unsigned int v423; // w0
  int v424; // w11
  char v425; // w11
  char v426; // w12
  __int64 v427; // x30
  __int64 v429; // x8
  int v430; // w10
  __int64 v432; // x30
  __int64 v433; // x0
  __int64 v434; // x0
  __int64 v435; // x30
  __int64 v436; // x9
  __int64 v438; // x0
  __int64 v439; // x30
  int v440; // w9
  int v441; // w11
  __int64 v442; // x30
  __int64 v443; // x0
  __int64 v444; // x30
  int v445; // w9
  void (__fastcall *v446)(_BYTE *, int *); // x2
  int v447; // w9
  __int64 v448; // x0
  int v449; // w9
  int v450; // w9
  int v451; // w10
  int v452; // w9
  char v453; // w11
  __int64 v454; // x0
  __int64 v455; // x30
  __int64 v456; // x30
  int v457; // w0
  __int64 v458; // x0
  __int64 v459; // x30
  __int64 v460; // x0
  __int64 v461; // x30
  int v462; // w9
  char v463; // w11
  int v464; // w9
  __int64 v465; // x0
  __int64 v466; // x30
  int v467; // w9
  int v468; // w9
  __int64 v469; // x0
  __int64 v470; // x30
  int v471; // w10
  int v473; // w11
  __int64 v474; // x0
  __int64 v475; // x30
  _QWORD *v476; // x1
  int v477; // w10
  int v479; // w9
  int v481; // w9
  __int64 v482; // x30
  int v485; // w9
  int v486; // w9
  __int64 v487; // x0
  __int64 v488; // x30
  int v489; // w9
  __int64 v491; // x0
  __int64 v492; // x30
  __int64 v493; // x8
  __int64 v494; // x0
  __int64 v495; // x30
  __int64 v496; // x30
  __int64 v497; // x0
  __int64 v498; // x30
  __int64 v499; // x30
  __int64 v500; // x1
  __int64 v501; // x0
  __int64 v502; // x30
  int v503; // w10
  int v505; // w9
  int v506; // w10
  char v508; // w11
  __int64 v509; // x0
  __int64 v510; // x30
  int v511; // w11
  __int64 v512; // x0
  __int64 v513; // x30
  int v514; // w9
  __int64 v515; // x0
  __int64 v516; // x30
  __int64 v517; // x0
  __int64 v518; // x30
  __int64 v519; // x0
  __int64 v520; // x30
  char v521; // w11
  __int64 v522; // x0
  __int64 v523; // x30
  char v525; // w11
  int v526; // w9
  int v527; // w10
  int v528; // w9
  int v529; // w9
  __int64 v530; // x0
  int v531; // w9
  int v532; // w9
  __int64 v533; // x0
  __int64 v534; // x30
  __int64 v535[2]; // [xsp+920h] [xbp-11B0h] BYREF
  __int64 v536[2]; // [xsp+940h] [xbp-1190h] BYREF
  __int64 v537; // [xsp+9D0h] [xbp-1100h]
  _QWORD *v538; // [xsp+9D8h] [xbp-10F8h]
  __int64 v539; // [xsp+9E0h] [xbp-10F0h]
  _QWORD *v540; // [xsp+9E8h] [xbp-10E8h]
  __int64 v541; // [xsp+9F0h] [xbp-10E0h]
  _QWORD *v542; // [xsp+9F8h] [xbp-10D8h]
  __int64 v543; // [xsp+A00h] [xbp-10D0h]
  _QWORD *v544; // [xsp+A08h] [xbp-10C8h]
  __int64 v545; // [xsp+A10h] [xbp-10C0h] BYREF
  _QWORD *v546; // [xsp+A18h] [xbp-10B8h]
  __int64 v547; // [xsp+A20h] [xbp-10B0h] BYREF
  _QWORD *v548; // [xsp+A28h] [xbp-10A8h]
  __int64 v549; // [xsp+A30h] [xbp-10A0h] BYREF
  _QWORD *v550; // [xsp+A38h] [xbp-1098h]
  __int64 v551; // [xsp+A40h] [xbp-1090h] BYREF
  _QWORD *v552; // [xsp+A48h] [xbp-1088h]
  __int64 v553; // [xsp+A50h] [xbp-1080h]
  int v554; // [xsp+A5Ch] [xbp-1074h]
  int v555; // [xsp+A60h] [xbp-1070h]
  int v556; // [xsp+A64h] [xbp-106Ch]
  int v557; // [xsp+A68h] [xbp-1068h]
  int v558; // [xsp+A6Ch] [xbp-1064h]
  __int64 *v559; // [xsp+A70h] [xbp-1060h]
  int v560; // [xsp+A7Ch] [xbp-1054h]
  int v561; // [xsp+A80h] [xbp-1050h]
  int v562; // [xsp+A84h] [xbp-104Ch]
  int v563; // [xsp+A88h] [xbp-1048h]
  int v564; // [xsp+A8Ch] [xbp-1044h]
  int v565; // [xsp+A90h] [xbp-1040h]
  int v566; // [xsp+A94h] [xbp-103Ch]
  int v567; // [xsp+A98h] [xbp-1038h]
  int v568; // [xsp+A9Ch] [xbp-1034h]
  int v569; // [xsp+AA0h] [xbp-1030h]
  int v570; // [xsp+AA4h] [xbp-102Ch]
  int v571; // [xsp+AA8h] [xbp-1028h]
  int v572; // [xsp+AACh] [xbp-1024h]
  int v573; // [xsp+AB0h] [xbp-1020h]
  int v574; // [xsp+AB4h] [xbp-101Ch]
  int v575; // [xsp+AB8h] [xbp-1018h]
  int v576; // [xsp+ABCh] [xbp-1014h]
  int v577; // [xsp+AC0h] [xbp-1010h]
  int v578; // [xsp+AC4h] [xbp-100Ch]
  int v579; // [xsp+AC8h] [xbp-1008h]
  int v580; // [xsp+ACCh] [xbp-1004h]
  int v581; // [xsp+AD0h] [xbp-1000h]
  int v582; // [xsp+AD4h] [xbp-FFCh]
  int v583; // [xsp+AD8h] [xbp-FF8h]
  int v584; // [xsp+ADCh] [xbp-FF4h]
  int v585; // [xsp+AE0h] [xbp-FF0h]
  int v586; // [xsp+AE4h] [xbp-FECh]
  int v587; // [xsp+AE8h] [xbp-FE8h]
  int v588; // [xsp+AECh] [xbp-FE4h]
  int v589; // [xsp+AF0h] [xbp-FE0h]
  int v590; // [xsp+AF4h] [xbp-FDCh]
  int v591; // [xsp+AF8h] [xbp-FD8h]
  int v592; // [xsp+AFCh] [xbp-FD4h]
  int v593; // [xsp+B00h] [xbp-FD0h]
  int v594; // [xsp+B04h] [xbp-FCCh]
  __int64 *v595; // [xsp+B08h] [xbp-FC8h]
  int v596; // [xsp+B10h] [xbp-FC0h]
  int v597; // [xsp+B14h] [xbp-FBCh]
  _QWORD *v598; // [xsp+B18h] [xbp-FB8h]
  int v599; // [xsp+B20h] [xbp-FB0h]
  int v600; // [xsp+B24h] [xbp-FACh]
  int v601; // [xsp+B28h] [xbp-FA8h]
  int v602; // [xsp+B2Ch] [xbp-FA4h]
  __int64 v603; // [xsp+B30h] [xbp-FA0h]
  int v604; // [xsp+B3Ch] [xbp-F94h]
  int v605; // [xsp+B40h] [xbp-F90h]
  int v606; // [xsp+B44h] [xbp-F8Ch]
  int v607; // [xsp+B48h] [xbp-F88h]
  int v608; // [xsp+B4Ch] [xbp-F84h]
  int v609; // [xsp+B50h] [xbp-F80h]
  int v610; // [xsp+B54h] [xbp-F7Ch]
  int v611; // [xsp+B58h] [xbp-F78h]
  int v612; // [xsp+B5Ch] [xbp-F74h]
  int v613; // [xsp+B60h] [xbp-F70h]
  int v614; // [xsp+B64h] [xbp-F6Ch]
  __int64 *v615; // [xsp+B68h] [xbp-F68h]
  __int64 *v616; // [xsp+B70h] [xbp-F60h]
  int v617; // [xsp+B7Ch] [xbp-F54h]
  int v618; // [xsp+B80h] [xbp-F50h]
  int v619; // [xsp+B84h] [xbp-F4Ch]
  int v620; // [xsp+B88h] [xbp-F48h]
  int v621; // [xsp+B8Ch] [xbp-F44h]
  int v622; // [xsp+B90h] [xbp-F40h]
  int v623; // [xsp+B94h] [xbp-F3Ch]
  int v624; // [xsp+B98h] [xbp-F38h]
  int v625; // [xsp+B9Ch] [xbp-F34h]
  int v626; // [xsp+BA0h] [xbp-F30h]
  int v627; // [xsp+BA4h] [xbp-F2Ch]
  int v628; // [xsp+BA8h] [xbp-F28h]
  int v629; // [xsp+BACh] [xbp-F24h]
  int v630; // [xsp+BB0h] [xbp-F20h]
  int v631; // [xsp+BB4h] [xbp-F1Ch]
  __int64 v632; // [xsp+BB8h] [xbp-F18h]
  int v633; // [xsp+BC4h] [xbp-F0Ch]
  int v634; // [xsp+BC8h] [xbp-F08h]
  int v635; // [xsp+BCCh] [xbp-F04h]
  int v636; // [xsp+BD0h] [xbp-F00h]
  int v637; // [xsp+BD4h] [xbp-EFCh]
  int v638; // [xsp+BD8h] [xbp-EF8h]
  int v639; // [xsp+BDCh] [xbp-EF4h]
  int v640; // [xsp+BE0h] [xbp-EF0h]
  int v641; // [xsp+BE4h] [xbp-EECh]
  int v642; // [xsp+BE8h] [xbp-EE8h]
  int v643; // [xsp+BECh] [xbp-EE4h]
  int v644; // [xsp+BF0h] [xbp-EE0h]
  int v645; // [xsp+BF4h] [xbp-EDCh]
  int v646; // [xsp+BF8h] [xbp-ED8h]
  int v647; // [xsp+BFCh] [xbp-ED4h]
  int v648; // [xsp+C00h] [xbp-ED0h]
  int v649; // [xsp+C04h] [xbp-ECCh]
  int v650; // [xsp+C08h] [xbp-EC8h]
  int v651; // [xsp+C0Ch] [xbp-EC4h]
  int v652; // [xsp+C10h] [xbp-EC0h]
  int v653; // [xsp+C14h] [xbp-EBCh]
  int v654; // [xsp+C18h] [xbp-EB8h]
  int v655; // [xsp+C1Ch] [xbp-EB4h]
  int v656; // [xsp+C20h] [xbp-EB0h]
  int v657; // [xsp+C24h] [xbp-EACh]
  int v658; // [xsp+C28h] [xbp-EA8h]
  int v659; // [xsp+C2Ch] [xbp-EA4h]
  int v660; // [xsp+C30h] [xbp-EA0h]
  int v661; // [xsp+C34h] [xbp-E9Ch]
  int v662; // [xsp+C38h] [xbp-E98h]
  int v663; // [xsp+C3Ch] [xbp-E94h]
  __int64 *v664; // [xsp+C40h] [xbp-E90h]
  int v665; // [xsp+C48h] [xbp-E88h]
  int v666; // [xsp+C4Ch] [xbp-E84h]
  _QWORD *v667; // [xsp+C50h] [xbp-E80h]
  int v668; // [xsp+C58h] [xbp-E78h]
  int v669; // [xsp+C5Ch] [xbp-E74h]
  int v670; // [xsp+C60h] [xbp-E70h]
  int v671; // [xsp+C64h] [xbp-E6Ch]
  __int64 v672; // [xsp+C68h] [xbp-E68h]
  int v673; // [xsp+C74h] [xbp-E5Ch]
  int v674; // [xsp+C78h] [xbp-E58h]
  int v675; // [xsp+C7Ch] [xbp-E54h]
  int v676; // [xsp+C80h] [xbp-E50h]
  int v677; // [xsp+C84h] [xbp-E4Ch]
  int v678; // [xsp+C88h] [xbp-E48h]
  int v679; // [xsp+C8Ch] [xbp-E44h]
  int v680; // [xsp+C90h] [xbp-E40h]
  int v681; // [xsp+C94h] [xbp-E3Ch]
  int v682; // [xsp+C98h] [xbp-E38h]
  int v683; // [xsp+C9Ch] [xbp-E34h]
  __int64 *v684; // [xsp+CA0h] [xbp-E30h]
  __int64 v685; // [xsp+CA8h] [xbp-E28h]
  __int64 v686; // [xsp+CB0h] [xbp-E20h]
  int v687; // [xsp+CB8h] [xbp-E18h]
  int v688; // [xsp+CBCh] [xbp-E14h]
  _BOOL4 v689; // [xsp+CC0h] [xbp-E10h]
  int v690; // [xsp+CC4h] [xbp-E0Ch]
  __int64 v691; // [xsp+CC8h] [xbp-E08h]
  _QWORD *v692; // [xsp+CD0h] [xbp-E00h]
  __int64 v693; // [xsp+CD8h] [xbp-DF8h]
  int v694; // [xsp+CE4h] [xbp-DECh]
  int v695; // [xsp+CE8h] [xbp-DE8h]
  int v696; // [xsp+CECh] [xbp-DE4h]
  int v697; // [xsp+CF0h] [xbp-DE0h]
  int v698; // [xsp+CF4h] [xbp-DDCh]
  __int64 *v699; // [xsp+CF8h] [xbp-DD8h]
  int v700; // [xsp+D04h] [xbp-DCCh]
  int v701; // [xsp+D08h] [xbp-DC8h]
  int v702; // [xsp+D0Ch] [xbp-DC4h]
  int v703; // [xsp+D10h] [xbp-DC0h]
  int v704; // [xsp+D14h] [xbp-DBCh]
  int v705; // [xsp+D18h] [xbp-DB8h]
  int v706; // [xsp+D1Ch] [xbp-DB4h]
  unsigned int v707; // [xsp+D20h] [xbp-DB0h]
  int v708; // [xsp+D24h] [xbp-DACh]
  int v709; // [xsp+D28h] [xbp-DA8h]
  int v710; // [xsp+D2Ch] [xbp-DA4h]
  int v711; // [xsp+D30h] [xbp-DA0h]
  int v712; // [xsp+D34h] [xbp-D9Ch]
  int v713; // [xsp+D38h] [xbp-D98h]
  int v714; // [xsp+D3Ch] [xbp-D94h]
  int v715; // [xsp+D40h] [xbp-D90h]
  int v716; // [xsp+D44h] [xbp-D8Ch]
  int v717; // [xsp+D48h] [xbp-D88h]
  int v718; // [xsp+D4Ch] [xbp-D84h]
  int v719; // [xsp+D50h] [xbp-D80h]
  int v720; // [xsp+D54h] [xbp-D7Ch]
  int v721; // [xsp+D58h] [xbp-D78h]
  int v722; // [xsp+D5Ch] [xbp-D74h]
  int v723; // [xsp+D60h] [xbp-D70h]
  int v724; // [xsp+D64h] [xbp-D6Ch]
  int v725; // [xsp+D68h] [xbp-D68h]
  int v726; // [xsp+D6Ch] [xbp-D64h]
  int v727; // [xsp+D70h] [xbp-D60h]
  int v728; // [xsp+D74h] [xbp-D5Ch]
  int v729; // [xsp+D78h] [xbp-D58h]
  int v730; // [xsp+D7Ch] [xbp-D54h]
  int v731; // [xsp+D80h] [xbp-D50h]
  int v732; // [xsp+D84h] [xbp-D4Ch]
  int v733; // [xsp+D88h] [xbp-D48h]
  int v734; // [xsp+D8Ch] [xbp-D44h]
  __int64 *v735; // [xsp+D90h] [xbp-D40h]
  int v736; // [xsp+D98h] [xbp-D38h]
  int v737; // [xsp+D9Ch] [xbp-D34h]
  _QWORD *v738; // [xsp+DA0h] [xbp-D30h]
  int v739; // [xsp+DA8h] [xbp-D28h]
  int v740; // [xsp+DACh] [xbp-D24h]
  int v741; // [xsp+DB0h] [xbp-D20h]
  int v742; // [xsp+DB4h] [xbp-D1Ch]
  __int64 v743; // [xsp+DB8h] [xbp-D18h]
  int v744; // [xsp+DC4h] [xbp-D0Ch]
  int v745; // [xsp+DC8h] [xbp-D08h]
  int v746; // [xsp+DCCh] [xbp-D04h]
  int v747; // [xsp+DD0h] [xbp-D00h]
  int v748; // [xsp+DD4h] [xbp-CFCh]
  int v749; // [xsp+DD8h] [xbp-CF8h]
  int v750; // [xsp+DDCh] [xbp-CF4h]
  int v751; // [xsp+DE0h] [xbp-CF0h]
  int v752; // [xsp+DE4h] [xbp-CECh]
  int v753; // [xsp+DE8h] [xbp-CE8h]
  int v754; // [xsp+DECh] [xbp-CE4h]
  __int64 *v755; // [xsp+DF0h] [xbp-CE0h]
  __int64 *v756; // [xsp+DF8h] [xbp-CD8h]
  int v757; // [xsp+E04h] [xbp-CCCh]
  int v758; // [xsp+E08h] [xbp-CC8h]
  int v759; // [xsp+E0Ch] [xbp-CC4h]
  int v760; // [xsp+E10h] [xbp-CC0h]
  int v761; // [xsp+E14h] [xbp-CBCh]
  int v762; // [xsp+E18h] [xbp-CB8h]
  int v763; // [xsp+E1Ch] [xbp-CB4h]
  int v764; // [xsp+E20h] [xbp-CB0h]
  int v765; // [xsp+E24h] [xbp-CACh]
  int v766; // [xsp+E28h] [xbp-CA8h]
  int v767; // [xsp+E2Ch] [xbp-CA4h]
  int v768; // [xsp+E30h] [xbp-CA0h]
  int v769; // [xsp+E34h] [xbp-C9Ch]
  int v770; // [xsp+E38h] [xbp-C98h]
  int v771; // [xsp+E3Ch] [xbp-C94h]
  __int64 v772; // [xsp+E40h] [xbp-C90h]
  int v773; // [xsp+E4Ch] [xbp-C84h]
  int v774; // [xsp+E50h] [xbp-C80h]
  int v775; // [xsp+E54h] [xbp-C7Ch]
  int v776; // [xsp+E58h] [xbp-C78h]
  int v777; // [xsp+E5Ch] [xbp-C74h]
  int v778; // [xsp+E60h] [xbp-C70h]
  int v779; // [xsp+E64h] [xbp-C6Ch]
  int v780; // [xsp+E68h] [xbp-C68h]
  int v781; // [xsp+E6Ch] [xbp-C64h]
  int v782; // [xsp+E70h] [xbp-C60h]
  int v783; // [xsp+E74h] [xbp-C5Ch]
  int v784; // [xsp+E78h] [xbp-C58h]
  int v785; // [xsp+E7Ch] [xbp-C54h]
  int v786; // [xsp+E80h] [xbp-C50h]
  int v787; // [xsp+E84h] [xbp-C4Ch]
  int v788; // [xsp+E88h] [xbp-C48h]
  int v789; // [xsp+E8Ch] [xbp-C44h]
  int v790; // [xsp+E90h] [xbp-C40h]
  int v791; // [xsp+E94h] [xbp-C3Ch]
  int v792; // [xsp+E98h] [xbp-C38h]
  int v793; // [xsp+E9Ch] [xbp-C34h]
  int v794; // [xsp+EA0h] [xbp-C30h]
  int v795; // [xsp+EA4h] [xbp-C2Ch]
  int v796; // [xsp+EA8h] [xbp-C28h]
  int v797; // [xsp+EACh] [xbp-C24h]
  int v798; // [xsp+EB0h] [xbp-C20h]
  int v799; // [xsp+EB4h] [xbp-C1Ch]
  int v800; // [xsp+EB8h] [xbp-C18h]
  int v801; // [xsp+EBCh] [xbp-C14h]
  int v802; // [xsp+EC0h] [xbp-C10h]
  int v803; // [xsp+EC4h] [xbp-C0Ch]
  __int64 *v804; // [xsp+EC8h] [xbp-C08h]
  int v805; // [xsp+ED0h] [xbp-C00h]
  int v806; // [xsp+ED4h] [xbp-BFCh]
  _QWORD *v807; // [xsp+ED8h] [xbp-BF8h]
  int v808; // [xsp+EE0h] [xbp-BF0h]
  int v809; // [xsp+EE4h] [xbp-BECh]
  int v810; // [xsp+EE8h] [xbp-BE8h]
  int v811; // [xsp+EECh] [xbp-BE4h]
  __int64 v812; // [xsp+EF0h] [xbp-BE0h]
  int v813; // [xsp+EFCh] [xbp-BD4h]
  int v814; // [xsp+F00h] [xbp-BD0h]
  int v815; // [xsp+F04h] [xbp-BCCh]
  int v816; // [xsp+F08h] [xbp-BC8h]
  int v817; // [xsp+F0Ch] [xbp-BC4h]
  int v818; // [xsp+F10h] [xbp-BC0h]
  int v819; // [xsp+F14h] [xbp-BBCh]
  int v820; // [xsp+F18h] [xbp-BB8h]
  int v821; // [xsp+F1Ch] [xbp-BB4h]
  int v822; // [xsp+F20h] [xbp-BB0h]
  int v823; // [xsp+F24h] [xbp-BACh]
  __int64 *v824; // [xsp+F28h] [xbp-BA8h]
  int v825; // [xsp+F34h] [xbp-B9Ch]
  int v826; // [xsp+F38h] [xbp-B98h]
  int v827; // [xsp+F3Ch] [xbp-B94h]
  int v828; // [xsp+F40h] [xbp-B90h]
  int v829; // [xsp+F44h] [xbp-B8Ch]
  int v830; // [xsp+F48h] [xbp-B88h]
  int v831; // [xsp+F4Ch] [xbp-B84h]
  int v832; // [xsp+F50h] [xbp-B80h]
  int v833; // [xsp+F54h] [xbp-B7Ch]
  __int64 *v834; // [xsp+F58h] [xbp-B78h]
  __int64 *v835; // [xsp+F60h] [xbp-B70h]
  int v836; // [xsp+F68h] [xbp-B68h]
  int v837; // [xsp+F6Ch] [xbp-B64h]
  int v838; // [xsp+F70h] [xbp-B60h]
  int v839; // [xsp+F74h] [xbp-B5Ch]
  int v840; // [xsp+F78h] [xbp-B58h]
  _BOOL4 v841; // [xsp+F7Ch] [xbp-B54h]
  int v842; // [xsp+F80h] [xbp-B50h]
  int v843; // [xsp+F84h] [xbp-B4Ch]
  int v844; // [xsp+F88h] [xbp-B48h]
  int v845; // [xsp+F8Ch] [xbp-B44h]
  int v846; // [xsp+F90h] [xbp-B40h]
  int v847; // [xsp+F94h] [xbp-B3Ch]
  _BOOL4 v848; // [xsp+F98h] [xbp-B38h]
  int v849; // [xsp+F9Ch] [xbp-B34h]
  int v850; // [xsp+FA0h] [xbp-B30h]
  int v851; // [xsp+FA4h] [xbp-B2Ch]
  _BOOL4 v852; // [xsp+FA8h] [xbp-B28h]
  int v853; // [xsp+FACh] [xbp-B24h]
  int v854; // [xsp+FB0h] [xbp-B20h]
  int v855; // [xsp+FB4h] [xbp-B1Ch]
  int v856; // [xsp+FB8h] [xbp-B18h]
  int v857; // [xsp+FBCh] [xbp-B14h]
  int v858; // [xsp+FC0h] [xbp-B10h]
  int v859; // [xsp+FC4h] [xbp-B0Ch]
  int v860; // [xsp+FC8h] [xbp-B08h]
  int v861; // [xsp+FCCh] [xbp-B04h]
  int v862; // [xsp+FD0h] [xbp-B00h]
  int v863; // [xsp+FD4h] [xbp-AFCh]
  int v864; // [xsp+FD8h] [xbp-AF8h]
  int v865; // [xsp+FDCh] [xbp-AF4h]
  int v866; // [xsp+FE0h] [xbp-AF0h]
  int v867; // [xsp+FE4h] [xbp-AECh]
  int v868; // [xsp+FE8h] [xbp-AE8h]
  int v869; // [xsp+FECh] [xbp-AE4h]
  int v870; // [xsp+FF0h] [xbp-AE0h]
  int v871; // [xsp+FF4h] [xbp-ADCh]
  int v872; // [xsp+FF8h] [xbp-AD8h]
  int v873; // [xsp+FFCh] [xbp-AD4h]
  int v874; // [xsp+1000h] [xbp-AD0h]
  int v875; // [xsp+1004h] [xbp-ACCh]
  __int64 v876; // [xsp+1008h] [xbp-AC8h]
  int v877; // [xsp+1010h] [xbp-AC0h]
  int v878; // [xsp+1014h] [xbp-ABCh]
  int v879; // [xsp+1018h] [xbp-AB8h]
  int v880; // [xsp+101Ch] [xbp-AB4h]
  int v881; // [xsp+1020h] [xbp-AB0h]
  int v882; // [xsp+1024h] [xbp-AACh]
  int v883; // [xsp+1028h] [xbp-AA8h]
  int v884; // [xsp+102Ch] [xbp-AA4h]
  int v885; // [xsp+1030h] [xbp-AA0h]
  int v886; // [xsp+1034h] [xbp-A9Ch]
  int v887; // [xsp+1038h] [xbp-A98h]
  int v888; // [xsp+103Ch] [xbp-A94h]
  int v889; // [xsp+1040h] [xbp-A90h]
  int v890; // [xsp+1044h] [xbp-A8Ch]
  int v891; // [xsp+1048h] [xbp-A88h]
  int v892; // [xsp+104Ch] [xbp-A84h]
  int v893; // [xsp+1050h] [xbp-A80h]
  int v894; // [xsp+1054h] [xbp-A7Ch]
  int v895; // [xsp+1058h] [xbp-A78h]
  int v896; // [xsp+105Ch] [xbp-A74h]
  int v897; // [xsp+1060h] [xbp-A70h]
  int v898; // [xsp+1064h] [xbp-A6Ch]
  __int64 *v899; // [xsp+1068h] [xbp-A68h]
  int v900; // [xsp+107Ch] [xbp-A54h]
  __int64 v901; // [xsp+1080h] [xbp-A50h]
  __int64 v902; // [xsp+1088h] [xbp-A48h]
  __int64 *v903; // [xsp+1090h] [xbp-A40h]
  __int64 v904; // [xsp+1098h] [xbp-A38h]
  char v905; // [xsp+10A4h] [xbp-A2Ch]
  bool v906; // [xsp+10A7h] [xbp-A29h]
  int v907; // [xsp+10A8h] [xbp-A28h]
  bool v908; // [xsp+10AEh] [xbp-A22h]
  bool v909; // [xsp+10AFh] [xbp-A21h]
  __int64 *v910; // [xsp+10B0h] [xbp-A20h]
  __int64 *v911; // [xsp+10B8h] [xbp-A18h]
  __int64 *v912; // [xsp+10C0h] [xbp-A10h]
  bool v913; // [xsp+10CAh] [xbp-A06h]
  bool v914; // [xsp+10CBh] [xbp-A05h]
  unsigned int v915; // [xsp+10CCh] [xbp-A04h]
  __int64 v916; // [xsp+10D0h] [xbp-A00h]
  unsigned int v917; // [xsp+10DCh] [xbp-9F4h]
  const char *v918; // [xsp+10E0h] [xbp-9F0h]
  unsigned int v919; // [xsp+10ECh] [xbp-9E4h]
  int v920; // [xsp+10F0h] [xbp-9E0h]
  int v921; // [xsp+10F4h] [xbp-9DCh]
  int v922; // [xsp+10F8h] [xbp-9D8h]
  int v923; // [xsp+10FCh] [xbp-9D4h]
  __int64 v924; // [xsp+1100h] [xbp-9D0h] BYREF
  char v925; // [xsp+110Ch] [xbp-9C4h]
  int v926; // [xsp+1128h] [xbp-9A8h]
  int v927; // [xsp+112Ch] [xbp-9A4h]
  char v928; // [xsp+113Ch] [xbp-994h]
  char v929; // [xsp+1158h] [xbp-978h]
  unsigned int v930; // [xsp+115Ch] [xbp-974h]
  unsigned int v931; // [xsp+1168h] [xbp-968h]
  int v932; // [xsp+116Ch] [xbp-964h]
  int v933; // [xsp+1170h] [xbp-960h]
  bool v934; // [xsp+1177h] [xbp-959h]
  int v935; // [xsp+1178h] [xbp-958h]
  int v936; // [xsp+117Ch] [xbp-954h]
  char v937; // [xsp+118Ch] [xbp-944h]
  unsigned int v938; // [xsp+11ACh] [xbp-924h]
  unsigned int v939; // [xsp+11BCh] [xbp-914h]
  unsigned int v940; // [xsp+11CCh] [xbp-904h]
  int v941; // [xsp+11D0h] [xbp-900h]
  int v942; // [xsp+11D4h] [xbp-8FCh]
  int v943; // [xsp+11D8h] [xbp-8F8h]
  int v944; // [xsp+11DCh] [xbp-8F4h]
  char v945; // [xsp+11ECh] [xbp-8E4h]
  int v946; // [xsp+1208h] [xbp-8C8h]
  int v947; // [xsp+120Ch] [xbp-8C4h]
  char v948; // [xsp+121Ch] [xbp-8B4h]
  char v949; // [xsp+1238h] [xbp-898h]
  unsigned int v950; // [xsp+123Ch] [xbp-894h]
  unsigned int v951; // [xsp+1248h] [xbp-888h]
  int v952; // [xsp+124Ch] [xbp-884h]
  int v953; // [xsp+1250h] [xbp-880h]
  bool v954; // [xsp+1257h] [xbp-879h]
  int v955; // [xsp+1258h] [xbp-878h]
  int v956; // [xsp+125Ch] [xbp-874h]
  char v957; // [xsp+126Ch] [xbp-864h]
  _BYTE v958[12]; // [xsp+1288h] [xbp-848h] BYREF
  int v959; // [xsp+1294h] [xbp-83Ch] BYREF
  _BYTE v960[10]; // [xsp+1298h] [xbp-838h] BYREF
  _BYTE v961[1014]; // [xsp+12A2h] [xbp-82Eh] BYREF
  _QWORD v962[128]; // [xsp+1698h] [xbp-438h] BYREF
  __int64 (__fastcall *v963)(_QWORD, _QWORD); // [xsp+1A98h] [xbp-38h]
  __int64 v964; // [xsp+1AA8h] [xbp-28h]
  __int64 v965; // [xsp+1AB0h] [xbp-20h]
  __int64 (__fastcall *v966)(_QWORD, _QWORD); // [xsp+1AB8h] [xbp-18h]
  __int64 v967; // [xsp+1AC0h] [xbp-10h]
  __int64 (__fastcall *v968)(_QWORD, _QWORD); // [xsp+1AC8h] [xbp-8h]

  v964 = v2;
  v962[127] = a1;
  v963 = v966;
  v965 = v3;
  v549 = (__int64)a1;
  v550 = v966;
  v963 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v903 = a1;
  v902 = a2;
  v905 = byte_27A1D2;
  v900 = -844506030;
  v899 = &v924;
  while ( 1 )
  {
    v898 = v900;
    v897 = v900 + 2141554670;
    if ( v900 == -2141554670 )
    {
      v941 = 1024;
      v684 = &v551;
      v549 = ((__int64 (*)(void))qword_27A208)();
      v940 = v549;
      v245 = v549;
      v246 = (__int64)v899;
      v899[31] = (__int64)&unk_252A69;
      *(_QWORD *)(v246 + 240) = 14LL;
      v549 = v245;
      v550 = (_QWORD *)v246;
      v945 = 67;
      v549 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v246 + 240) + 1LL);
      v158 = v549;
      v159 = (__int64)v550;
      v899[28] = v549;
      v944 = 0;
      v549 = v158;
      v550 = (_QWORD *)v159;
      v943 = -956736641;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          v312 = v549;
                          v683 = v943;
                          v682 = v943 + 1971958657;
                          if ( v943 != -1971958657 )
                            break;
                          v422 = (__int64)v550;
                          *(_BYTE *)(v899[28] + v899[30]) = 0;
                          v549 = v312;
                          v550 = (_QWORD *)v422;
                          v943 = -1626260806;
                        }
                        v681 = v683 + 1926322933;
                        if ( v683 != -1926322933 )
                          break;
                        if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                          v160 = 1467572806;
                        else
                          v160 = -1514363634;
                        v943 = v160;
                        v671 = y - 10;
                      }
                      v448 = v549;
                      v680 = v683 + 1626260806;
                      if ( v683 != -1626260806 )
                        break;
                      v429 = (__int64)v899;
                      v77 = (__int64)v550;
                      *(_BYTE *)(v899[28] + v899[30]) = 0;
                      *(_QWORD *)(v429 + 256) = *(_QWORD *)(v429 + 224);
                      v549 = v448;
                      v550 = (_QWORD *)v77;
                      if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                        v511 = 2105784994;
                      else
                        v511 = -1971958657;
                      v943 = v511;
                      v668 = y - 10;
                    }
                    v679 = v683 + 1560740578;
                    if ( v683 != -1560740578 )
                      break;
                    if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                      v489 = -1626260806;
                    else
                      v489 = -1971958657;
                    v943 = v489;
                    v669 = y - 10;
                  }
                  v678 = v683 + 1514363634;
                  if ( v683 != -1514363634 )
                    break;
                  v463 = *(_BYTE *)(v899[31] + v944) ^ v945;
                  v379 = v549;
                  v380 = (__int64)v550;
                  ++v945;
                  *(_BYTE *)(v899[28] + v944) = v463;
                  v549 = v379;
                  v550 = (_QWORD *)v380;
                  v943 = 1467572806;
                }
                v677 = v683 + 956736641;
                if ( v683 != -956736641 )
                  break;
                v179 = v899[30];
                if ( v944 >= v179 )
                  v22 = -1560740578;
                else
                  v22 = -1926322933;
                v943 = v22;
                v672 = v944 - v179;
              }
              v676 = v683 - 781406647;
              if ( v683 != 781406647 )
                break;
              v943 = 1115010295;
            }
            v675 = v683 - 1115010295;
            if ( v683 != 1115010295 )
              break;
            ++v944;
            v943 = -956736641;
          }
          v674 = v683 - 1467572806;
          if ( v683 != 1467572806 )
            break;
          v267 = *(_BYTE *)(v899[31] + v944);
          v268 = v945++;
          v133 = v547;
          v134 = (__int64)v548;
          *(_BYTE *)(v899[28] + v944) = v267 ^ v268;
          v547 = v133;
          v548 = (_QWORD *)v134;
          if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
            v96 = 781406647;
          else
            v96 = -1514363634;
          v943 = v96;
          v670 = y - 10;
        }
        v673 = v683 - 2105784994;
        if ( v683 == 2105784994 )
          break;
        v547 = v549;
        v548 = v550;
      }
      v102 = (__int64)v899;
      v356 = v543;
      v357 = (__int64)v544;
      v899[24] = v899[32];
      v358 = *(const char **)(v102 + 192);
      v543 = v356;
      v544 = (_QWORD *)v357;
      v667 = v962;
      v549 = qword_27A228(v962, v358, v940);
      v346 = v899[24];
      v666 = v541;
      v541 = v346;
      v410 = (__int64)v544;
      ((void (__fastcall *)(__int64))qword_27C0E8)(v543);
      v543 = 4294967196LL;
      v544 = (_QWORD *)v410;
      v665 = 0;
      v939 = ((__int64 (__fastcall *)(__int64, _QWORD *))qword_27A1F8)(v549, v667);
      v942 = v939;
      v549 = (unsigned __int16)v547 | 0x74DB0000LL;
      v664 = &v549;
      v547 = (unsigned __int16)v547 | 0x74DB0000u;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v526 = *(_DWORD *)v664 + 1927420796;
                      v663 = *(_DWORD *)v664;
                      v662 = v526;
                      if ( v526 )
                        break;
                      v89 = v547;
                      v90 = (__int64)v548;
                      *(_DWORD *)v664 = 643763272;
                      v547 = v89;
                      v548 = (_QWORD *)v90;
                    }
                    v543 = v545;
                    v544 = v546;
                    v661 = v663 + 1860875866;
                    if ( v663 != -1860875866 )
                      break;
                    v149 = (__int64)v548;
                    v150 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))qword_27A230)(v960, v899[22], 9LL);
                    v547 = 16690LL;
                    v548 = (_QWORD *)v149;
                    if ( v150 )
                      v376 = (unsigned __int16)v549 | 0x45E50000;
                    else
                      v376 = 716289433;
                    v549 = (unsigned __int16)v549 | 0x45E50000u;
                    v474 = v549;
                    v475 = (__int64)v550;
                    *(_DWORD *)v664 = v376;
                    v626 = v150;
                    v549 = v474;
                    v550 = (_QWORD *)v475;
                  }
                  v547 = v549;
                  v548 = v550;
                  v660 = v663 + 1706641337;
                  if ( v663 != -1706641337 )
                    break;
                  v186 = (__int64)v899;
                  v285 = v549;
                  v286 = (__int64)v550;
                  v899[37] = (__int64)&unk_252A77;
                  *(_QWORD *)(v186 + 288) = 9LL;
                  v549 = v285;
                  v550 = (_QWORD *)v286;
                  v948 = 67;
                  v199 = (__int64)v546;
                  v545 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v186 + 288) + 1LL);
                  v546 = (_QWORD *)v199;
                  v301 = v543;
                  v302 = (__int64)v544;
                  v899[34] = v543;
                  v947 = 0;
                  v543 = v301;
                  v544 = (_QWORD *)v302;
                  v946 = -956736641;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    while ( 1 )
                                    {
                                      v643 = v946;
                                      v642 = v946 + 1971958657;
                                      if ( v946 != -1971958657 )
                                        break;
                                      v35 = v547;
                                      v36 = (__int64)v548;
                                      *(_BYTE *)(v899[34] + v899[36]) = 0;
                                      v547 = v35;
                                      v548 = (_QWORD *)v36;
                                      v946 = -1626260806;
                                    }
                                    v547 = v549;
                                    v548 = v550;
                                    v641 = v643 + 1926322933;
                                    if ( v643 != -1926322933 )
                                      break;
                                    if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                                      v308 = 1467572806;
                                    else
                                      v308 = -1514363634;
                                    v946 = v308;
                                    v631 = y - 10;
                                  }
                                  v547 = v549;
                                  v548 = v550;
                                  v640 = v643 + 1626260806;
                                  if ( v643 != -1626260806 )
                                    break;
                                  v120 = (__int64)v899;
                                  v269 = v549;
                                  v270 = (__int64)v550;
                                  *(_BYTE *)(v899[34] + v899[36]) = 0;
                                  v271 = *(_QWORD *)(v120 + 272);
                                  v549 = v269;
                                  v550 = (_QWORD *)v270;
                                  v337 = v545;
                                  v338 = (__int64)v546;
                                  *(_QWORD *)(v120 + 304) = v271;
                                  v545 = v337;
                                  v546 = (_QWORD *)v338;
                                  if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                                    v243 = 2105784994;
                                  else
                                    v243 = -1971958657;
                                  v946 = v243;
                                  v628 = y - 10;
                                }
                                v547 = v549;
                                v548 = v550;
                                v639 = v643 + 1560740578;
                                if ( v643 != -1560740578 )
                                  break;
                                if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                                  v11 = -1626260806;
                                else
                                  v11 = -1971958657;
                                v946 = v11;
                                v629 = y - 10;
                              }
                              v547 = v549;
                              v548 = v550;
                              v638 = v643 + 1514363634;
                              if ( v643 != -1514363634 )
                                break;
                              v176 = *(_BYTE *)(v899[37] + v947) ^ v948;
                              v110 = v549;
                              v111 = (__int64)v550;
                              ++v948;
                              *(_BYTE *)(v899[34] + v947) = v176;
                              v549 = v110;
                              v550 = (_QWORD *)v111;
                              v946 = 1467572806;
                            }
                            v547 = v549;
                            v548 = v550;
                            v637 = v643 + 956736641;
                            if ( v643 != -956736641 )
                              break;
                            v10 = v899[36];
                            if ( v947 >= v10 )
                              v317 = -1560740578;
                            else
                              v317 = -1926322933;
                            v946 = v317;
                            v632 = v947 - v10;
                          }
                          v545 = v547;
                          v546 = v548;
                          v636 = v643 - 781406647;
                          if ( v643 != 781406647 )
                            break;
                          v946 = 1115010295;
                        }
                        v547 = v549;
                        v548 = v550;
                        v635 = v643 - 1115010295;
                        if ( v643 != 1115010295 )
                          break;
                        ++v947;
                        v946 = -956736641;
                      }
                      v547 = v549;
                      v548 = v550;
                      v634 = v643 - 1467572806;
                      if ( v643 != 1467572806 )
                        break;
                      v287 = *(_BYTE *)(v899[37] + v947);
                      v288 = v948++;
                      v381 = v549;
                      v382 = (__int64)v550;
                      *(_BYTE *)(v899[34] + v947) = v287 ^ v288;
                      v549 = v381;
                      v550 = (_QWORD *)v382;
                      if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                        v424 = 781406647;
                      else
                        v424 = -1514363634;
                      v946 = v424;
                      v630 = y - 10;
                    }
                    v547 = v549;
                    v548 = v550;
                    v633 = v643 - 2105784994;
                    if ( v643 == 2105784994 )
                      break;
                    v547 = v549;
                    v548 = v550;
                  }
                  v366 = v549;
                  v367 = (__int64)v550;
                  v899[22] = v899[38];
                  *(_DWORD *)v664 = 1718462077;
                  v549 = v366;
                  v550 = (_QWORD *)v367;
                }
                v541 = v543;
                v542 = v544;
                v659 = v663 + 1557788517;
                if ( v663 != -1557788517 )
                  break;
                v549 = (__int64)v961;
                v6 = (__int64)v548;
                v938 = ((__int64 (__fastcall *)(__int64))qword_27C060)(v547);
                v547 = v938;
                v548 = (_QWORD *)v6;
                byte_27A009 = v938 != 0;
                v146 = y_96 - 10;
                if ( y_96 < 10 || ((x_95 * (x_95 - 1)) & 1) == 0 )
                  v116 = -1927420796;
                else
                  v116 = 1566120125;
                v487 = v539;
                v488 = (__int64)v540;
                *(_DWORD *)v664 = v116;
                v624 = v487;
                v623 = v146;
                v539 = v487;
                v540 = (_QWORD *)v488;
              }
              v541 = v543;
              v542 = v544;
              v658 = v663 + 654087227;
              if ( v663 != -654087227 )
                break;
              v118 = v549;
              v119 = (__int64)v550;
              *(_DWORD *)v664 = 1288081477;
              v549 = v118;
              v550 = (_QWORD *)v119;
            }
            v541 = v543;
            v542 = v544;
            v657 = v663 + 549143437;
            if ( v663 != -549143437 )
              break;
            v430 = y_96 - 10;
            if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
              v297 = -130988148;
            else
              v297 = 968419930;
            v403 = v543;
            v404 = (__int64)v544;
            *(_DWORD *)v664 = v297;
            v618 = v430;
            v543 = v403;
            v544 = (_QWORD *)v404;
          }
          v543 = v545;
          v544 = v546;
          v656 = v663 + 328142169;
          if ( v663 != -328142169 )
            break;
          v32 = v547;
          v33 = (__int64)v548;
          *(_DWORD *)v664 = 668289018;
          v547 = v32;
          v548 = (_QWORD *)v33;
        }
        v547 = v549;
        v548 = v550;
        v655 = v663 + 130988148;
        if ( v663 == -130988148 )
          break;
        v547 = v549;
        v548 = v550;
        v654 = v663 + 65597859;
        if ( v663 == -65597859 )
        {
          v23 = v547;
          v24 = (__int64)v548;
          *(_DWORD *)v664 = 1718462077;
          v547 = v23;
          v548 = (_QWORD *)v24;
        }
        else
        {
          v547 = v549;
          v548 = v550;
          v653 = v663 - 643763272;
          if ( v663 == 643763272 )
          {
            ((void (__fastcall *)(__int64))qword_27C0E8)(v899[22]);
            v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v939);
            v411 = v543;
            v412 = (__int64)v544;
            *(_DWORD *)v664 = 668289018;
            v620 = v411;
            v543 = v411;
            v544 = (_QWORD *)v412;
          }
          else
          {
            v541 = v543;
            v542 = v544;
            v652 = v663 - 668289018;
            if ( v663 == 668289018 )
            {
              v261 = y_96 - 10;
              if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                v447 = -549143437;
              else
                v447 = 968419930;
              v374 = v549;
              v375 = (__int64)v550;
              *(_DWORD *)v664 = v447;
              v619 = v261;
              v549 = v374;
              v550 = (_QWORD *)v375;
            }
            else
            {
              v545 = v547;
              v546 = v548;
              v651 = v663 - 716289433;
              if ( v663 == 716289433 )
              {
                v53 = y_96 - 10;
                if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                  v529 = -1557788517;
                else
                  v529 = 1566120125;
                v348 = v541;
                v349 = (__int64)v542;
                *(_DWORD *)v664 = v529;
                v625 = v53;
                v541 = v348;
                v542 = (_QWORD *)v349;
              }
              else
              {
                v547 = v549;
                v548 = v550;
                v650 = v663 - 968419930;
                if ( v663 == 968419930 )
                {
                  v335 = v549;
                  v336 = (__int64)v550;
                  *(_DWORD *)v664 = -549143437;
                  v549 = v335;
                  v550 = (_QWORD *)v336;
                }
                else
                {
                  v545 = v547;
                  v546 = v548;
                  v649 = v663 - 1172652338;
                  if ( v663 == 1172652338 )
                  {
                    v324 = y_96 - 10;
                    if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                      v486 = 1288081477;
                    else
                      v486 = -654087227;
                    v320 = v547;
                    v321 = (__int64)v548;
                    *(_DWORD *)v664 = v486;
                    v622 = v324;
                    v547 = v320;
                    v548 = (_QWORD *)v321;
                  }
                  else
                  {
                    v545 = v547;
                    v546 = v548;
                    v648 = v663 - 1288081477;
                    if ( v663 == 1288081477 )
                    {
                      v368 = y_96 - 10;
                      if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                        v43 = -65597859;
                      else
                        v43 = -654087227;
                      v517 = v541;
                      v518 = (__int64)v542;
                      *(_DWORD *)v664 = v43;
                      v621 = v368;
                      v541 = v517;
                      v542 = (_QWORD *)v518;
                    }
                    else
                    {
                      v547 = v549;
                      v548 = v550;
                      v647 = v663 - 1566120125;
                      if ( v663 == 1566120125 )
                      {
                        LODWORD(v549) = ((__int64 (__fastcall *)(_BYTE *))qword_27C060)(v961);
                        v938 = v549;
                        byte_27A009 = (_DWORD)v549 != 0;
                        v44 = (unsigned int)v549;
                        v45 = (__int64)v550;
                        *(_DWORD *)v664 = -1557788517;
                        v617 = v44;
                        v549 = v44;
                        v550 = (_QWORD *)v45;
                      }
                      else
                      {
                        v545 = v547;
                        v546 = v548;
                        v646 = v663 - 1718462077;
                        if ( v663 == 1718462077 )
                        {
                          v547 = v939;
                          v305 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64))qword_27A238)(v549, v960, 1024LL);
                          v549 = (unsigned int)v305;
                          if ( v305 <= 0 )
                            v440 = 643763272;
                          else
                            v440 = -1860875866;
                          v293 = v549;
                          v294 = (__int64)v550;
                          *(_DWORD *)v664 = v440;
                          v627 = v293;
                          v549 = v293;
                          v550 = (_QWORD *)v294;
                        }
                        else
                        {
                          v545 = v547;
                          v546 = v548;
                          v645 = v663 - 1960510072;
                          if ( v663 == 1960510072 )
                          {
                            v258 = v942 - 1;
                            if ( v942 >= 1 )
                              v151 = -1706641337;
                            else
                              v151 = -328142169;
                            v71 = v547;
                            v72 = (__int64)v548;
                            *(_DWORD *)v664 = v151;
                            v644 = v258;
                            v547 = v71;
                            v548 = (_QWORD *)v72;
                          }
                          else
                          {
                            v545 = v547;
                            v546 = v548;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v952 = 1024;
      v249 = (__int64)v548;
      v616 = &v549;
      v615 = &v551;
      v547 = ((__int64 (__fastcall *)(__int64 *))qword_27A208)(&v549);
      v548 = (_QWORD *)v249;
      v951 = v549;
      v9 = (__int64)v899;
      v494 = v545;
      v495 = (__int64)v546;
      v899[47] = (__int64)&unk_252A80;
      *(_QWORD *)(v9 + 368) = 15LL;
      v545 = v494;
      v546 = (_QWORD *)v495;
      v957 = 67;
      v496 = (__int64)v544;
      v543 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v9 + 368) + 1LL);
      v544 = (_QWORD *)v496;
      v169 = v537;
      v170 = (__int64)v538;
      v899[44] = v537;
      v956 = 0;
      v537 = v169;
      v538 = (_QWORD *)v170;
      v955 = -956736641;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          v614 = v955;
                          v613 = v955 + 1971958657;
                          if ( v955 != -1971958657 )
                            break;
                          v416 = v549;
                          v417 = (__int64)v550;
                          *(_BYTE *)(v899[44] + v899[46]) = 0;
                          v549 = v416;
                          v550 = (_QWORD *)v417;
                          v955 = -1626260806;
                        }
                        v547 = v549;
                        v548 = v550;
                        v612 = v614 + 1926322933;
                        if ( v614 != -1926322933 )
                          break;
                        if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                          v445 = 1467572806;
                        else
                          v445 = -1514363634;
                        v955 = v445;
                        v602 = y - 10;
                      }
                      v547 = v549;
                      v548 = v550;
                      v611 = v614 + 1626260806;
                      if ( v614 != -1626260806 )
                        break;
                      v132 = (__int64)v899;
                      v359 = v543;
                      v360 = (__int64)v544;
                      *(_BYTE *)(v899[44] + v899[46]) = 0;
                      v361 = *(_QWORD *)(v132 + 352);
                      v543 = v359;
                      v544 = (_QWORD *)v360;
                      v386 = v547;
                      v387 = (__int64)v548;
                      *(_QWORD *)(v132 + 384) = v361;
                      v547 = v386;
                      v548 = (_QWORD *)v387;
                      if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                        v131 = 2105784994;
                      else
                        v131 = -1971958657;
                      v955 = v131;
                      v599 = y - 10;
                    }
                    v543 = v545;
                    v544 = v546;
                    v610 = v614 + 1560740578;
                    if ( v614 != -1560740578 )
                      break;
                    if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                      v391 = -1626260806;
                    else
                      v391 = -1971958657;
                    v955 = v391;
                    v600 = y - 10;
                  }
                  v547 = v549;
                  v548 = v550;
                  v609 = v614 + 1514363634;
                  if ( v614 != -1514363634 )
                    break;
                  v521 = *(_BYTE *)(v899[47] + v956) ^ v957;
                  v418 = v549;
                  v419 = (__int64)v550;
                  ++v957;
                  *(_BYTE *)(v899[44] + v956) = v521;
                  v549 = v418;
                  v550 = (_QWORD *)v419;
                  v955 = 1467572806;
                }
                v547 = v549;
                v548 = v550;
                v608 = v614 + 956736641;
                if ( v614 != -956736641 )
                  break;
                v309 = v899[46];
                if ( v956 >= v309 )
                  v237 = -1560740578;
                else
                  v237 = -1926322933;
                v955 = v237;
                v603 = v956 - v309;
              }
              v547 = v549;
              v548 = v550;
              v607 = v614 - 781406647;
              if ( v614 != 781406647 )
                break;
              v955 = 1115010295;
            }
            v545 = v547;
            v546 = v548;
            v606 = v614 - 1115010295;
            if ( v614 != 1115010295 )
              break;
            ++v956;
            v955 = -956736641;
          }
          v545 = v547;
          v546 = v548;
          v605 = v614 - 1467572806;
          if ( v614 != 1467572806 )
            break;
          v87 = *(_BYTE *)(v899[47] + v956);
          v88 = v957++;
          v81 = v549;
          v82 = (__int64)v550;
          *(_BYTE *)(v899[44] + v956) = v87 ^ v88;
          v549 = v81;
          v550 = (_QWORD *)v82;
          if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
            v350 = 781406647;
          else
            v350 = -1514363634;
          v955 = v350;
          v601 = y - 10;
        }
        v547 = v549;
        v548 = v550;
        v604 = v614 - 2105784994;
        if ( v614 == 2105784994 )
          break;
        v547 = v549;
        v548 = v550;
      }
      v491 = v545;
      v492 = (__int64)v546;
      v493 = (__int64)v899;
      v899[40] = v899[48];
      v545 = v491;
      v546 = (_QWORD *)v492;
      v51 = *(const char **)(v493 + 320);
      v598 = v962;
      v549 = qword_27A228(v962, v51, v951);
      v190 = v899[40];
      v597 = v547;
      v547 = v190;
      free((void *)v549);
      v549 = 4294967196LL;
      v596 = 0;
      v482 = (__int64)v546;
      v950 = ((__int64 (__fastcall *)(__int64, _QWORD *))qword_27A1F8)(v545, v598);
      v953 = v950;
      v545 = v950;
      v546 = (_QWORD *)v482;
      v595 = &v549;
      v549 = 208211008LL;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    while ( 1 )
                                    {
                                      while ( 1 )
                                      {
                                        v52 = *(_DWORD *)v595 + 2133354380;
                                        v594 = *(_DWORD *)v595;
                                        v593 = v52;
                                        if ( v52 )
                                          break;
                                        v204 = y_102 - 10;
                                        if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                                          v532 = 2082781687;
                                        else
                                          v532 = -1362262929;
                                        v515 = v541;
                                        v516 = (__int64)v542;
                                        *(_DWORD *)v595 = v532;
                                        v563 = v204;
                                        v541 = v515;
                                        v542 = (_QWORD *)v516;
                                      }
                                      v547 = v549;
                                      v548 = v550;
                                      v592 = v594 + 2016887473;
                                      if ( v594 != -2016887473 )
                                        break;
                                      v506 = y_102 - 10;
                                      if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                                        v481 = 1965306874;
                                      else
                                        v481 = -1874894432;
                                      v41 = v549;
                                      v42 = (__int64)v550;
                                      *(_DWORD *)v595 = v481;
                                      v566 = v506;
                                      v549 = v41;
                                      v550 = (_QWORD *)v42;
                                    }
                                    v547 = v549;
                                    v548 = v550;
                                    v591 = v594 + 1874894432;
                                    if ( v594 != -1874894432 )
                                      break;
                                    v198 = (__int64)v548;
                                    v547 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v950);
                                    v548 = (_QWORD *)v198;
                                    v420 = v549;
                                    v421 = (__int64)v550;
                                    *(_DWORD *)v595 = 1965306874;
                                    v560 = v420;
                                    v549 = v420;
                                    v550 = (_QWORD *)v421;
                                  }
                                  v543 = v545;
                                  v544 = v546;
                                  v590 = v594 + 1819934032;
                                  if ( v594 != -1819934032 )
                                    break;
                                  v117 = v954;
                                  if ( v954 )
                                    v528 = 519086274;
                                  else
                                    v528 = -2016887473;
                                  v406 = v543;
                                  v407 = (__int64)v544;
                                  *(_DWORD *)v595 = v528;
                                  v568 = v117;
                                  v543 = v406;
                                  v544 = (_QWORD *)v407;
                                }
                                v543 = v545;
                                v544 = v546;
                                v589 = v594 + 1362262929;
                                if ( v594 != -1362262929 )
                                  break;
                                v332 = v547;
                                v333 = (__int64)v548;
                                *(_DWORD *)v595 = 2082781687;
                                v547 = v332;
                                v548 = (_QWORD *)v333;
                              }
                              v543 = v545;
                              v544 = v546;
                              v588 = v594 + 1105887335;
                              if ( v594 != -1105887335 )
                                break;
                              v93 = v549;
                              v94 = (__int64)v550;
                              *(_DWORD *)v595 = 575691789;
                              v549 = v93;
                              v550 = (_QWORD *)v94;
                            }
                            v547 = v549;
                            v548 = v550;
                            v587 = v594 + 317268620;
                            if ( v594 != -317268620 )
                              break;
                            v124 = y_102 - 10;
                            if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                              v217 = 1100811555;
                            else
                              v217 = 205396647;
                            v112 = v549;
                            v113 = (__int64)v550;
                            *(_DWORD *)v595 = v217;
                            v572 = v124;
                            v549 = v112;
                            v550 = (_QWORD *)v113;
                          }
                          v547 = v549;
                          v548 = v550;
                          v586 = v594 + 220584799;
                          if ( v594 != -220584799 )
                            break;
                          v26 = (__int64)v548;
                          LODWORD(v547) = ((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))qword_27A238)(
                                            v950,
                                            v960,
                                            1024LL);
                          v548 = (_QWORD *)v26;
                          v954 = (int)v547 > 0;
                          v547 = (unsigned int)v547;
                          v479 = y_102 - 10;
                          if ( y_102 < 10 || ((x_101 * (x_101 - 1)) & 1) == 0 )
                            v148 = -1819934032;
                          else
                            v148 = 24332143;
                          v465 = v547;
                          v466 = (__int64)v548;
                          *(_DWORD *)v595 = v148;
                          v570 = v465;
                          v569 = v479;
                          v547 = v465;
                          v548 = (_QWORD *)v466;
                        }
                        v545 = v547;
                        v546 = v548;
                        v585 = v594 - 24332143;
                        if ( v594 != 24332143 )
                          break;
                        v547 = v950;
                        v530 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64))qword_27A238)(v549, v960, 1024LL);
                        v103 = (__int64)v550;
                        *(_DWORD *)v595 = -220584799;
                        v561 = v530;
                        v549 = v530;
                        v550 = (_QWORD *)v103;
                      }
                      v543 = v545;
                      v544 = v546;
                      v584 = v594 - 114789951;
                      if ( v594 != 114789951 )
                        break;
                      v15 = y_102 - 10;
                      if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                        v531 = -317268620;
                      else
                        v531 = 205396647;
                      v276 = v549;
                      v277 = (__int64)v550;
                      *(_DWORD *)v595 = v531;
                      v573 = v15;
                      v549 = v276;
                      v550 = (_QWORD *)v277;
                    }
                    v547 = v549;
                    v548 = v550;
                    v583 = v594 - 205396647;
                    if ( v594 != 205396647 )
                      break;
                    v291 = v549;
                    v292 = (__int64)v550;
                    *(_DWORD *)v595 = -317268620;
                    v549 = v291;
                    v550 = (_QWORD *)v292;
                  }
                  v543 = v545;
                  v544 = v546;
                  v582 = v594 - 208211008;
                  if ( v594 != 208211008 )
                    break;
                  v240 = v953 - 1;
                  if ( v953 >= 1 )
                    v392 = -1105887335;
                  else
                    v392 = 114789951;
                  v364 = v549;
                  v365 = (__int64)v550;
                  *(_DWORD *)v595 = v392;
                  v574 = v240;
                  v549 = v364;
                  v550 = (_QWORD *)v365;
                }
                v545 = v547;
                v546 = v548;
                v581 = v594 - 519086274;
                if ( v594 != 519086274 )
                  break;
                v298 = (__int64)v544;
                v299 = ((__int64 (__fastcall *)(_BYTE *, const char *))qword_27C068)(v960, "ctrip.android.view");
                v543 = v299;
                v544 = (_QWORD *)v298;
                byte_27BE70 = v299 != 0;
                v326 = v547;
                v327 = (__int64)v548;
                *(_DWORD *)v595 = 575691789;
                v567 = v326;
                v547 = v326;
                v548 = (_QWORD *)v327;
              }
              v547 = v549;
              v548 = v550;
              v580 = v594 - 575691789;
              if ( v594 != 575691789 )
                break;
              v225 = y_102 - 10;
              if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                v452 = -220584799;
              else
                v452 = 24332143;
              v19 = v549;
              v20 = (__int64)v550;
              *(_DWORD *)v595 = v452;
              v571 = v225;
              v549 = v19;
              v550 = (_QWORD *)v20;
            }
            v547 = v549;
            v548 = v550;
            v579 = v594 - 1100811555;
            if ( v594 != 1100811555 )
              break;
            v397 = v545;
            v398 = (__int64)v546;
            *(_DWORD *)v595 = -2133354380;
            v545 = v397;
            v546 = (_QWORD *)v398;
          }
          v543 = v545;
          v544 = v546;
          v578 = v594 - 1863640352;
          if ( v594 != 1863640352 )
            break;
          v58 = v547;
          v59 = (__int64)v548;
          *(_DWORD *)v595 = -2133354380;
          v547 = v58;
          v548 = (_QWORD *)v59;
        }
        v537 = v539;
        v538 = v540;
        v577 = v594 - 1890661668;
        if ( v594 == 1890661668 )
          break;
        v547 = v549;
        v548 = v550;
        v576 = v594 - 1965306874;
        if ( v594 == 1965306874 )
        {
          v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v950);
          v61 = y_102 - 10;
          if ( y_102 < 10 || ((x_101 * (x_101 - 1)) & 1) == 0 )
            v266 = 1863640352;
          else
            v266 = -1874894432;
          v501 = v547;
          v502 = (__int64)v548;
          *(_DWORD *)v595 = v266;
          v565 = v501;
          v564 = v61;
          v547 = v501;
          v548 = (_QWORD *)v502;
        }
        else
        {
          v545 = v547;
          v546 = v548;
          v575 = v594 - 2082781687;
          if ( v594 == 2082781687 )
          {
            v56 = y_102 - 10;
            if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
              v462 = 1890661668;
            else
              v462 = -1362262929;
            v173 = v549;
            v174 = (__int64)v550;
            *(_DWORD *)v595 = v462;
            v562 = v56;
            v549 = v173;
            v550 = (_QWORD *)v174;
          }
          else
          {
            v543 = v545;
            v544 = v546;
          }
        }
      }
      v541 = (__int64)v615;
      v949 = byte_27A009;
      v559 = &v549;
      while ( 1 )
      {
        v68 = *(_DWORD *)v559 + 1674627080;
        v558 = *(_DWORD *)v559;
        v557 = v68;
        if ( !v68 )
          return;
        v545 = v547;
        v546 = v548;
        v556 = v558 + 968773856;
        if ( v558 == -968773856 )
        {
          v178 = (__int64)v548;
          sub_BFBC();
          v547 = (__int64)v903;
          v548 = (_QWORD *)v178;
          ((void (__fastcall *)(__int64, void *, void *))sub_4C1DC)(v549, &unk_27A1D8, &unk_27A1E0);
          v959 = 0;
          v184 = (__int64)v550;
          v899[49] = 0LL;
          v550 = (_QWORD *)v184;
          v553 = qword_27A2A0;
          v549 = (__int64)v958;
          ((void (__fastcall *)(_BYTE *, int *))qword_27A2A0)(v958, &v959);
          v123 = *v903;
          v549 = (__int64)v903;
          v5 = v899[49];
          v552 = *(_QWORD **)(v123 + 1336);
          v548 = (_QWORD *)v5;
          v34 = v552;
          v901 = ((__int64 (__fastcall *)(__int64, _QWORD *))v552)(v547, v548);
          v547 = v901;
          v548 = v34;
          v900 = 2050458840;
          goto LABEL_685;
        }
        v541 = v543;
        v542 = v544;
        v555 = v558 - 1135950202;
        if ( v558 == 1135950202 )
        {
          v209 = v949 & 1;
          if ( (v949 & 1) != 0 )
            v300 = -1674627080;
          else
            v300 = -968773856;
          v128 = v549;
          v129 = (__int64)v550;
          *(_DWORD *)v559 = v300;
          v554 = v209;
          v549 = v128;
          v550 = (_QWORD *)v129;
        }
        else
        {
          v547 = v549;
          v548 = v550;
        }
      }
    }
    v896 = v898 + 2047382208;
    if ( v898 == -2047382208 )
    {
      v900 = 175361445;
      goto LABEL_685;
    }
    v895 = v898 + 1955622702;
    if ( v898 == -1955622702 )
    {
      if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
        v284 = 285748422;
      else
        v284 = -1173148627;
      v900 = v284;
      v829 = y_80 - 10;
      goto LABEL_685;
    }
    v894 = v898 + 1904441864;
    if ( v898 == -1904441864 )
    {
      v900 = -505905272;
      goto LABEL_685;
    }
    v893 = v898 + 1816490866;
    if ( v898 == -1816490866 )
    {
      v549 = ((__int64 (__fastcall *)(__int64))qword_27C0E8)(v899[49]);
      v904 = v901;
      if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
        v69 = -2047382208;
      else
        v69 = -839399816;
      v900 = v69;
      v687 = y_80 - 10;
      goto LABEL_685;
    }
    v892 = v898 + 1173148627;
    if ( v898 == -1173148627 )
    {
      dword_27A2E4 = 0;
      byte_27A1D2 = 0;
      v900 = 285748422;
      goto LABEL_685;
    }
    v891 = v898 + 1171730050;
    if ( v898 == -1171730050 )
    {
      v900 = -356840487;
      goto LABEL_685;
    }
    v890 = v898 + 844506030;
    if ( v898 == -844506030 )
    {
      if ( (v905 & 1) != 0 )
        v202 = 144842464;
      else
        v202 = -505905272;
      v900 = v202;
      v877 = v905 & 1;
      goto LABEL_685;
    }
    v889 = v898 + 839399816;
    if ( v898 == -839399816 )
    {
      v315 = ((__int64 (__fastcall *)(__int64))qword_27C0E8)(v899[49]);
      v904 = v901;
      v549 = v315;
      v900 = -1816490866;
      goto LABEL_685;
    }
    v888 = v898 + 505905272;
    if ( v898 == -505905272 )
    {
      if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
        v80 = 2050458840;
      else
        v80 = -2141554670;
      v900 = v80;
      v825 = y_80 - 10;
      goto LABEL_685;
    }
    v887 = v898 + 356840487;
    if ( v898 == -356840487 )
    {
      if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
        v485 = 674181766;
      else
        v485 = 1927846508;
      v900 = v485;
      v827 = y_80 - 10;
      goto LABEL_685;
    }
    v886 = v898 - 39291853;
    if ( v898 == 39291853 )
    {
      if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
        v260 = -1816490866;
      else
        v260 = -839399816;
      v900 = v260;
      v688 = y_80 - 10;
      goto LABEL_685;
    }
    v545 = v547;
    v546 = v548;
    v885 = v898 - 144842464;
    if ( v898 != 144842464 )
      break;
    v549 = (__int64)&v551;
    v908 = ((x_107 * (x_107 - 1)) & 1) == 0;
    v909 = y_108 < 10;
    v907 = -1198486641;
    v876 = v543;
    v875 = (x_107 * (x_107 - 1)) & 1;
    v874 = y_108 - 10;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              v873 = v907;
                              v872 = v907 + 2067146466;
                              if ( v907 != -2067146466 )
                                break;
                              v910 = &v547;
                              v911 = v535;
                              v912 = &v545;
                              v549 = (__int64)v535;
                              v442 = (__int64)v540;
                              v539 = qword_27A228(v539, "%s/sg_data", (const char *)qword_27BF40);
                              v540 = (_QWORD *)v442;
                              v851 = v545;
                              v545 = 4294967196LL;
                              v234 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD))qword_27A1F8)(
                                       v549,
                                       v911,
                                       64LL,
                                       0LL);
                              *(_DWORD *)v912 = v234;
                              v549 = v234;
                              v224 = *(_DWORD *)v912 - 1;
                              v913 = *(_DWORD *)v912 < 1;
                              v541 = v913;
                              v549 = (unsigned int)x_107;
                              v547 = (unsigned int)(v547 * (v547 - 1));
                              v25 = y_108 < 10 || (v547 & 1) == 0;
                              v547 = 20685LL;
                              LODWORD(v37) = (unsigned __int16)v547 | 0xD10A0000;
                              if ( v25 )
                                v37 = 534650217LL;
                              else
                                v37 = (unsigned int)v37;
                              v547 = v37;
                              v907 = v549;
                              v850 = v224;
                              v849 = y_108 - 10;
                            }
                            v547 = v549;
                            v548 = v550;
                            v871 = v873 + 1604770553;
                            if ( v873 != -1604770553 )
                              break;
                            if ( y_108 < 10 || ((x_107 * (x_107 - 1)) & 1) == 0 )
                              v172 = -1071536648;
                            else
                              v172 = -1397799411;
                            v907 = v172;
                            v847 = y_108 - 10;
                          }
                          v547 = v549;
                          v548 = v550;
                          v870 = v873 + 1522739217;
                          if ( v873 != -1522739217 )
                            break;
                          if ( y_108 < 10 || ((x_107 * (x_107 - 1)) & 1) == 0 )
                            v7 = 786142798;
                          else
                            v7 = 198660571;
                          v907 = v7;
                          v838 = y_108 - 10;
                        }
                        v547 = v549;
                        v548 = v550;
                        v869 = v873 + 1424659018;
                        if ( v873 != -1424659018 )
                          break;
                        if ( v914 )
                          v109 = -65323017;
                        else
                          v109 = -612600172;
                        v907 = v109;
                        v841 = v914;
                      }
                      v547 = v549;
                      v548 = v550;
                      v868 = v873 + 1397799411;
                      if ( v873 != -1397799411 )
                        break;
                      v38 = v549;
                      v39 = (__int64)v550;
                      *(_BYTE *)v910 = 0;
                      v549 = v38;
                      v550 = (_QWORD *)v39;
                      v907 = -1071536648;
                    }
                    v547 = v549;
                    v548 = v550;
                    v867 = v873 + 1198486641;
                    if ( v873 != -1198486641 )
                      break;
                    if ( v908 || v909 )
                      v95 = -2067146466;
                    else
                      v95 = -787853107;
                    v907 = v95;
                    v852 = v908 || v909;
                  }
                  v541 = v543;
                  v542 = v544;
                  v866 = v873 + 1131052532;
                  if ( v873 != -1131052532 )
                    break;
                  v907 = -458326365;
                }
                v547 = v549;
                v548 = v550;
                v865 = v873 + 1071536648;
                if ( v873 != -1071536648 )
                  break;
                v533 = v547;
                v534 = (__int64)v548;
                *(_BYTE *)v910 = 0;
                v547 = v533;
                v548 = (_QWORD *)v534;
                if ( y_108 < 10 || ((x_107 * (x_107 - 1)) & 1) == 0 )
                  v222 = -955537442;
                else
                  v222 = -1397799411;
                v907 = v222;
                v846 = y_108 - 10;
              }
              v545 = v547;
              v546 = v548;
              v864 = v873 + 955537442;
              if ( v873 != -955537442 )
                break;
              v907 = -458326365;
            }
            v539 = v541;
            v540 = v542;
            v863 = v873 + 787853107;
            if ( v873 != -787853107 )
              break;
            v835 = v536;
            v834 = &v551;
            v549 = (__int64)v536;
            v213 = (__int64)v542;
            v541 = qword_27A228(v541, "%s/sg_data", (const char *)qword_27BF40);
            v542 = (_QWORD *)v213;
            v833 = v547;
            v547 = 4294967196LL;
            v232 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD))qword_27A1F8)(v549, v835, 64LL, 0LL);
            *((_DWORD *)v834 - 4) = v232;
            v549 = v232;
            v907 = -2067146466;
          }
          v547 = v549;
          v548 = v550;
          v862 = v873 + 612600172;
          if ( v873 != -612600172 )
            break;
          v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(*(unsigned int *)v912);
          v313 = v547;
          v314 = (__int64)v548;
          *(_BYTE *)v910 = 0;
          v547 = v313;
          v548 = (_QWORD *)v314;
          v907 = -458326365;
          v839 = v549;
        }
        v541 = v543;
        v542 = v544;
        v861 = v873 + 603986574;
        if ( v873 != -603986574 )
          break;
        v64 = (__int64)v542;
        v65 = (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *, __int64))qword_27A200)(4294967196LL, v911, 4LL)
            + 1;
        v541 = v65;
        v542 = (_QWORD *)v64;
        if ( (_DWORD)v65 )
          v194 = 1977494134;
        else
          v194 = -1522739217;
        v907 = v194;
        v845 = v549;
      }
      v541 = v543;
      v542 = v544;
      v860 = v873 + 458326365;
      if ( v873 == -458326365 )
        break;
      v547 = v549;
      v548 = v550;
      v859 = v873 + 65323017;
      if ( v873 == -65323017 )
      {
        v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(*(unsigned int *)v912);
        v395 = v545;
        v396 = (__int64)v546;
        *(_BYTE *)v910 = 1;
        v545 = v395;
        v546 = (_QWORD *)v396;
        v907 = -458326365;
        v840 = v549;
      }
      else
      {
        v547 = v549;
        v548 = v550;
        v858 = v873 + 741963;
        if ( v873 == -741963 )
        {
          v549 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64))qword_27A200)(4294967196LL, v911, 2LL);
          v907 = 1262040059;
          v832 = v547;
        }
        else
        {
          v547 = v549;
          v548 = v550;
          v857 = v873 - 198660571;
          if ( v873 == 198660571 )
          {
            v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(*(unsigned int *)v912);
            v303 = v543;
            v304 = (__int64)v544;
            *(_BYTE *)v910 = 0;
            v543 = v303;
            v544 = (_QWORD *)v304;
            v907 = 786142798;
            v831 = v545;
          }
          else
          {
            v543 = v545;
            v544 = v546;
            v856 = v873 - 534650217;
            if ( v873 == 534650217 )
            {
              if ( v913 )
                v310 = -1604770553;
              else
                v310 = -603986574;
              v907 = v310;
              v848 = v913;
            }
            else
            {
              v545 = v547;
              v546 = v548;
              v855 = v873 - 786142798;
              if ( v873 == 786142798 )
              {
                v549 = *(unsigned int *)v912;
                v432 = (__int64)v542;
                v433 = ((__int64 (__fastcall *)(__int64))qword_27C138)(v541);
                *(_BYTE *)v910 = 0;
                v541 = v433;
                v542 = (_QWORD *)v432;
                if ( y_108 < 10 || (((_BYTE)x_107 * ((_BYTE)x_107 - 1)) & 1) == 0 )
                  v85 = -1131052532;
                else
                  v85 = 198660571;
                v907 = v85;
                v837 = v547;
                v836 = y_108 - 10;
              }
              else
              {
                v545 = v547;
                v546 = v548;
                v854 = v873 - 1262040059;
                if ( v873 == 1262040059 )
                {
                  v541 = 4294967196LL;
                  v182 = (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *, __int64))qword_27A200)(
                                         v549,
                                         v911,
                                         2LL)
                       + 1;
                  v914 = (_DWORD)v182 != 0;
                  v549 = v182;
                  if ( y_108 < 10 || (((_BYTE)x_107 * ((_BYTE)x_107 - 1)) & 1) == 0 )
                    v289 = -1424659018;
                  else
                    v289 = -741963;
                  v907 = v289;
                  v843 = v549;
                  v842 = y_108 - 10;
                }
                else
                {
                  v545 = v547;
                  v546 = v548;
                  v853 = v873 - 1977494134;
                  if ( v873 == 1977494134 )
                  {
                    if ( y_108 < 10 || ((x_107 * (x_107 - 1)) & 1) == 0 )
                      v514 = 1262040059;
                    else
                      v514 = -741963;
                    v907 = v514;
                    v844 = y_108 - 10;
                  }
                  else
                  {
                    v545 = v547;
                    v546 = v548;
                  }
                }
              }
            }
          }
        }
      }
    }
    byte_27BF80 = *(_BYTE *)v910;
    if ( (byte_27BF80 & 1) != 0 )
      v278 = -1955622702;
    else
      v278 = -356840487;
    v900 = v278;
    v830 = byte_27BF80 & 1;
LABEL_685:
    v549 = v547;
    v550 = v548;
  }
  v884 = v898 - 175361445;
  if ( v898 == 175361445 )
  {
    v84 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40) - v899[307];
    v686 = v904;
    v685 = v84;
    v545 = v904;
    return;
  }
  v547 = v549;
  v548 = v550;
  v883 = v898 - 272778080;
  if ( v898 == 272778080 )
  {
    if ( v906 )
      v290 = 39291853;
    else
      v290 = 1538224237;
    v900 = v290;
    v689 = v906;
    goto LABEL_685;
  }
  v882 = v898 - 285748422;
  if ( v898 == 285748422 )
  {
    dword_27A2E4 = 0;
    byte_27A1D2 = 0;
    if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
      v4 = -1171730050;
    else
      v4 = -1173148627;
    v900 = v4;
    v828 = y_80 - 10;
    goto LABEL_685;
  }
  v547 = v549;
  v548 = v550;
  v881 = v898 - 674181766;
  if ( v898 == 674181766 )
  {
    if ( y_80 < 10 || ((x_79 * (x_79 - 1)) & 1) == 0 )
      v273 = -1904441864;
    else
      v273 = 1927846508;
    v900 = v273;
    v826 = y_80 - 10;
    goto LABEL_685;
  }
  v880 = v898 - 1538224237;
  if ( v898 == 1538224237 )
  {
    v244 = (__int64)v548;
    v904 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v903 + 1336))(v903, "");
    v547 = v904;
    v548 = (_QWORD *)v244;
    v900 = 175361445;
    goto LABEL_685;
  }
  v547 = v549;
  v548 = v550;
  v879 = v898 - 1927846508;
  if ( v898 == 1927846508 )
  {
    v900 = 674181766;
    goto LABEL_685;
  }
  v543 = v545;
  v544 = v546;
  v878 = v898 - 2050458840;
  if ( v898 != 2050458840 )
  {
    v545 = v547;
    v546 = v548;
    goto LABEL_685;
  }
  v920 = 1024;
  v824 = &v551;
  v549 = ((__int64 (*)(void))qword_27A208)();
  v919 = v547;
  v548 = v899;
  v106 = v549;
  v107 = (__int64)v550;
  v550[3] = &unk_252A69;
  *(_QWORD *)(v107 + 16) = 14LL;
  v549 = v106;
  v550 = (_QWORD *)v107;
  v925 = 67;
  v549 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v107 + 16) + 1LL);
  v342 = v549;
  v343 = (__int64)v550;
  *v899 = v549;
  v923 = 0;
  v549 = v342;
  v550 = (_QWORD *)v343;
  v922 = -956736641;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v823 = v922;
                      v822 = v922 + 1971958657;
                      if ( v922 != -1971958657 )
                        break;
                      v210 = v543;
                      v211 = (__int64)v544;
                      *(_BYTE *)(*v899 + v899[2]) = 0;
                      v543 = v210;
                      v544 = (_QWORD *)v211;
                      v922 = -1626260806;
                    }
                    v547 = v549;
                    v548 = v550;
                    v821 = v823 + 1926322933;
                    if ( v823 != -1926322933 )
                      break;
                    if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                      v99 = 1467572806;
                    else
                      v99 = -1514363634;
                    v922 = v99;
                    v811 = y - 10;
                  }
                  v543 = v545;
                  v544 = v546;
                  v820 = v823 + 1626260806;
                  if ( v823 != -1626260806 )
                    break;
                  v257 = v899;
                  v519 = v549;
                  v520 = (__int64)v550;
                  *(_BYTE *)(*v899 + v899[2]) = 0;
                  v257[4] = *v257;
                  v549 = v519;
                  v550 = (_QWORD *)v520;
                  if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                    v401 = 2105784994;
                  else
                    v401 = -1971958657;
                  v922 = v401;
                  v808 = y - 10;
                }
                v547 = v549;
                v548 = v550;
                v819 = v823 + 1560740578;
                if ( v823 != -1560740578 )
                  break;
                if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                  v130 = -1626260806;
                else
                  v130 = -1971958657;
                v922 = v130;
                v809 = y - 10;
              }
              v539 = v541;
              v540 = v542;
              v818 = v823 + 1514363634;
              if ( v823 != -1514363634 )
                break;
              v508 = *(_BYTE *)(v899[3] + v923) ^ v925;
              v399 = v545;
              v400 = (__int64)v546;
              ++v925;
              *(_BYTE *)(*v899 + v923) = v508;
              v545 = v399;
              v546 = (_QWORD *)v400;
              v922 = 1467572806;
            }
            v545 = v547;
            v546 = v548;
            v817 = v823 + 956736641;
            if ( v823 != -956736641 )
              break;
            v259 = v899[2];
            if ( v923 >= v259 )
              v441 = -1560740578;
            else
              v441 = -1926322933;
            v922 = v441;
            v812 = v923 - v259;
          }
          v543 = v545;
          v544 = v546;
          v816 = v823 - 781406647;
          if ( v823 != 781406647 )
            break;
          v922 = 1115010295;
        }
        v547 = v549;
        v548 = v550;
        v815 = v823 - 1115010295;
        if ( v823 != 1115010295 )
          break;
        ++v923;
        v922 = -956736641;
      }
      v547 = v549;
      v548 = v550;
      v814 = v823 - 1467572806;
      if ( v823 != 1467572806 )
        break;
      v425 = *(_BYTE *)(v899[3] + v923);
      v426 = v925++;
      v47 = v547;
      v48 = (__int64)v548;
      *(_BYTE *)(*v899 + v923) = v425 ^ v426;
      v547 = v47;
      v548 = (_QWORD *)v48;
      if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
        v414 = 781406647;
      else
        v414 = -1514363634;
      v922 = v414;
      v810 = y - 10;
    }
    v547 = v549;
    v548 = v550;
    v813 = v823 - 2105784994;
    if ( v823 == 2105784994 )
      break;
    v545 = v547;
    v546 = v548;
  }
  v918 = (const char *)v899[4];
  v807 = v962;
  v549 = qword_27A228(v962, v918, v919);
  v806 = v547;
  v547 = (__int64)v918;
  ((void (__fastcall *)(__int64))qword_27C0E8)(v549);
  v549 = 4294967196LL;
  v805 = 0;
  v8 = (__int64)v546;
  v917 = ((__int64 (__fastcall *)(__int64, _QWORD *))qword_27A1F8)(v545, v807);
  v921 = v917;
  v545 = v917;
  v546 = (_QWORD *)v8;
  v549 = (unsigned __int16)v543 | 0x74DB0000LL;
  v804 = &v549;
  v543 = (unsigned __int16)v543 | 0x74DB0000u;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v316 = *(_DWORD *)v804 + 1927420796;
                  v803 = *(_DWORD *)v804;
                  v802 = v316;
                  if ( v316 )
                    break;
                  v512 = v545;
                  v513 = (__int64)v546;
                  *(_DWORD *)v804 = 643763272;
                  v545 = v512;
                  v546 = (_QWORD *)v513;
                }
                v541 = v543;
                v542 = v544;
                v801 = v803 + 1860875866;
                if ( v803 != -1860875866 )
                  break;
                v27 = (__int64)v548;
                v28 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))qword_27A230)(v960, v916, 9LL);
                v547 = 16690LL;
                v548 = (_QWORD *)v27;
                if ( v28 )
                  v451 = (unsigned __int16)v549 | 0x45E50000;
                else
                  v451 = 716289433;
                v549 = (unsigned __int16)v549 | 0x45E50000u;
                v253 = v545;
                v254 = (__int64)v546;
                *(_DWORD *)v804 = v451;
                v766 = v28;
                v545 = v253;
                v546 = (_QWORD *)v254;
              }
              v547 = v549;
              v548 = v550;
              v800 = v803 + 1706641337;
              if ( v803 != -1706641337 )
                break;
              v138 = (__int64)v899;
              v458 = v545;
              v459 = (__int64)v546;
              v899[9] = (__int64)&unk_252A77;
              *(_QWORD *)(v138 + 64) = 9LL;
              v545 = v458;
              v546 = (_QWORD *)v459;
              v928 = 67;
              v549 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v138 + 64) + 1LL);
              v218 = v547;
              v219 = (__int64)v548;
              v899[6] = v547;
              v927 = 0;
              v547 = v218;
              v548 = (_QWORD *)v219;
              v926 = -956736641;
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  v783 = v926;
                                  v782 = v926 + 1971958657;
                                  if ( v926 != -1971958657 )
                                    break;
                                  v139 = v545;
                                  v140 = (__int64)v546;
                                  *(_BYTE *)(v899[6] + v899[8]) = 0;
                                  v545 = v139;
                                  v546 = (_QWORD *)v140;
                                  v926 = -1626260806;
                                }
                                v547 = v549;
                                v548 = v550;
                                v781 = v783 + 1926322933;
                                if ( v783 != -1926322933 )
                                  break;
                                if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                                  v467 = 1467572806;
                                else
                                  v467 = -1514363634;
                                v926 = v467;
                                v771 = y - 10;
                              }
                              v545 = v547;
                              v546 = v548;
                              v780 = v783 + 1626260806;
                              if ( v783 != -1626260806 )
                                break;
                              v347 = (__int64)v899;
                              v78 = v549;
                              v79 = (__int64)v550;
                              *(_BYTE *)(v899[6] + v899[8]) = 0;
                              *(_QWORD *)(v347 + 80) = *(_QWORD *)(v347 + 48);
                              v549 = v78;
                              v550 = (_QWORD *)v79;
                              if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                                v473 = 2105784994;
                              else
                                v473 = -1971958657;
                              v926 = v473;
                              v768 = y - 10;
                            }
                            v547 = v549;
                            v548 = v550;
                            v779 = v783 + 1560740578;
                            if ( v783 != -1560740578 )
                              break;
                            if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                              v449 = -1626260806;
                            else
                              v449 = -1971958657;
                            v926 = v449;
                            v769 = y - 10;
                          }
                          v543 = v545;
                          v544 = v546;
                          v778 = v783 + 1514363634;
                          if ( v783 != -1514363634 )
                            break;
                          v453 = *(_BYTE *)(v899[9] + v927) ^ v928;
                          v438 = v547;
                          v439 = (__int64)v548;
                          ++v928;
                          *(_BYTE *)(v899[6] + v927) = v453;
                          v547 = v438;
                          v548 = (_QWORD *)v439;
                          v926 = 1467572806;
                        }
                        v547 = v549;
                        v548 = v550;
                        v777 = v783 + 956736641;
                        if ( v783 != -956736641 )
                          break;
                        v220 = v899[8];
                        if ( v927 >= v220 )
                          v115 = -1560740578;
                        else
                          v115 = -1926322933;
                        v926 = v115;
                        v772 = v927 - v220;
                      }
                      v547 = v549;
                      v548 = v550;
                      v776 = v783 - 781406647;
                      if ( v783 != 781406647 )
                        break;
                      v926 = 1115010295;
                    }
                    v545 = v547;
                    v546 = v548;
                    v775 = v783 - 1115010295;
                    if ( v783 != 1115010295 )
                      break;
                    ++v927;
                    v926 = -956736641;
                  }
                  v547 = v549;
                  v548 = v550;
                  v774 = v783 - 1467572806;
                  if ( v783 != 1467572806 )
                    break;
                  v206 = *(_BYTE *)(v899[9] + v927);
                  v207 = v928++;
                  v164 = v545;
                  v165 = (__int64)v546;
                  *(_BYTE *)(v899[6] + v927) = v206 ^ v207;
                  v545 = v164;
                  v546 = (_QWORD *)v165;
                  if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                    v283 = 781406647;
                  else
                    v283 = -1514363634;
                  v926 = v283;
                  v770 = y - 10;
                }
                v539 = v541;
                v540 = v542;
                v773 = v783 - 2105784994;
                if ( v783 == 2105784994 )
                  break;
                v545 = v547;
                v546 = v548;
              }
              v916 = v899[10];
              v241 = v549;
              v242 = (__int64)v550;
              *(_DWORD *)v804 = 1718462077;
              v549 = v241;
              v550 = (_QWORD *)v242;
            }
            v541 = v543;
            v542 = v544;
            v799 = v803 + 1557788517;
            if ( v803 != -1557788517 )
              break;
            v549 = (__int64)v961;
            v405 = (__int64)v544;
            v915 = ((__int64 (__fastcall *)(__int64))qword_27C060)(v543);
            v543 = v915;
            v544 = (_QWORD *)v405;
            byte_27A009 = v915 != 0;
            v167 = y_96 - 10;
            if ( y_96 < 10 || ((x_95 * (x_95 - 1)) & 1) == 0 )
              v46 = -1927420796;
            else
              v46 = 1566120125;
            v74 = v545;
            v75 = (__int64)v546;
            *(_DWORD *)v804 = v46;
            v764 = v74;
            v763 = v167;
            v545 = v74;
            v546 = (_QWORD *)v75;
          }
          v547 = v549;
          v548 = v550;
          v798 = v803 + 654087227;
          if ( v803 != -654087227 )
            break;
          v100 = v549;
          v101 = (__int64)v550;
          *(_DWORD *)v804 = 1288081477;
          v549 = v100;
          v550 = (_QWORD *)v101;
        }
        v547 = v549;
        v548 = v550;
        v797 = v803 + 549143437;
        if ( v803 != -549143437 )
          break;
        v377 = y_96 - 10;
        if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
          v114 = -130988148;
        else
          v114 = 968419930;
        v351 = v547;
        v352 = (__int64)v548;
        *(_DWORD *)v804 = v114;
        v758 = v377;
        v547 = v351;
        v548 = (_QWORD *)v352;
      }
      v541 = v543;
      v542 = v544;
      v796 = v803 + 328142169;
      if ( v803 != -328142169 )
        break;
      v328 = v547;
      v329 = (__int64)v548;
      *(_DWORD *)v804 = 668289018;
      v547 = v328;
      v548 = (_QWORD *)v329;
    }
    v547 = v549;
    v548 = v550;
    v795 = v803 + 130988148;
    if ( v803 == -130988148 )
      break;
    v545 = v547;
    v546 = v548;
    v794 = v803 + 65597859;
    if ( v803 == -65597859 )
    {
      v49 = v545;
      v50 = (__int64)v546;
      *(_DWORD *)v804 = 1718462077;
      v545 = v49;
      v546 = (_QWORD *)v50;
    }
    else
    {
      v545 = v547;
      v546 = v548;
      v793 = v803 - 643763272;
      if ( v803 == 643763272 )
      {
        v549 = v916;
        v201 = (__int64)v546;
        v545 = ((__int64 (__fastcall *)(__int64))qword_27C0E8)(v545);
        v546 = (_QWORD *)v201;
        v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v917);
        v155 = v547;
        v156 = (__int64)v548;
        *(_DWORD *)v804 = 668289018;
        v760 = v155;
        v547 = v155;
        v548 = (_QWORD *)v156;
      }
      else
      {
        v543 = v545;
        v544 = v546;
        v792 = v803 - 668289018;
        if ( v803 == 668289018 )
        {
          v214 = y_96 - 10;
          if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
            v334 = -549143437;
          else
            v334 = 968419930;
          v318 = v547;
          v319 = (__int64)v548;
          *(_DWORD *)v804 = v334;
          v759 = v214;
          v547 = v318;
          v548 = (_QWORD *)v319;
        }
        else
        {
          v547 = v549;
          v548 = v550;
          v791 = v803 - 716289433;
          if ( v803 == 716289433 )
          {
            v503 = y_96 - 10;
            if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
              v83 = -1557788517;
            else
              v83 = 1566120125;
            v135 = v547;
            v136 = (__int64)v548;
            *(_DWORD *)v804 = v83;
            v765 = v503;
            v547 = v135;
            v548 = (_QWORD *)v136;
          }
          else
          {
            v547 = v549;
            v548 = v550;
            v790 = v803 - 968419930;
            if ( v803 == 968419930 )
            {
              v389 = v549;
              v390 = (__int64)v550;
              *(_DWORD *)v804 = -549143437;
              v549 = v389;
              v550 = (_QWORD *)v390;
            }
            else
            {
              v547 = v549;
              v548 = v550;
              v789 = v803 - 1172652338;
              if ( v803 == 1172652338 )
              {
                v17 = y_96 - 10;
                if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                  v108 = 1288081477;
                else
                  v108 = -654087227;
                v263 = v965;
                v264 = (__int64)v966;
                *(_DWORD *)v804 = v108;
                v762 = v17;
                v965 = v263;
                v966 = (__int64 (__fastcall *)(_QWORD, _QWORD))v264;
              }
              else
              {
                v547 = v549;
                v548 = v550;
                v788 = v803 - 1288081477;
                if ( v803 == 1288081477 )
                {
                  v29 = y_96 - 10;
                  if ( y_96 < 10 || (((_BYTE)x_95 * ((_BYTE)x_95 - 1)) & 1) == 0 )
                    v104 = -65597859;
                  else
                    v104 = -654087227;
                  v469 = v549;
                  v470 = (__int64)v550;
                  *(_DWORD *)v804 = v104;
                  v761 = v29;
                  v549 = v469;
                  v550 = (_QWORD *)v470;
                }
                else
                {
                  v545 = v547;
                  v546 = v548;
                  v787 = v803 - 1566120125;
                  if ( v803 == 1566120125 )
                  {
                    LODWORD(v549) = ((__int64 (__fastcall *)(_BYTE *))qword_27C060)(v961);
                    v915 = v549;
                    byte_27A009 = (_DWORD)v549 != 0;
                    v229 = (unsigned int)v549;
                    v230 = (__int64)v550;
                    *(_DWORD *)v804 = -1557788517;
                    v757 = v229;
                    v549 = v229;
                    v550 = (_QWORD *)v230;
                  }
                  else
                  {
                    v543 = v545;
                    v544 = v546;
                    v786 = v803 - 1718462077;
                    if ( v803 == 1718462077 )
                    {
                      v456 = (__int64)v548;
                      v457 = ((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))qword_27A238)(v917, v960, 1024LL);
                      v547 = (unsigned int)v457;
                      v548 = (_QWORD *)v456;
                      if ( v457 <= 0 )
                        v450 = 643763272;
                      else
                        v450 = -1860875866;
                      v393 = v547;
                      v394 = (__int64)v548;
                      *(_DWORD *)v804 = v450;
                      v767 = v393;
                      v547 = v393;
                      v548 = (_QWORD *)v394;
                    }
                    else
                    {
                      v547 = v549;
                      v548 = v550;
                      v785 = v803 - 1960510072;
                      if ( v803 == 1960510072 )
                      {
                        v73 = v921 - 1;
                        if ( v921 >= 1 )
                          v66 = -1706641337;
                        else
                          v66 = -328142169;
                        v91 = v547;
                        v92 = (__int64)v548;
                        *(_DWORD *)v804 = v66;
                        v784 = v73;
                        v547 = v91;
                        v548 = (_QWORD *)v92;
                      }
                      else
                      {
                        v965 = v967;
                        v966 = v968;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v545 = (__int64)&v547;
  v932 = 1024;
  v756 = &v547;
  v755 = &v551;
  v549 = ((__int64 (__fastcall *)(__int64))qword_27A208)(v549);
  v931 = v547;
  v137 = (__int64)v899;
  v13 = v549;
  v14 = (__int64)v550;
  v899[19] = (__int64)&unk_252A80;
  *(_QWORD *)(v137 + 144) = 15LL;
  v549 = v13;
  v550 = (_QWORD *)v14;
  v937 = 67;
  v345 = (__int64)v542;
  v541 = ((__int64 (__fastcall *)(__int64))qword_27C0F0)(*(_QWORD *)(v137 + 144) + 1LL);
  v542 = (_QWORD *)v345;
  v97 = v549;
  v98 = (__int64)v550;
  v899[16] = v549;
  v936 = 0;
  v549 = v97;
  v550 = (_QWORD *)v98;
  v935 = -956736641;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v754 = v935;
                      v753 = v935 + 1971958657;
                      if ( v935 != -1971958657 )
                        break;
                      v497 = v541;
                      v498 = (__int64)v542;
                      *(_BYTE *)(v899[16] + v899[18]) = 0;
                      v541 = v497;
                      v542 = (_QWORD *)v498;
                      v935 = -1626260806;
                    }
                    v547 = v549;
                    v548 = v550;
                    v752 = v754 + 1926322933;
                    if ( v754 != -1926322933 )
                      break;
                    if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                      v468 = 1467572806;
                    else
                      v468 = -1514363634;
                    v935 = v468;
                    v742 = y - 10;
                  }
                  v547 = v549;
                  v548 = v550;
                  v751 = v754 + 1626260806;
                  if ( v754 != -1626260806 )
                    break;
                  v233 = (__int64)v899;
                  v434 = v541;
                  v435 = (__int64)v542;
                  *(_BYTE *)(v899[16] + v899[18]) = 0;
                  v436 = *(_QWORD *)(v233 + 128);
                  v541 = v434;
                  v542 = (_QWORD *)v435;
                  v408 = v543;
                  v409 = (__int64)v544;
                  *(_QWORD *)(v233 + 160) = v436;
                  v543 = v408;
                  v544 = (_QWORD *)v409;
                  if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                    v177 = 2105784994;
                  else
                    v177 = -1971958657;
                  v935 = v177;
                  v739 = y - 10;
                }
                v547 = v549;
                v548 = v550;
                v750 = v754 + 1560740578;
                if ( v754 != -1560740578 )
                  break;
                if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
                  v388 = -1626260806;
                else
                  v388 = -1971958657;
                v935 = v388;
                v740 = y - 10;
              }
              v545 = v547;
              v546 = v548;
              v749 = v754 + 1514363634;
              if ( v754 != -1514363634 )
                break;
              v525 = *(_BYTE *)(v899[19] + v936) ^ v937;
              v227 = v547;
              v228 = (__int64)v548;
              ++v937;
              *(_BYTE *)(v899[16] + v936) = v525;
              v547 = v227;
              v548 = (_QWORD *)v228;
              v935 = 1467572806;
            }
            v545 = v547;
            v546 = v548;
            v748 = v754 + 956736641;
            if ( v754 != -956736641 )
              break;
            v221 = v899[18];
            if ( v936 >= v221 )
              v60 = -1560740578;
            else
              v60 = -1926322933;
            v935 = v60;
            v743 = v936 - v221;
          }
          v543 = v545;
          v544 = v546;
          v747 = v754 - 781406647;
          if ( v754 != 781406647 )
            break;
          v935 = 1115010295;
        }
        v545 = v547;
        v546 = v548;
        v746 = v754 - 1115010295;
        if ( v754 != 1115010295 )
          break;
        ++v936;
        v935 = -956736641;
      }
      v545 = v547;
      v546 = v548;
      v745 = v754 - 1467572806;
      if ( v754 != 1467572806 )
        break;
      v353 = *(_BYTE *)(v899[19] + v936);
      v354 = v937++;
      v235 = v549;
      v236 = (__int64)v550;
      *(_BYTE *)(v899[16] + v936) = v353 ^ v354;
      v549 = v235;
      v550 = (_QWORD *)v236;
      if ( y < 10 || ((x * (x - 1)) & 1) == 0 )
        v231 = 781406647;
      else
        v231 = -1514363634;
      v935 = v231;
      v741 = y - 10;
    }
    v541 = v543;
    v542 = v544;
    v744 = v754 - 2105784994;
    if ( v754 == 2105784994 )
      break;
    v547 = v549;
    v548 = v550;
  }
  v250 = v545;
  v251 = (__int64)v546;
  v252 = (__int64)v899;
  v899[12] = v899[20];
  v545 = v250;
  v546 = (_QWORD *)v251;
  v63 = *(const char **)(v252 + 96);
  v738 = v962;
  v549 = qword_27A228(v962, v63, v931);
  v281 = v899[12];
  v737 = v547;
  v547 = v281;
  free((void *)v549);
  v736 = 0;
  v930 = ((__int64 (__fastcall *)(__int64, _QWORD *))qword_27A1F8)(4294967196LL, v738);
  v933 = v930;
  v735 = &v549;
  v549 = 208211008LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    v344 = *(_DWORD *)v735 + 0x7F28678C;
                                    v734 = *(_DWORD *)v735;
                                    v733 = v344;
                                    if ( v344 )
                                      break;
                                    v340 = y_102 - 10;
                                    if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                                      v247 = 0x7C24B9F7;
                                    else
                                      v247 = 0xAECD846F;
                                    v384 = v549;
                                    v385 = (__int64)v550;
                                    *(_DWORD *)v735 = v247;
                                    v703 = v340;
                                    v549 = v384;
                                    v550 = (_QWORD *)v385;
                                  }
                                  v541 = v543;
                                  v542 = v544;
                                  v732 = v734 + 2016887473;
                                  if ( v734 != -2016887473 )
                                    break;
                                  v180 = y_102 - 10;
                                  if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                                    v183 = 1965306874;
                                  else
                                    v183 = -1874894432;
                                  v443 = v539;
                                  v444 = (__int64)v540;
                                  *(_DWORD *)v735 = v183;
                                  v706 = v180;
                                  v539 = v443;
                                  v540 = (_QWORD *)v444;
                                }
                                v541 = v543;
                                v542 = v544;
                                v731 = v734 + 1874894432;
                                if ( v734 != -1874894432 )
                                  break;
                                v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v930);
                                v522 = v543;
                                v523 = (__int64)v544;
                                *(_DWORD *)v735 = 1965306874;
                                v700 = v522;
                                v543 = v522;
                                v544 = (_QWORD *)v523;
                              }
                              v547 = v549;
                              v548 = v550;
                              v730 = v734 + 1819934032;
                              if ( v734 != -1819934032 )
                                break;
                              v208 = v934;
                              if ( v934 )
                                v161 = 519086274;
                              else
                                v161 = -2016887473;
                              v238 = v549;
                              v239 = (__int64)v550;
                              *(_DWORD *)v735 = v161;
                              v708 = v208;
                              v549 = v238;
                              v550 = (_QWORD *)v239;
                            }
                            v543 = v545;
                            v544 = v546;
                            v729 = v734 + 1362262929;
                            if ( v734 != -1362262929 )
                              break;
                            v454 = v547;
                            v455 = (__int64)v548;
                            *(_DWORD *)v735 = 2082781687;
                            v547 = v454;
                            v548 = (_QWORD *)v455;
                          }
                          v545 = v547;
                          v546 = v548;
                          v728 = v734 + 1105887335;
                          if ( v734 != -1105887335 )
                            break;
                          v152 = v547;
                          v153 = (__int64)v548;
                          *(_DWORD *)v735 = 575691789;
                          v547 = v152;
                          v548 = (_QWORD *)v153;
                        }
                        v543 = v545;
                        v544 = v546;
                        v727 = v734 + 317268620;
                        if ( v734 != -317268620 )
                          break;
                        v162 = y_102 - 10;
                        if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                          v187 = 1100811555;
                        else
                          v187 = 205396647;
                        v274 = v549;
                        v275 = (__int64)v550;
                        *(_DWORD *)v735 = v187;
                        v712 = v162;
                        v549 = v274;
                        v550 = (_QWORD *)v275;
                      }
                      v547 = v549;
                      v548 = v550;
                      v726 = v734 + 220584799;
                      if ( v734 != -220584799 )
                        break;
                      LODWORD(v549) = ((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))qword_27A238)(
                                        v930,
                                        v960,
                                        1024LL);
                      v934 = (int)v549 > 0;
                      v549 = (unsigned int)v549;
                      v306 = y_102 - 10;
                      if ( y_102 < 10 || ((x_101 * (x_101 - 1)) & 1) == 0 )
                        v527 = -1819934032;
                      else
                        v527 = 24332143;
                      v188 = v547;
                      v189 = (__int64)v548;
                      *(_DWORD *)v735 = v527;
                      v710 = v188;
                      v709 = v306;
                      v547 = v188;
                      v548 = (_QWORD *)v189;
                    }
                    v547 = v549;
                    v548 = v550;
                    v725 = v734 - 24332143;
                    if ( v734 != 24332143 )
                      break;
                    v415 = ((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))qword_27A238)(v930, v960, 1024LL);
                    v427 = (__int64)v550;
                    *(_DWORD *)v735 = -220584799;
                    v701 = v415;
                    v549 = v415;
                    v550 = (_QWORD *)v427;
                  }
                  v545 = v547;
                  v546 = v548;
                  v724 = v734 - 114789951;
                  if ( v734 != 114789951 )
                    break;
                  v330 = y_102 - 10;
                  if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
                    v248 = -317268620;
                  else
                    v248 = 205396647;
                  v255 = v545;
                  v256 = (__int64)v546;
                  *(_DWORD *)v735 = v248;
                  v713 = v330;
                  v545 = v255;
                  v546 = (_QWORD *)v256;
                }
                v547 = v549;
                v548 = v550;
                v723 = v734 - 205396647;
                if ( v734 != 205396647 )
                  break;
                v295 = v549;
                v296 = (__int64)v550;
                *(_DWORD *)v735 = -317268620;
                v549 = v295;
                v550 = (_QWORD *)v296;
              }
              v547 = v549;
              v548 = v550;
              v722 = v734 - 208211008;
              if ( v734 != 208211008 )
                break;
              v272 = v933 - 1;
              if ( v933 >= 1 )
                v311 = -1105887335;
              else
                v311 = 114789951;
              v509 = v549;
              v510 = (__int64)v550;
              *(_DWORD *)v735 = v311;
              v714 = v272;
              v549 = v509;
              v550 = (_QWORD *)v510;
            }
            v547 = v549;
            v548 = v550;
            v721 = v734 - 519086274;
            if ( v734 != 519086274 )
              break;
            v423 = ((__int64 (__fastcall *)(_BYTE *, const char *))qword_27C068)(v960, "ctrip.android.view");
            byte_27BE70 = v423 != 0;
            v86 = (__int64)v550;
            *(_DWORD *)v735 = 575691789;
            v707 = v423;
            v549 = v423;
            v550 = (_QWORD *)v86;
          }
          v543 = v545;
          v544 = v546;
          v720 = v734 - 575691789;
          if ( v734 != 575691789 )
            break;
          v471 = y_102 - 10;
          if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
            v464 = -220584799;
          else
            v464 = 24332143;
          v126 = v549;
          v127 = (__int64)v550;
          *(_DWORD *)v735 = v464;
          v711 = v471;
          v549 = v126;
          v550 = (_QWORD *)v127;
        }
        v545 = v547;
        v546 = v548;
        v719 = v734 - 1100811555;
        if ( v734 != 1100811555 )
          break;
        v196 = v547;
        v197 = (__int64)v548;
        *(_DWORD *)v735 = -2133354380;
        v547 = v196;
        v548 = (_QWORD *)v197;
      }
      v547 = v549;
      v548 = v550;
      v718 = v734 - 1863640352;
      if ( v734 != 1863640352 )
        break;
      v322 = v547;
      v323 = (__int64)v548;
      *(_DWORD *)v735 = -2133354380;
      v547 = v322;
      v548 = (_QWORD *)v323;
    }
    v539 = v541;
    v540 = v542;
    v717 = v734 - 1890661668;
    if ( v734 == 1890661668 )
      break;
    v547 = v549;
    v548 = v550;
    v716 = v734 - 1965306874;
    if ( v734 == 1965306874 )
    {
      v549 = ((__int64 (__fastcall *)(_QWORD))qword_27C138)(v930);
      v477 = y_102 - 10;
      if ( y_102 < 10 || ((x_101 * (x_101 - 1)) & 1) == 0 )
        v143 = 1863640352;
      else
        v143 = -1874894432;
      v279 = v547;
      v280 = (__int64)v548;
      *(_DWORD *)v735 = v143;
      v705 = v279;
      v704 = v477;
      v547 = v279;
      v548 = (_QWORD *)v280;
    }
    else
    {
      v541 = v543;
      v542 = v544;
      v715 = v734 - 2082781687;
      if ( v734 == 2082781687 )
      {
        v370 = y_102 - 10;
        if ( y_102 < 10 || (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) == 0 )
          v142 = 1890661668;
        else
          v142 = -1362262929;
        v362 = v541;
        v363 = (__int64)v542;
        *(_DWORD *)v735 = v142;
        v702 = v370;
        v541 = v362;
        v542 = (_QWORD *)v363;
      }
      else
      {
        v543 = v545;
        v544 = v546;
      }
    }
  }
  v547 = (__int64)v755;
  v929 = byte_27A009;
  v699 = &v549;
  while ( 1 )
  {
    v55 = *(_DWORD *)v699 + 1674627080;
    v698 = *(_DWORD *)v699;
    v697 = v55;
    if ( !v55 )
      break;
    v545 = v547;
    v546 = v548;
    v696 = v698 + 968773856;
    if ( v698 == -968773856 )
    {
      sub_BFBC();
      v549 = ((__int64 (__fastcall *)(__int64 *, void *, void *))sub_4C1DC)(v903, &unk_27A1D8, &unk_27A1E0);
      v959 = 0;
      v545 = 0LL;
      v203 = (__int64)v548;
      v899[49] = v547;
      v547 = qword_27A2A0;
      v548 = (_QWORD *)v203;
      v693 = v549;
      v446 = (void (__fastcall *)(_BYTE *, int *))v549;
      v549 = (__int64)v958;
      v446(v958, &v959);
      v476 = *(_QWORD **)(*v903 + 1336);
      v549 = (__int64)v903;
      v499 = v899[49];
      v692 = v476;
      v500 = v499;
      v548 = (_QWORD *)v499;
      v355 = v692;
      v901 = ((__int64 (__fastcall *)(__int64 *, __int64))v692)(v903, v500);
      v549 = (__int64)v899;
      v550 = v355;
      v372 = v899[49];
      v906 = v372 != 0;
      if ( y_80 < 10 || (((_BYTE)x_79 * ((_BYTE)x_79 - 1)) & 1) == 0 )
        v200 = 272778080;
      else
        v200 = -2141554670;
      v900 = v200;
      v691 = v372;
      v690 = y_80 - 10;
      goto LABEL_685;
    }
    v545 = v547;
    v546 = v548;
    v695 = v698 - 1135950202;
    if ( v698 == 1135950202 )
    {
      v212 = v929 & 1;
      if ( (v929 & 1) != 0 )
        v505 = -1674627080;
      else
        v505 = -968773856;
      v460 = v545;
      v461 = (__int64)v546;
      *(_DWORD *)v699 = v505;
      v694 = v212;
      v545 = v460;
      v546 = (_QWORD *)v461;
    }
    else
    {
      v543 = v545;
      v544 = v546;
    }
  }
}
