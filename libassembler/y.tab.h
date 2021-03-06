
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOCK = 258,
     REP = 259,
     REPE = 260,
     REPZ = 261,
     REPNE = 262,
     REPNZ = 263,
     AAA = 264,
     AAD = 265,
     AAM = 266,
     AAS = 267,
     ADC = 268,
     ADD = 269,
     ADDPD = 270,
     ADDPS = 271,
     ADDSD = 272,
     ADDSS = 273,
     ADDSUBPD = 274,
     ADDSUBPS = 275,
     AESDEC = 276,
     AESDECLAST = 277,
     AESENC = 278,
     AESENCLAST = 279,
     AESIMC = 280,
     AESKEYGENASSIST = 281,
     AND = 282,
     ANDPD = 283,
     ANDPS = 284,
     ANDNPD = 285,
     ANDNPS = 286,
     ARPL = 287,
     BLENDPD = 288,
     BLENDPS = 289,
     BLENDVPD = 290,
     BLENDVPS = 291,
     BOUND = 292,
     BSF = 293,
     BSR = 294,
     BSWAP = 295,
     BT = 296,
     BTC = 297,
     BTR = 298,
     BTS = 299,
     CALL = 300,
     CBW = 301,
     CWDE = 302,
     CDQE = 303,
     CLC = 304,
     CLD = 305,
     CLFLUSH = 306,
     CLI = 307,
     CLTS = 308,
     CMC = 309,
     CMOVA = 310,
     CMOVAE = 311,
     CMOVB = 312,
     CMOVBE = 313,
     CMOVC = 314,
     CMOVE = 315,
     CMOVG = 316,
     CMOVGE = 317,
     CMOVL = 318,
     CMOVLE = 319,
     CMOVNA = 320,
     CMOVNAE = 321,
     CMOVNB = 322,
     CMOVNBE = 323,
     CMOVNC = 324,
     CMOVNE = 325,
     CMOVNG = 326,
     CMOVNGE = 327,
     CMOVNL = 328,
     CMOVNLE = 329,
     CMOVNO = 330,
     CMOVNP = 331,
     CMOVNS = 332,
     CMOVNZ = 333,
     CMOVO = 334,
     CMOVP = 335,
     CMOVPE = 336,
     CMOVPO = 337,
     CMOVS = 338,
     CMOVZ = 339,
     CMP = 340,
     CMPPD = 341,
     CMPPS = 342,
     CMPSB = 343,
     CMPSW = 344,
     CMPSD = 345,
     CMPSQ = 346,
     CMPSDx = 347,
     CMPSS = 348,
     CMPXCHG = 349,
     CMPXCHG8B = 350,
     COMISD = 351,
     COMISS = 352,
     CPUID = 353,
     CRC32 = 354,
     CVTDQ2PD = 355,
     CVTDQ2PS = 356,
     CVTPD2DQ = 357,
     CVTPD2PI = 358,
     CVTPD2PS = 359,
     CVTPI2PD = 360,
     CVTPI2PS = 361,
     CVTPS2DQ = 362,
     CVTPS2PD = 363,
     CVTPS2PI = 364,
     CVTSD2SI = 365,
     CVTSD2SS = 366,
     CVTSI2SD = 367,
     CVTSI2SS = 368,
     CVTSS2SD = 369,
     CVTSS2SI = 370,
     CVTTPD2DQ = 371,
     CVTTPD2PI = 372,
     CVTTPS2DQ = 373,
     CVTTPS2PI = 374,
     CVTTSD2SI = 375,
     CVTTSS2SI = 376,
     CWD = 377,
     CDQ = 378,
     CQO = 379,
     DAA = 380,
     DAS = 381,
     DEC = 382,
     DIV = 383,
     DIVPD = 384,
     DIVPS = 385,
     DIVSD = 386,
     DIVSS = 387,
     DPPD = 388,
     DPPS = 389,
     EMMS = 390,
     ENTER = 391,
     EXTRACTPS = 392,
     F2XM1 = 393,
     FABS = 394,
     FADD = 395,
     FADDP = 396,
     FIADD = 397,
     FBLD = 398,
     FBSTP = 399,
     FCHS = 400,
     FCLEX = 401,
     FNCLEX = 402,
     FCMOVB = 403,
     FCMOVE = 404,
     FCMOVBE = 405,
     FCMOVU = 406,
     FCMOVNB = 407,
     FCMOVNE = 408,
     FCMOVNBE = 409,
     FCMOVNU = 410,
     FCOMI = 411,
     FCOMIP = 412,
     FCOS = 413,
     FDECSTP = 414,
     FDIV = 415,
     FDIVP = 416,
     FIDIV = 417,
     FDIVR = 418,
     FDIVRP = 419,
     FIDIVR = 420,
     FFREE = 421,
     FICOM = 422,
     FICOMP = 423,
     FILD = 424,
     FINCSTP = 425,
     FINIT = 426,
     FNINIT = 427,
     FIST = 428,
     FISTP = 429,
     FISTTP = 430,
     FLD = 431,
     FLD1 = 432,
     FLDL2T = 433,
     FLDL2E = 434,
     FLDPI = 435,
     FLDLG2 = 436,
     FLDLN2 = 437,
     FLDZ = 438,
     FLDCW = 439,
     FLDENV = 440,
     FMUL = 441,
     FMULP = 442,
     FIMUL = 443,
     FNOP = 444,
     FPATAN = 445,
     FPREM = 446,
     FPREM1 = 447,
     FPTAN = 448,
     FRNDINT = 449,
     FRSTOR = 450,
     FSAVE = 451,
     FNSAVE = 452,
     FSCALE = 453,
     FSIN = 454,
     FSINCOS = 455,
     FSQRT = 456,
     FST = 457,
     FSTP = 458,
     FSTCW = 459,
     FNSTCW = 460,
     FSTENV = 461,
     FNSTENV = 462,
     FSTSW = 463,
     FNSTSW = 464,
     FSUB = 465,
     FSUBP = 466,
     FISUB = 467,
     FSUBR = 468,
     FSUBRP = 469,
     FISUBR = 470,
     FTST = 471,
     FUCOM = 472,
     FUCOMP = 473,
     FUCOMPP = 474,
     FXAM = 475,
     FXCH = 476,
     FXRSTOR = 477,
     FXSAVE = 478,
     FXTRACT = 479,
     FYL2X = 480,
     FYL2XP1 = 481,
     HADDPD = 482,
     HADDPS = 483,
     HLT = 484,
     HSUBPD = 485,
     HSUBPS = 486,
     IDIV = 487,
     IMUL = 488,
     IN = 489,
     INC = 490,
     INS = 491,
     INSB = 492,
     INSW = 493,
     INSD = 494,
     INSERTPS = 495,
     INT = 496,
     INT3 = 497,
     INTO = 498,
     INVD = 499,
     INVLPG = 500,
     IRET = 501,
     IRETD = 502,
     JA = 503,
     JAE = 504,
     JB = 505,
     JBE = 506,
     JC = 507,
     JCXZ = 508,
     JECXZ = 509,
     JRCXZ = 510,
     JE = 511,
     JG = 512,
     JGE = 513,
     JL = 514,
     JLE = 515,
     JNA = 516,
     JNAE = 517,
     JNB = 518,
     JNBE = 519,
     JNC = 520,
     JNE = 521,
     JNG = 522,
     JNGE = 523,
     JNL = 524,
     JNLE = 525,
     JNO = 526,
     JNP = 527,
     JNS = 528,
     JNZ = 529,
     JO = 530,
     JP = 531,
     JPE = 532,
     JPO = 533,
     JS = 534,
     JZ = 535,
     JMP = 536,
     LAHF = 537,
     LAR = 538,
     LDDQU = 539,
     LDMXCSR = 540,
     LDS = 541,
     LES = 542,
     LFS = 543,
     LGS = 544,
     LSS = 545,
     LEA = 546,
     LEAVE = 547,
     LFENCE = 548,
     LGDT = 549,
     LIDT = 550,
     LLDT = 551,
     LMSW = 552,
     LODSB = 553,
     LODSW = 554,
     LODSD = 555,
     LODSQ = 556,
     LOOP = 557,
     LOOPE = 558,
     LOOPNE = 559,
     LSL = 560,
     LTR = 561,
     MASKMOVDQU = 562,
     MASKMOVQ = 563,
     MAXPD = 564,
     MAXPS = 565,
     MAXSD = 566,
     MAXSS = 567,
     MFENCE = 568,
     MINPD = 569,
     MINPS = 570,
     MINSD = 571,
     MINSS = 572,
     MONITOR = 573,
     MOV = 574,
     MOVAPD = 575,
     MOVAPS = 576,
     MOVBE = 577,
     MOVD = 578,
     MOVQ = 579,
     MOVDDUP = 580,
     MOVDQA = 581,
     MOVDQU = 582,
     MOVDQ2Q = 583,
     MOVHLPS = 584,
     MOVHPD = 585,
     MOVHPS = 586,
     MOVLHPS = 587,
     MOVLPD = 588,
     MOVLPS = 589,
     MOVMSKPD = 590,
     MOVMSKPS = 591,
     MOVNTDQA = 592,
     MOVNTDQ = 593,
     MOVNTI = 594,
     MOVNTPD = 595,
     MOVNTPS = 596,
     MOVNTQ = 597,
     MOVQx = 598,
     MOVQ2DQ = 599,
     MOVSB = 600,
     MOVSW = 601,
     MOVSD = 602,
     MOVSQ = 603,
     MOVSDx = 604,
     MOVSHDUP = 605,
     MOVSLDUP = 606,
     MOVSS = 607,
     MOVSX = 608,
     MOVSXD = 609,
     MOVUPD = 610,
     MOVUPS = 611,
     MOVZX = 612,
     MPSADBW = 613,
     MUL = 614,
     MULPD = 615,
     MULPS = 616,
     MULSD = 617,
     MULSS = 618,
     MWAIT = 619,
     NEG = 620,
     NOP = 621,
     NOT = 622,
     OR = 623,
     ORPD = 624,
     ORPS = 625,
     OUT = 626,
     OUTS = 627,
     OUTSB = 628,
     OUTSW = 629,
     OUTSD = 630,
     PABSB = 631,
     PABSW = 632,
     PABSD = 633,
     PACKSSWB = 634,
     PACKSSDW = 635,
     PACKUSDW = 636,
     PACKUSWB = 637,
     PADDB = 638,
     PADDW = 639,
     PADDD = 640,
     PADDQ = 641,
     PADDSB = 642,
     PADDSW = 643,
     PADDUSB = 644,
     PADDUSW = 645,
     PALIGNR = 646,
     PAND = 647,
     PANDN = 648,
     PAUSE = 649,
     PAVGB = 650,
     PAVGW = 651,
     PBLENDVB = 652,
     PBLENDW = 653,
     PCLMULQDQ = 654,
     PCMPEQB = 655,
     PCMPEQW = 656,
     PCMPEQD = 657,
     PCMPEQQ = 658,
     PCMPESTRI = 659,
     PCMPESTRM = 660,
     PCMPGTB = 661,
     PCMPGTW = 662,
     PCMPGTD = 663,
     PCMPGTQ = 664,
     PCMPISTRI = 665,
     PCMPISTRM = 666,
     PEXTRB = 667,
     PEXTRD = 668,
     PEXTRQ = 669,
     PEXTRW = 670,
     PHADDW = 671,
     PHADDD = 672,
     PHADDSW = 673,
     PHMINPOSUW = 674,
     PHSUBW = 675,
     PHSUBD = 676,
     PHSUBSW = 677,
     PINSRB = 678,
     PINSRD = 679,
     PINSRQ = 680,
     PINSRW = 681,
     PMADDUBSW = 682,
     PMADDWD = 683,
     PMAXSB = 684,
     PMAXSD = 685,
     PMAXSW = 686,
     PMAXUB = 687,
     PMAXUD = 688,
     PMAXUW = 689,
     PMINSB = 690,
     PMINSD = 691,
     PMINSW = 692,
     PMINUB = 693,
     PMINUD = 694,
     PMINUW = 695,
     PMOVMSKB = 696,
     PMOVSX = 697,
     PMOVZX = 698,
     PMULDQ = 699,
     PMULHRSW = 700,
     PMULHUW = 701,
     PMULHW = 702,
     PMULLD = 703,
     PMULLW = 704,
     PMULUDQ = 705,
     POP = 706,
     POPA = 707,
     POPAD = 708,
     POPCNT = 709,
     POPF = 710,
     POPFD = 711,
     POPFQ = 712,
     POR = 713,
     PREFETCHT0 = 714,
     PREFETCHT1 = 715,
     PREFETCHT2 = 716,
     PREFETCHNTA = 717,
     PSADBW = 718,
     PSHUFB = 719,
     PSHUFD = 720,
     PSHUFHW = 721,
     PSHUFLW = 722,
     PSHUFW = 723,
     PSIGNB = 724,
     PSIGNW = 725,
     PSIGND = 726,
     PSLLDQ = 727,
     PSLLW = 728,
     PSLLD = 729,
     PSLLQ = 730,
     PSRAW = 731,
     PSRAD = 732,
     PSRLDQ = 733,
     PSRLW = 734,
     PSRLD = 735,
     PSRLQ = 736,
     PSUBB = 737,
     PSUBW = 738,
     PSUBD = 739,
     PSUBQ = 740,
     PSUBSB = 741,
     PSUBSW = 742,
     PSUBUSB = 743,
     PSUBUSW = 744,
     PTEST = 745,
     PUNPCKHBW = 746,
     PUNPCKHWD = 747,
     PUNPCKHDQ = 748,
     PUNPCKHQDQ = 749,
     PUNPCKLBW = 750,
     PUNPCKLWD = 751,
     PUNPCKLDQ = 752,
     PUNPCKLQDQ = 753,
     PUSH = 754,
     PUSHA = 755,
     PUSHAD = 756,
     PUSHF = 757,
     PUSHFD = 758,
     PXOR = 759,
     RCL = 760,
     RCR = 761,
     ROL = 762,
     ROR = 763,
     RCPPS = 764,
     RCPSS = 765,
     RDMSR = 766,
     RDPMC = 767,
     RDTSC = 768,
     RDTSCP = 769,
     RET = 770,
     RETN = 771,
     ROUNDPD = 772,
     ROUNDPS = 773,
     ROUNDSD = 774,
     ROUNDSS = 775,
     RSM = 776,
     RSQRTPS = 777,
     RSQRTSS = 778,
     SAHF = 779,
     SAL = 780,
     SAR = 781,
     SHL = 782,
     SHR = 783,
     SBB = 784,
     SCASB = 785,
     SCASW = 786,
     SCASD = 787,
     SETA = 788,
     SETAE = 789,
     SETB = 790,
     SETBE = 791,
     SETC = 792,
     SETE = 793,
     SETG = 794,
     SETGE = 795,
     SETL = 796,
     SETLE = 797,
     SETNA = 798,
     SETNAE = 799,
     SETNB = 800,
     SETNBE = 801,
     SETNC = 802,
     SETNE = 803,
     SETNG = 804,
     SETNGE = 805,
     SETNL = 806,
     SETNLE = 807,
     SETNO = 808,
     SETNP = 809,
     SETNS = 810,
     SETNZ = 811,
     SETO = 812,
     SETP = 813,
     SETPE = 814,
     SETPO = 815,
     SETS = 816,
     SETZ = 817,
     SFENCE = 818,
     SGDT = 819,
     SHLD = 820,
     SHRD = 821,
     SHUFPD = 822,
     SHUFPS = 823,
     SIDT = 824,
     SLDT = 825,
     SMSW = 826,
     SQRTPS = 827,
     SQRTSD = 828,
     SQRTSS = 829,
     STC = 830,
     STD = 831,
     STI = 832,
     STMXCSR = 833,
     STOSB = 834,
     STOSW = 835,
     STOSD = 836,
     STOSQ = 837,
     STR = 838,
     SUB = 839,
     SUBPD = 840,
     SUBPS = 841,
     SUBSD = 842,
     SUBSS = 843,
     SWAPGS = 844,
     SYSCALL = 845,
     SYSENTER = 846,
     SYSEXIT = 847,
     SYSRET = 848,
     TEST = 849,
     UCOMISD = 850,
     UCOMISS = 851,
     UD2 = 852,
     UNPCKHPD = 853,
     UNPCKHPS = 854,
     UNPCKLPD = 855,
     UNPCKLPS = 856,
     VERR = 857,
     VERW = 858,
     WAIT = 859,
     FWAIT = 860,
     WBINVD = 861,
     WRMSR = 862,
     XADD = 863,
     XCHG = 864,
     XGETBV = 865,
     XLAT = 866,
     XLATB = 867,
     XOR = 868,
     XORPD = 869,
     XORPS = 870,
     XRSTOR = 871,
     XSAVE = 872,
     XSETBV = 873,
     INVEPT = 874,
     INVVPID = 875,
     VMCALL = 876,
     VMCLEAR = 877,
     VMLAUNCH = 878,
     VMPTRLD = 879,
     VMPTRST = 880,
     VMREAD = 881,
     VMRESUME = 882,
     VMWRITE = 883,
     VMXOFF = 884,
     VMXON = 885,
     R_AL = 886,
     R_CL = 887,
     R_DL = 888,
     R_BL = 889,
     R_AH = 890,
     R_CH = 891,
     R_DH = 892,
     R_BH = 893,
     R_AX = 894,
     R_CX = 895,
     R_DX = 896,
     R_BX = 897,
     R_SP = 898,
     R_BP = 899,
     R_SI = 900,
     R_DI = 901,
     R_EAX = 902,
     R_ECX = 903,
     R_EDX = 904,
     R_EBX = 905,
     R_ESP = 906,
     R_EBP = 907,
     R_ESI = 908,
     R_EDI = 909,
     R_CR0 = 910,
     R_CR1 = 911,
     R_CR2 = 912,
     R_CR3 = 913,
     R_CR4 = 914,
     R_CR5 = 915,
     R_CR6 = 916,
     R_CR7 = 917,
     R_DR0 = 918,
     R_DR1 = 919,
     R_DR2 = 920,
     R_DR3 = 921,
     R_DR4 = 922,
     R_DR5 = 923,
     R_DR6 = 924,
     R_DR7 = 925,
     R_MM0 = 926,
     R_MM1 = 927,
     R_MM2 = 928,
     R_MM3 = 929,
     R_MM4 = 930,
     R_MM5 = 931,
     R_MM6 = 932,
     R_MM7 = 933,
     R_ST0 = 934,
     R_ST1 = 935,
     R_ST2 = 936,
     R_ST3 = 937,
     R_ST4 = 938,
     R_ST5 = 939,
     R_ST6 = 940,
     R_ST7 = 941,
     R_XMM0 = 942,
     R_XMM1 = 943,
     R_XMM2 = 944,
     R_XMM3 = 945,
     R_XMM4 = 946,
     R_XMM5 = 947,
     R_XMM6 = 948,
     R_XMM7 = 949,
     SEG_ES = 950,
     SEG_CS = 951,
     SEG_SS = 952,
     SEG_DS = 953,
     SEG_FS = 954,
     SEG_GS = 955,
     OP_REG = 956,
     OP_MEM = 957,
     OP_IMM = 958,
     BYTE_PTR = 959,
     WORD_PTR = 960,
     DWORD_PTR = 961,
     QWORD_PTR = 962,
     TWORD_PTR = 963,
     SCALE_1 = 964,
     SCALE_2 = 965,
     SCALE_4 = 966,
     SCALE_8 = 967,
     PLUSSIGN = 968,
     SUBSIGN = 969,
     ADDR_LAB = 970,
     DISPLACEMENT8 = 971,
     DISPLACEMENT32 = 972,
     IMMEDIATE8 = 973,
     IMMEDIATE16 = 974,
     IMMEDIATE32 = 975,
     LINESTART = 976,
     COLON = 977,
     COMMA = 978,
     MEMEND = 979,
     LINEND = 980,
     ERROR = 981,
     END = 982,
     NONE = 983
   };
#endif
/* Tokens.  */
#define LOCK 258
#define REP 259
#define REPE 260
#define REPZ 261
#define REPNE 262
#define REPNZ 263
#define AAA 264
#define AAD 265
#define AAM 266
#define AAS 267
#define ADC 268
#define ADD 269
#define ADDPD 270
#define ADDPS 271
#define ADDSD 272
#define ADDSS 273
#define ADDSUBPD 274
#define ADDSUBPS 275
#define AESDEC 276
#define AESDECLAST 277
#define AESENC 278
#define AESENCLAST 279
#define AESIMC 280
#define AESKEYGENASSIST 281
#define AND 282
#define ANDPD 283
#define ANDPS 284
#define ANDNPD 285
#define ANDNPS 286
#define ARPL 287
#define BLENDPD 288
#define BLENDPS 289
#define BLENDVPD 290
#define BLENDVPS 291
#define BOUND 292
#define BSF 293
#define BSR 294
#define BSWAP 295
#define BT 296
#define BTC 297
#define BTR 298
#define BTS 299
#define CALL 300
#define CBW 301
#define CWDE 302
#define CDQE 303
#define CLC 304
#define CLD 305
#define CLFLUSH 306
#define CLI 307
#define CLTS 308
#define CMC 309
#define CMOVA 310
#define CMOVAE 311
#define CMOVB 312
#define CMOVBE 313
#define CMOVC 314
#define CMOVE 315
#define CMOVG 316
#define CMOVGE 317
#define CMOVL 318
#define CMOVLE 319
#define CMOVNA 320
#define CMOVNAE 321
#define CMOVNB 322
#define CMOVNBE 323
#define CMOVNC 324
#define CMOVNE 325
#define CMOVNG 326
#define CMOVNGE 327
#define CMOVNL 328
#define CMOVNLE 329
#define CMOVNO 330
#define CMOVNP 331
#define CMOVNS 332
#define CMOVNZ 333
#define CMOVO 334
#define CMOVP 335
#define CMOVPE 336
#define CMOVPO 337
#define CMOVS 338
#define CMOVZ 339
#define CMP 340
#define CMPPD 341
#define CMPPS 342
#define CMPSB 343
#define CMPSW 344
#define CMPSD 345
#define CMPSQ 346
#define CMPSDx 347
#define CMPSS 348
#define CMPXCHG 349
#define CMPXCHG8B 350
#define COMISD 351
#define COMISS 352
#define CPUID 353
#define CRC32 354
#define CVTDQ2PD 355
#define CVTDQ2PS 356
#define CVTPD2DQ 357
#define CVTPD2PI 358
#define CVTPD2PS 359
#define CVTPI2PD 360
#define CVTPI2PS 361
#define CVTPS2DQ 362
#define CVTPS2PD 363
#define CVTPS2PI 364
#define CVTSD2SI 365
#define CVTSD2SS 366
#define CVTSI2SD 367
#define CVTSI2SS 368
#define CVTSS2SD 369
#define CVTSS2SI 370
#define CVTTPD2DQ 371
#define CVTTPD2PI 372
#define CVTTPS2DQ 373
#define CVTTPS2PI 374
#define CVTTSD2SI 375
#define CVTTSS2SI 376
#define CWD 377
#define CDQ 378
#define CQO 379
#define DAA 380
#define DAS 381
#define DEC 382
#define DIV 383
#define DIVPD 384
#define DIVPS 385
#define DIVSD 386
#define DIVSS 387
#define DPPD 388
#define DPPS 389
#define EMMS 390
#define ENTER 391
#define EXTRACTPS 392
#define F2XM1 393
#define FABS 394
#define FADD 395
#define FADDP 396
#define FIADD 397
#define FBLD 398
#define FBSTP 399
#define FCHS 400
#define FCLEX 401
#define FNCLEX 402
#define FCMOVB 403
#define FCMOVE 404
#define FCMOVBE 405
#define FCMOVU 406
#define FCMOVNB 407
#define FCMOVNE 408
#define FCMOVNBE 409
#define FCMOVNU 410
#define FCOMI 411
#define FCOMIP 412
#define FCOS 413
#define FDECSTP 414
#define FDIV 415
#define FDIVP 416
#define FIDIV 417
#define FDIVR 418
#define FDIVRP 419
#define FIDIVR 420
#define FFREE 421
#define FICOM 422
#define FICOMP 423
#define FILD 424
#define FINCSTP 425
#define FINIT 426
#define FNINIT 427
#define FIST 428
#define FISTP 429
#define FISTTP 430
#define FLD 431
#define FLD1 432
#define FLDL2T 433
#define FLDL2E 434
#define FLDPI 435
#define FLDLG2 436
#define FLDLN2 437
#define FLDZ 438
#define FLDCW 439
#define FLDENV 440
#define FMUL 441
#define FMULP 442
#define FIMUL 443
#define FNOP 444
#define FPATAN 445
#define FPREM 446
#define FPREM1 447
#define FPTAN 448
#define FRNDINT 449
#define FRSTOR 450
#define FSAVE 451
#define FNSAVE 452
#define FSCALE 453
#define FSIN 454
#define FSINCOS 455
#define FSQRT 456
#define FST 457
#define FSTP 458
#define FSTCW 459
#define FNSTCW 460
#define FSTENV 461
#define FNSTENV 462
#define FSTSW 463
#define FNSTSW 464
#define FSUB 465
#define FSUBP 466
#define FISUB 467
#define FSUBR 468
#define FSUBRP 469
#define FISUBR 470
#define FTST 471
#define FUCOM 472
#define FUCOMP 473
#define FUCOMPP 474
#define FXAM 475
#define FXCH 476
#define FXRSTOR 477
#define FXSAVE 478
#define FXTRACT 479
#define FYL2X 480
#define FYL2XP1 481
#define HADDPD 482
#define HADDPS 483
#define HLT 484
#define HSUBPD 485
#define HSUBPS 486
#define IDIV 487
#define IMUL 488
#define IN 489
#define INC 490
#define INS 491
#define INSB 492
#define INSW 493
#define INSD 494
#define INSERTPS 495
#define INT 496
#define INT3 497
#define INTO 498
#define INVD 499
#define INVLPG 500
#define IRET 501
#define IRETD 502
#define JA 503
#define JAE 504
#define JB 505
#define JBE 506
#define JC 507
#define JCXZ 508
#define JECXZ 509
#define JRCXZ 510
#define JE 511
#define JG 512
#define JGE 513
#define JL 514
#define JLE 515
#define JNA 516
#define JNAE 517
#define JNB 518
#define JNBE 519
#define JNC 520
#define JNE 521
#define JNG 522
#define JNGE 523
#define JNL 524
#define JNLE 525
#define JNO 526
#define JNP 527
#define JNS 528
#define JNZ 529
#define JO 530
#define JP 531
#define JPE 532
#define JPO 533
#define JS 534
#define JZ 535
#define JMP 536
#define LAHF 537
#define LAR 538
#define LDDQU 539
#define LDMXCSR 540
#define LDS 541
#define LES 542
#define LFS 543
#define LGS 544
#define LSS 545
#define LEA 546
#define LEAVE 547
#define LFENCE 548
#define LGDT 549
#define LIDT 550
#define LLDT 551
#define LMSW 552
#define LODSB 553
#define LODSW 554
#define LODSD 555
#define LODSQ 556
#define LOOP 557
#define LOOPE 558
#define LOOPNE 559
#define LSL 560
#define LTR 561
#define MASKMOVDQU 562
#define MASKMOVQ 563
#define MAXPD 564
#define MAXPS 565
#define MAXSD 566
#define MAXSS 567
#define MFENCE 568
#define MINPD 569
#define MINPS 570
#define MINSD 571
#define MINSS 572
#define MONITOR 573
#define MOV 574
#define MOVAPD 575
#define MOVAPS 576
#define MOVBE 577
#define MOVD 578
#define MOVQ 579
#define MOVDDUP 580
#define MOVDQA 581
#define MOVDQU 582
#define MOVDQ2Q 583
#define MOVHLPS 584
#define MOVHPD 585
#define MOVHPS 586
#define MOVLHPS 587
#define MOVLPD 588
#define MOVLPS 589
#define MOVMSKPD 590
#define MOVMSKPS 591
#define MOVNTDQA 592
#define MOVNTDQ 593
#define MOVNTI 594
#define MOVNTPD 595
#define MOVNTPS 596
#define MOVNTQ 597
#define MOVQx 598
#define MOVQ2DQ 599
#define MOVSB 600
#define MOVSW 601
#define MOVSD 602
#define MOVSQ 603
#define MOVSDx 604
#define MOVSHDUP 605
#define MOVSLDUP 606
#define MOVSS 607
#define MOVSX 608
#define MOVSXD 609
#define MOVUPD 610
#define MOVUPS 611
#define MOVZX 612
#define MPSADBW 613
#define MUL 614
#define MULPD 615
#define MULPS 616
#define MULSD 617
#define MULSS 618
#define MWAIT 619
#define NEG 620
#define NOP 621
#define NOT 622
#define OR 623
#define ORPD 624
#define ORPS 625
#define OUT 626
#define OUTS 627
#define OUTSB 628
#define OUTSW 629
#define OUTSD 630
#define PABSB 631
#define PABSW 632
#define PABSD 633
#define PACKSSWB 634
#define PACKSSDW 635
#define PACKUSDW 636
#define PACKUSWB 637
#define PADDB 638
#define PADDW 639
#define PADDD 640
#define PADDQ 641
#define PADDSB 642
#define PADDSW 643
#define PADDUSB 644
#define PADDUSW 645
#define PALIGNR 646
#define PAND 647
#define PANDN 648
#define PAUSE 649
#define PAVGB 650
#define PAVGW 651
#define PBLENDVB 652
#define PBLENDW 653
#define PCLMULQDQ 654
#define PCMPEQB 655
#define PCMPEQW 656
#define PCMPEQD 657
#define PCMPEQQ 658
#define PCMPESTRI 659
#define PCMPESTRM 660
#define PCMPGTB 661
#define PCMPGTW 662
#define PCMPGTD 663
#define PCMPGTQ 664
#define PCMPISTRI 665
#define PCMPISTRM 666
#define PEXTRB 667
#define PEXTRD 668
#define PEXTRQ 669
#define PEXTRW 670
#define PHADDW 671
#define PHADDD 672
#define PHADDSW 673
#define PHMINPOSUW 674
#define PHSUBW 675
#define PHSUBD 676
#define PHSUBSW 677
#define PINSRB 678
#define PINSRD 679
#define PINSRQ 680
#define PINSRW 681
#define PMADDUBSW 682
#define PMADDWD 683
#define PMAXSB 684
#define PMAXSD 685
#define PMAXSW 686
#define PMAXUB 687
#define PMAXUD 688
#define PMAXUW 689
#define PMINSB 690
#define PMINSD 691
#define PMINSW 692
#define PMINUB 693
#define PMINUD 694
#define PMINUW 695
#define PMOVMSKB 696
#define PMOVSX 697
#define PMOVZX 698
#define PMULDQ 699
#define PMULHRSW 700
#define PMULHUW 701
#define PMULHW 702
#define PMULLD 703
#define PMULLW 704
#define PMULUDQ 705
#define POP 706
#define POPA 707
#define POPAD 708
#define POPCNT 709
#define POPF 710
#define POPFD 711
#define POPFQ 712
#define POR 713
#define PREFETCHT0 714
#define PREFETCHT1 715
#define PREFETCHT2 716
#define PREFETCHNTA 717
#define PSADBW 718
#define PSHUFB 719
#define PSHUFD 720
#define PSHUFHW 721
#define PSHUFLW 722
#define PSHUFW 723
#define PSIGNB 724
#define PSIGNW 725
#define PSIGND 726
#define PSLLDQ 727
#define PSLLW 728
#define PSLLD 729
#define PSLLQ 730
#define PSRAW 731
#define PSRAD 732
#define PSRLDQ 733
#define PSRLW 734
#define PSRLD 735
#define PSRLQ 736
#define PSUBB 737
#define PSUBW 738
#define PSUBD 739
#define PSUBQ 740
#define PSUBSB 741
#define PSUBSW 742
#define PSUBUSB 743
#define PSUBUSW 744
#define PTEST 745
#define PUNPCKHBW 746
#define PUNPCKHWD 747
#define PUNPCKHDQ 748
#define PUNPCKHQDQ 749
#define PUNPCKLBW 750
#define PUNPCKLWD 751
#define PUNPCKLDQ 752
#define PUNPCKLQDQ 753
#define PUSH 754
#define PUSHA 755
#define PUSHAD 756
#define PUSHF 757
#define PUSHFD 758
#define PXOR 759
#define RCL 760
#define RCR 761
#define ROL 762
#define ROR 763
#define RCPPS 764
#define RCPSS 765
#define RDMSR 766
#define RDPMC 767
#define RDTSC 768
#define RDTSCP 769
#define RET 770
#define RETN 771
#define ROUNDPD 772
#define ROUNDPS 773
#define ROUNDSD 774
#define ROUNDSS 775
#define RSM 776
#define RSQRTPS 777
#define RSQRTSS 778
#define SAHF 779
#define SAL 780
#define SAR 781
#define SHL 782
#define SHR 783
#define SBB 784
#define SCASB 785
#define SCASW 786
#define SCASD 787
#define SETA 788
#define SETAE 789
#define SETB 790
#define SETBE 791
#define SETC 792
#define SETE 793
#define SETG 794
#define SETGE 795
#define SETL 796
#define SETLE 797
#define SETNA 798
#define SETNAE 799
#define SETNB 800
#define SETNBE 801
#define SETNC 802
#define SETNE 803
#define SETNG 804
#define SETNGE 805
#define SETNL 806
#define SETNLE 807
#define SETNO 808
#define SETNP 809
#define SETNS 810
#define SETNZ 811
#define SETO 812
#define SETP 813
#define SETPE 814
#define SETPO 815
#define SETS 816
#define SETZ 817
#define SFENCE 818
#define SGDT 819
#define SHLD 820
#define SHRD 821
#define SHUFPD 822
#define SHUFPS 823
#define SIDT 824
#define SLDT 825
#define SMSW 826
#define SQRTPS 827
#define SQRTSD 828
#define SQRTSS 829
#define STC 830
#define STD 831
#define STI 832
#define STMXCSR 833
#define STOSB 834
#define STOSW 835
#define STOSD 836
#define STOSQ 837
#define STR 838
#define SUB 839
#define SUBPD 840
#define SUBPS 841
#define SUBSD 842
#define SUBSS 843
#define SWAPGS 844
#define SYSCALL 845
#define SYSENTER 846
#define SYSEXIT 847
#define SYSRET 848
#define TEST 849
#define UCOMISD 850
#define UCOMISS 851
#define UD2 852
#define UNPCKHPD 853
#define UNPCKHPS 854
#define UNPCKLPD 855
#define UNPCKLPS 856
#define VERR 857
#define VERW 858
#define WAIT 859
#define FWAIT 860
#define WBINVD 861
#define WRMSR 862
#define XADD 863
#define XCHG 864
#define XGETBV 865
#define XLAT 866
#define XLATB 867
#define XOR 868
#define XORPD 869
#define XORPS 870
#define XRSTOR 871
#define XSAVE 872
#define XSETBV 873
#define INVEPT 874
#define INVVPID 875
#define VMCALL 876
#define VMCLEAR 877
#define VMLAUNCH 878
#define VMPTRLD 879
#define VMPTRST 880
#define VMREAD 881
#define VMRESUME 882
#define VMWRITE 883
#define VMXOFF 884
#define VMXON 885
#define R_AL 886
#define R_CL 887
#define R_DL 888
#define R_BL 889
#define R_AH 890
#define R_CH 891
#define R_DH 892
#define R_BH 893
#define R_AX 894
#define R_CX 895
#define R_DX 896
#define R_BX 897
#define R_SP 898
#define R_BP 899
#define R_SI 900
#define R_DI 901
#define R_EAX 902
#define R_ECX 903
#define R_EDX 904
#define R_EBX 905
#define R_ESP 906
#define R_EBP 907
#define R_ESI 908
#define R_EDI 909
#define R_CR0 910
#define R_CR1 911
#define R_CR2 912
#define R_CR3 913
#define R_CR4 914
#define R_CR5 915
#define R_CR6 916
#define R_CR7 917
#define R_DR0 918
#define R_DR1 919
#define R_DR2 920
#define R_DR3 921
#define R_DR4 922
#define R_DR5 923
#define R_DR6 924
#define R_DR7 925
#define R_MM0 926
#define R_MM1 927
#define R_MM2 928
#define R_MM3 929
#define R_MM4 930
#define R_MM5 931
#define R_MM6 932
#define R_MM7 933
#define R_ST0 934
#define R_ST1 935
#define R_ST2 936
#define R_ST3 937
#define R_ST4 938
#define R_ST5 939
#define R_ST6 940
#define R_ST7 941
#define R_XMM0 942
#define R_XMM1 943
#define R_XMM2 944
#define R_XMM3 945
#define R_XMM4 946
#define R_XMM5 947
#define R_XMM6 948
#define R_XMM7 949
#define SEG_ES 950
#define SEG_CS 951
#define SEG_SS 952
#define SEG_DS 953
#define SEG_FS 954
#define SEG_GS 955
#define OP_REG 956
#define OP_MEM 957
#define OP_IMM 958
#define BYTE_PTR 959
#define WORD_PTR 960
#define DWORD_PTR 961
#define QWORD_PTR 962
#define TWORD_PTR 963
#define SCALE_1 964
#define SCALE_2 965
#define SCALE_4 966
#define SCALE_8 967
#define PLUSSIGN 968
#define SUBSIGN 969
#define ADDR_LAB 970
#define DISPLACEMENT8 971
#define DISPLACEMENT32 972
#define IMMEDIATE8 973
#define IMMEDIATE16 974
#define IMMEDIATE32 975
#define LINESTART 976
#define COLON 977
#define COMMA 978
#define MEMEND 979
#define LINEND 980
#define ERROR 981
#define END 982
#define NONE 983




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


