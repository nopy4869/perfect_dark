#ifndef IN_SETUP_000000_H
#define IN_SETUP_000000_H
#include <ultra64.h>
#include "types.h"

extern s32 levelnum;
extern u64 rand_seed;

extern struct chrdata *g_Chrs; // pointer to first element of chrs array
extern u32 g_NumChrs;
extern u32 var8005ce60;
extern u32 var8005ce64;
extern u32 var8005ce68;
extern u32 var8005ce6c;
extern u32 var8005ce70;
extern u32 var80065be0;
extern u32 var80067aa0;
extern u32 var80067ae8;
extern u32 var800656c0;
extern u32 var80067a10;
extern u32 var80067a58;
extern u32 var800663d8;
extern u32 var80067b30;
extern u32 var80067b78;
extern u32 g_CountdownTimerVisible;
extern bool g_CountdownTimerRunning;
extern float g_CountdownTimerValue;
extern u32 g_StageFlags;

extern struct audiodefinition audiodefinitions[];
extern struct audioconfig audioconfigs[];

extern bool (*g_CommandPointers[])(void);
extern u16 g_CommandLengths[];

extern struct coord var80068fec;

extern u32 g_TintedGlassEnabled;
extern s32 g_AlarmActive;
extern u32 var80059fe0;
extern u32 var8005a0b0;
extern u32 var8005b4d0;
extern u32 var8005ce10;
extern u32 var8005ce2c;
extern u32 var8005ce48;
extern u32 var8005ce74;
extern u32 var8005ce8c;
extern u32 var8005ce94;
extern u32 var8005ce9c;
extern u32 var8005cea8;
extern u32 var8005cee0;
extern u32 var8005cf00;
extern u32 var8005cf30;
extern u32 var8005cf60;
extern u32 var8005cf68;
extern u32 var8005cf6c;
extern u32 var8005cf70;
extern u32 var8005cf84;
extern u32 var8005cf90;
extern u32 var8005cf94;
extern u32 var8005cf98;
extern u32 var8005cfc0;
extern u32 var8005cfe8;
extern u32 var8005d010;
extern u32 var8005d0d8;
extern u32 var8005d120;
extern u32 var8005d188;
extern u32 var8005d1f0;
extern u32 var8005d258;
extern u32 var8005d2e0;
extern u32 var8005d308;
extern u32 var8005d390;
extern u32 var8005d3b8;
extern u32 var8005d4c0;
extern u32 var8005d4e8;
extern u32 var8005d520;
extern u32 var8005d530;
extern u32 var8005d588;
extern u32 var8005d594;
extern u32 var8005d59c;
extern u32 var8005d5b4;
extern u32 var8005d5b8;
extern u32 var8005d5bc;
extern u32 var8005d880;
extern u32 var8005d994;
extern u32 var8005d9cc;
extern u32 var8005d9d4;
extern u32 var8005dcc8;
extern u32 var8005dcf0;
extern u32 var8005dd1c;
extern u32 var8005dd54;
extern u32 var8005dd5c;
extern u32 var8005dd7c;
extern u32 var8005dda8;
extern u32 var8005ddac;
extern u32 var8005ddb4;
extern u32 var8005ddb8;
extern u32 var8005ddc0;
extern u32 var8005ddc4;
extern u32 var8005ddd4;
extern u32 var8005ddd8;
extern u32 var8005dde0;
extern u32 var8005edf0;
extern u32 var8005ee10;
extern u32 var8005ee14;
extern u32 var8005ee18;
extern u32 var8005ee68;
extern u32 var8005ee6c;
extern u32 var8005ee7c;
extern u32 var8005ee8c;
extern u32 var8005ee9c;
extern u32 var8005eeac;
extern u32 var8005eeb8;
extern u32 var8005eebc;
extern u32 var8005eecc;
extern u32 var8005eee0;
extern u32 var8005eee4;
extern u32 var8005eee8;
extern u32 var8005ef08;
extern u32 var8005ef10;
extern s32 g_NumGlobalAilists;
extern s32 g_NumLvAilists;
extern u32 var8005ef40;
extern u32 var8005ef5c;
extern u32 var8005ef7c;
extern u32 var8005ef90;
extern u32 var8005efb4;
extern u32 var8005efb8;
extern u32 var8005efcc;
extern u32 var8005efd0;
extern u32 var8005efe0;
extern u32 var8005efec;
extern u32 var8005f008;
extern u32 var8005f00c;
extern u32 var8005f010;
extern u32 var8005f014;
extern u32 var8005f018;
extern u32 var8005f01c;
extern u32 var8005f044;
extern u32 var8005f048;
extern u32 var8005f0a8;
extern u32 var8005f108;
extern u32 var8005f548;
extern u32 var8005f6f8;
extern u32 var8005f6fc;
extern u32 var8005f710;
extern u32 var8005f7b0;
extern u32 var8005f8f0;
extern u32 var8005fa80;
extern u32 var80060004;
extern u32 var80060008;
extern u32 var8006000c;
extern u32 var80060014;
extern u32 var80060028;
extern u32 var8006005c;
extern u32 var80060070;
extern u32 var80060190;
extern u32 var800601b0;
extern u32 var80060340;
extern u32 var80060368;
extern u32 var800608b0;
extern u32 var80060910;
extern u32 var80060914;
extern u32 var80060930;
extern u32 var80060938;
extern u32 var8006093c;
extern u32 var80060940;
extern u32 var80060970;
extern u32 var800609a0;
extern u32 var800609c4;
extern u32 var800611f0;
extern u32 var80061240;
extern u32 var80061290;
extern u32 var800612e0;
extern u32 var80061330;
extern u32 var80061344;
extern u32 var80061360;
extern u32 var80061380;
extern u32 var800613a0;
extern u32 var80061420;
extern u32 var80061424;
extern u32 var8006142c;
extern u32 var80061430;
extern u32 var80061434;
extern u32 var80061438;
extern u32 var80061440;
extern u32 var80061460;
extern u32 var80061468;
extern u32 var800615a0;
extern u32 var80061630;
extern u32 var80061634;
extern u32 var80061644;
extern u32 var80061648;
extern u32 var8006164c;
extern u32 var80061694;
extern u32 var800616dc;
extern u32 var800616e4;
extern u32 var800616e8;
extern u32 var80061710;
extern u32 var80061a80;
extern u32 var80061af4;
extern u32 var80061b68;
extern u32 var80061bf0;
extern u32 var800623a4;
extern u32 var800623b0;
extern u32 var80062400;
extern u32 var80062410;
extern u32 var80062414;
extern u32 var80062448;
extern u32 var80062450;
extern u32 var80062460;
extern u32 var8006246c;
extern u32 var80062478;
extern u32 var80062484;
extern u32 var80062488;
extern u32 var80062498;
extern u32 var800624a4;
extern u32 var800624a8;
extern u32 var800624ac;
extern u32 var800624b0;
extern s32 var800624b4;
extern s32 var800624b8;
extern u32 var800624bc;
extern u32 var800624c4;
extern u32 var800624e0;
extern s32 var800624e4;
extern u32 var800624e8;
extern u32 var800624ec;
extern u32 var800624f0;
extern u32 var800624f4;
extern u32 var800624f8;
extern u32 var800624fc;
extern u32 var80062508;
extern u32 var8006250c;
extern u32 var80062530;
extern u32 var80062538;
extern u32 var80062560;
extern u32 var80062568;
extern u32 var80062578;
extern u32 var80062580;
extern u32 var80062590;
extern u32 var80062598;
extern u32 var800625a8;
extern u32 var800625f0;
extern u32 var800626ec;
extern u32 var80062730;
extern u32 var80062738;
extern u32 var80062744;
extern u32 var80062750;
extern u32 var8006275c;
extern u32 var80062768;
extern u32 var800627a8;
extern u32 var800627ac;
extern u32 var800627b0;
extern u32 var800627b4;
extern u32 var800627c4;
extern u32 var800627c8;
extern u32 var800627cc;
extern u32 var800627d4;
extern u32 var800627dc;
extern u32 var800627e0;
extern u32 var800627e8;
extern u32 var800627f0;
extern u32 var800627f8;
extern u32 var800627fc;
extern u32 var80062800;
extern u32 var80062808;
extern u32 var80062810;
extern u32 var80062814;
extern u32 var80062818;
extern u32 var80062858;
extern u32 var80062864;
extern u32 var80062868;
extern u32 var80062870;
extern u32 var8006287c;
extern u32 var800628bc;
extern u32 var800628c8;
extern u32 var800628d4;
extern u32 var80062914;
extern u8 var80062940;
extern u32 var80062944;
extern u32 var80062948;
extern u32 var80062950;
extern u32 var80062954;
extern u32 var80062960;
extern u32 var80062964;
extern u32 var80062968;
extern u32 var80062970;
extern u32 var80062974;
extern u32 var80062984;
extern u32 var80062990;
extern u32 var80062998;
extern u32 var800629d8;
extern u32 var800629fc;
extern u32 var80062a3c;
extern u32 var80062a48;
extern u32 var80062a4c;
extern u32 var80062a8c;
extern u32 var80062a90;
extern u32 var80062a94;
extern u32 var80062aa0;
extern u32 var80062b00;
extern u32 var80062b04;
extern u32 var80062b08;
extern u32 var80062b0c;
extern u32 var80062b10;
extern u32 var80062b14;
extern u32 var80062b1c;
extern u32 var80062b68;
extern u32 var80062c14;
extern u32 var80062c58;
extern u32 var80062c6c;
extern u32 var80062c84;
extern u32 var80062c88;
extern u32 var80062cb0;
extern u32 var80062cb4;
extern u32 var80062cb8;
extern s32 var80062cbc;
extern u32 var80063970;
extern u32 var80064e1c;
extern u32 var800652b8;
extern u32 var800652bc;
extern u32 var800652c0;
extern u32 var800652c8;
extern u32 var800652cc;
extern u32 var80065548;
extern u32 var80065640;
extern u32 var80065680;
extern u32 var80065ae0;
extern u32 var800662d8;
extern u32 var800666c8;
extern u32 var80066a70;
extern u32 var80066ef0;
extern u32 var80067328;
extern u32 var80067428;
extern u32 var80067470;
extern u32 var800674b8;
extern u32 var80067500;
extern u32 var80067548;
extern u32 var80067590;
extern u32 var800675d8;
extern u32 var80067620;
extern u32 var80067668;
extern u32 var800676b0;
extern u32 var800676f8;
extern u32 var80067740;
extern u32 var80067788;
extern u32 var800677d0;
extern u32 var80067818;
extern u32 var80067860;
extern u32 var800678a8;
extern u32 var800678f0;
extern u32 var80067938;
extern u32 var80067980;
extern u32 var80067bc0;
extern u32 var80067c08;
extern u32 var80067d28;
extern u32 var80067d70;
extern u32 var80067e50;
extern u32 var80067e58;
extern u32 var80067e5c;
extern u32 var80067e60;
extern u32 var80067e64;
extern s16 *g_SquadronList;
extern u32 var80067fdc;
extern u32 var80067ff0;
extern u32 var80068008;
extern u32 var8006801c;
extern u32 var80068024;
extern u32 var8006802c;
extern u32 var80068034;
extern u32 var8006803c;
extern u32 var80068044;
extern u32 var8006804c;
extern u32 var80068054;
extern u32 var8006805c;
extern u32 var80068064;
extern u32 var8006806c;
extern u32 var80068074;
extern u32 var8006807c;
extern u32 var80068080;
extern u32 var80068084;
extern u32 var800680bc;
extern u32 var8006819c;
extern u32 var800681a8;
extern u32 var800681b0;
extern u32 var800681bc;
extern u32 var800681c4;
extern u32 var800681e0;
extern u32 var80068214;
extern u32 var80068228;
extern u32 var80068230;
extern u32 var8006823c;
extern u32 var80068268;
extern u32 var80068270;
extern u32 var8006827c;
extern u32 var80068288;
extern u32 var8006829c;
extern u32 var8006835c;
extern u32 var800683bc;
extern u32 var800683c8;
extern u32 var800683e0;
extern u32 var800683f8;
extern u32 var80068408;
extern u32 var80068420;
extern u32 var8006843c;
extern u32 var80068440;
extern u32 var8006844c;
extern u32 var8006845c;
extern u32 var80068464;
extern u32 var8006846c;
extern u32 var80068fe0;
extern u16 quiptable_human_bank0[];
extern u16 quiptable_human_bank1[];
extern u16 quiptable_skedar[];
extern u16 quiptable_maian[];
extern s16 ciquiptable_bank0[][3];
extern s16 ciquiptable_bank1[][3];
extern s16 ciquiptable_bank2[][3];
extern s16 ciquiptable_bank3[];
extern u16 g_InvestigationPadMap[40];
extern u32 var80069780;
extern u32 var8006978c;
extern u16 special_animations[];
extern u32 var80069860;
extern u32 var80069868;
extern u32 var80069874;
extern u32 var800698c0;
extern u32 var800698d8;
extern u32 var800698dc;
extern u32 var800698e0;
extern u32 var800698e4;
extern u32 var800698e8;
extern u32 var800698ec;
extern u32 var800698f8;
extern u32 var800698fc;
extern u32 var80069900;
extern u32 var80069910;
extern u32 var80069918;
extern u32 var8006991c;
extern u32 var80069920;
extern u32 var80069924;
extern u32 var80069928;
extern u32 var8006992c;
extern u32 var8006993c;
extern u32 var80069964;
extern u32 var80069968;
extern u32 var80069970;
extern u32 var80069974;
extern u32 var80069978;
extern u32 var8006997c;
extern u32 var80069980;
extern u32 var800699dc;
extern u32 var800699e8;
extern u32 var800699f4;
extern u32 var800699fc;
extern u32 var80069a08;
extern u32 var80069a48;
extern u32 var80069a70;
extern u32 var80069b74;
extern u32 var80069b80;
extern u32 var80069b8c;
extern u32 var80069b98;
extern u32 var80069ba4;
extern u32 var80069bb0;
extern u32 var80069bbc;
extern u32 var80069bc8;
extern u32 var80069bcc;
extern u32 var80069bd0;
extern u32 var80069bd4;
extern u32 var80069bd8;
extern u32 var80069c48;
extern u32 var80069cc4;
extern u32 var80069d04;
extern u32 var80069d44;
extern u32 var80069d84;
extern u32 var80069d90;
extern u32 var80069e0c;
extern u32 var80069ee0;
extern u32 var80069f3c;
extern u32 var80069fb8;
extern u32 var8006a034;
extern u32 var8006a0d0;
extern u32 var8006a160;
extern u32 var8006a18c;
extern u32 var8006a1b8;
extern u32 var8006a1e4;
extern u32 var8006a230;
extern u32 var8006a27c;
extern u32 var8006a2b4;
extern u32 var8006a2ec;
extern u32 var8006a324;
extern u32 var8006a344;
extern u32 var8006a364;
extern u32 var8006a384;
extern u32 var8006a3a4;
extern u32 var8006a3c4;
extern u32 var8006a3e4;
extern u32 var8006a404;
extern u32 var8006a4bc;
extern u32 var8006a6bc;
extern u32 var8006a6dc;
extern u32 var8006a6fc;
extern u32 var8006a728;
extern u32 var8006a754;
extern u32 var8006a774;
extern u32 var8006a7a0;
extern u32 var8006a7cc;
extern u32 var8006a7f8;
extern u32 var8006a818;
extern u32 var8006a894;
extern u32 var8006a910;
extern u32 var8006a930;
extern u32 var8006a950;
extern u32 var8006a970;
extern u32 var8006aa28;
extern u32 var8006aa48;
extern u32 var8006aa68;
extern u32 var8006aa88;
extern u32 var8006ab70;
extern u32 var8006abb0;
extern u32 var8006abc0;
extern u32 var8006abcc;
extern u32 var8006abd8;
extern u32 var8006abe4;
extern u32 var8006abf0;
extern u32 var8006abfc;
extern u32 var8006ac08;
extern u32 var8006ac64;
extern u32 var8006ac6c;
extern u32 var8006acc8;
extern u32 var8006ad24;
extern u32 var8006ad8c;
extern u32 var8006ad90;
extern u32 var8006adf8;
extern u32 var8006ae10;
extern u32 var8006ae14;
extern s8 var8006ae18;
extern s8 var8006ae1c;
extern s8 var8006ae20;
extern s8 var8006ae24;
extern s8 var8006ae28;
extern u32 var8006ae3c;
extern u32 var8006ae5c;
extern u32 var8006ae70;
extern u32 var8006ae80;
extern u32 var8006ae90;
extern u32 var8006af0c;
extern u32 var8006af8c;
extern u32 var8006afa0;

#endif
