#include "libgcl/libgcl.h"
#include "libgcl/hash.h"

GCL_ActorTableEntry s03eOverlayCharas[] =
{
    { 0x92BC, (TGCL_ActorCreateFn)0x800C6558 },
    { 0x7A05, (TGCL_ActorCreateFn)0x800CBA94 },
    { 0xEC77, (TGCL_ActorCreateFn)0x800C5E68 },
    { 0xE253, (TGCL_ActorCreateFn)0x800C4AD8 },
    { 0xF5C5, (TGCL_ActorCreateFn)0x800C6EDC },
    { 0x1AD3, (TGCL_ActorCreateFn)0x800C5454 },
    { 0xA9C5, (TGCL_ActorCreateFn)0x800C9190 },
    { 0xA12E, (TGCL_ActorCreateFn)0x800CB2B8 },
    { 0xDD8B, (TGCL_ActorCreateFn)0x800C5748 },
    { 0x51C6, (TGCL_ActorCreateFn)0x800CBE84 },
    { 0x0FAD, (TGCL_ActorCreateFn)0x800C5944 },
    { 0, 0 }
};

int s03e_dword_800C3268 = 0x8D5C121F;
int s03e_dword_800C326C = 0xD5CC0DD2;
int s03e_dword_800C3270 = 0x65558591;
int s03e_dword_800C3274 = 0x00002EAB;
int s03e_dword_800C3278 = 0x0000027F;
int s03e_dword_800C327C = 0x026E0255;
int s03e_dword_800C3280 = 0x04410E1E;
int s03e_dword_800C3284 = 0x065F067D;
int s03e_dword_800C3288 = 0x0A370846;
int s03e_dword_800C328C = 0x00000C2D;
int s03e_dword_800C3290 = 0x027F0A00;
int s03e_dword_800C3294 = 0x027F1E00;
int s03e_dword_800C3298 = 0x00000000;
int s03e_dword_800C329C = 0x044B0423;
int s03e_dword_800C32A0 = 0x08410687;
int s03e_dword_800C32A4 = 0x06410C2D;
int s03e_dword_800C32A8 = 0x0000045F;

// Okajima/uji.c
RECT uji_rect = {100, 100, 200, 200};

int s03e_dword_800C32B4 = 0x00000000;
int s03e_dword_800C32B8 = 0x00000000;
int s03e_dword_800C32BC = 0x00000000;
int s03e_dword_800C32C0 = 0x00500050;
int s03e_dword_800C32C4 = 0x00A000A0;
int s03e_dword_800C32C8 = 0x012C012C;
int s03e_dword_800C32CC = 0x0000012C;
int s03e_dword_800C32D0 = 0x0002E4CC;
int s03e_dword_800C32D4 = 0x00040002;
int s03e_dword_800C32D8 = 0x012C0001;
int s03e_dword_800C32DC = 0x03200001;
int s03e_dword_800C32E0 = 0x00800320;
int s03e_dword_800C32E4 = 0x00000000;
int s03e_dword_800C32E8 = 0x800CC124;
int s03e_dword_800C32EC = 0x0008512D;
int s03e_dword_800C32F0 = 0x001E0004;
int s03e_dword_800C32F4 = 0x01F40001;
int s03e_dword_800C32F8 = 0x01900001;
int s03e_dword_800C32FC = 0x00800190;
int s03e_dword_800C3300 = 0x00000000;
int s03e_dword_800C3304 = 0x800CC14C;
int s03e_dword_800C3308 = 0x0008512D;
int s03e_dword_800C330C = 0x001E0004;
int s03e_dword_800C3310 = 0x01F40001;
int s03e_dword_800C3314 = 0x01900001;
int s03e_dword_800C3318 = 0x00800190;
int s03e_dword_800C331C = 0x00000000;
int s03e_dword_800C3320 = 0x800CC164;
int s03e_dword_800C3324 = 0x0008512D;
int s03e_dword_800C3328 = 0x001E0004;
int s03e_dword_800C332C = 0x01F40001;
int s03e_dword_800C3330 = 0x01900001;
int s03e_dword_800C3334 = 0x00000190;
int s03e_dword_800C3338 = 0x00000000;
int s03e_dword_800C333C = 0x800CC1CC;
int s03e_dword_800C3340 = 0x0008512D;
int s03e_dword_800C3344 = 0x001E0004;
int s03e_dword_800C3348 = 0x01F40001;
int s03e_dword_800C334C = 0x01900002;
int s03e_dword_800C3350 = 0x00200190;
int s03e_dword_800C3354 = 0x00000000;
int s03e_dword_800C3358 = 0x800CC244;
int s03e_dword_800C335C = 0x0001DCD3;
int s03e_dword_800C3360 = 0x00010001;
int s03e_dword_800C3364 = 0x01F40001;
int s03e_dword_800C3368 = 0x00500001;
int s03e_dword_800C336C = 0x00000050;
int s03e_dword_800C3370 = 0x00000000;
int s03e_dword_800C3374 = 0x800CC2AC;
int s03e_dword_800C3378 = 0x0001FAD3;
int s03e_dword_800C337C = 0x00010001;
int s03e_dword_800C3380 = 0x01F40001;
int s03e_dword_800C3384 = 0x00500001;
int s03e_dword_800C3388 = 0x00000050;
int s03e_dword_800C338C = 0x00000000;
int s03e_dword_800C3390 = 0x800CC410;
int s03e_dword_800C3394 = 0x0001FAD3;
int s03e_dword_800C3398 = 0x00010001;
int s03e_dword_800C339C = 0x01F40001;
int s03e_dword_800C33A0 = 0x00500001;
int s03e_dword_800C33A4 = 0x00000050;
int s03e_dword_800C33A8 = 0x00000000;
int s03e_dword_800C33AC = 0x800CC514;
int s03e_dword_800C33B0 = 0x00011968;
int s03e_dword_800C33B4 = 0x00010001;
int s03e_dword_800C33B8 = 0x00000001;
int s03e_dword_800C33BC = 0x00460001;
int s03e_dword_800C33C0 = 0x00FF0046;
int s03e_dword_800C33C4 = 0x00000000;
int s03e_dword_800C33C8 = 0x800CC618;
int s03e_dword_800C33CC = 0xFAD3DCD3;
int s03e_dword_800C33D0 = 0x00001968;

// Takabe/fadeio.c
unsigned short fadeio_msgs[] = {HASH_KILL, 0x71F1};

// Takabe/cinema.c
unsigned short mes_list_800C3680[] = { 0xD420, 0x745D };

int s03e_dword_800C33DC = 0x00003223;


const char s03e_dword_800CBE84[] = {0xe0, 0xff, 0xbd, '\''};
const char s03e_dword_800CBE88[] = {0x14, 0x0, 0xb1, 0xaf};
const char s03e_dword_800CBE8C[] = {'!', 0x88, 0x80, 0x0};
const char s03e_dword_800CBE90[] = {0x18, 0x0, 0xb2, 0xaf};
const char s03e_dword_800CBE94[] = {'!', 0x90, 0xa0, 0x0};
const char s03e_dword_800CBE98[] = {0x5, 0x0, 0x4, '$'};
const char s03e_dword_800CBE9C[] = {'4', 0x0, 0x5, '$'};
const char s03e_dword_800CBEA0[] = {0x1c, 0x0, 0xbf, 0xaf};
const char s03e_dword_800CBEA4[] = {'9', 'T', 0x0, 0xc};
const char s03e_dword_800CBEA8[] = {0x10, 0x0, 0xb0, 0xaf};
const char s03e_dword_800CBEAC[] = {'!', 0x80, '@', 0x0};
const char s03e_dword_800CBEB0[] = {0x12, 0x0, 0x0, 0x12};
const char s03e_dword_800CBEB4[] = {'!', ' ', 0x0, 0x2};
const char s03e_dword_800CBEB8[] = {0xd, 0x80, 0x5, '<'};
const char s03e_dword_800CBEBC[] = {0x98, 0xbc, 0xa5, '$'};
const char s03e_dword_800CBEC0[] = {0xd, 0x80, 0x6, '<'};
const char s03e_dword_800CBEC4[] = {0xc, 0xbd, 0xc6, '$'};
const char s03e_dword_800CBEC8[] = {0xd, 0x80, 0x7, '<'};
const char s03e_dword_800CBECC[] = {'S', 'T', 0x0, 0xc};
const char s03e_dword_800CBED0[] = {0xac, 0xc6, 0xe7, '$'};
const char s03e_dword_800CBED4[] = {'!', ' ', 0x0, 0x2};
const char s03e_dword_800CBED8[] = {'!', '(', ' ', 0x2};
const char s03e_dword_800CBEDC[] = {'n', '/', 0x3, 0xc};
const char s03e_dword_800CBEE0[] = {'!', '0', '@', 0x2};
const char s03e_dword_800CBEE4[] = {0x6, 0x0, 'A', 0x4};
const char s03e_dword_800CBEE8[] = {'!', 0x10, 0x0, 0x2};
const char s03e_dword_800CBEEC[] = {'r', 'T', 0x0, 0xc};
const char s03e_dword_800CBEF0[] = {'!', ' ', 0x0, 0x2};
const char s03e_dword_800CBEF4[] = {0xc0, '/', 0x3, 0x8};
const char s03e_dword_800CBEF8[] = {'!', 0x10, 0x0, 0x0};
const char s03e_dword_800CBEFC[] = {'!', 0x10, 0x0, 0x2};
const char s03e_dword_800CBF00[] = {0x1c, 0x0, 0xbf, 0x8f};
const char s03e_dword_800CBF04[] = {0x18, 0x0, 0xb2, 0x8f};
const char s03e_dword_800CBF08[] = {0x14, 0x0, 0xb1, 0x8f};
const char s03e_dword_800CBF0C[] = {0x10, 0x0, 0xb0, 0x8f};
const char s03e_dword_800CBF10[] = {0x8, 0x0, 0xe0, 0x3};
const char s03e_dword_800CBF14[] = {' ', 0x0, 0xbd, '\''};
const char s03e_aMessagein_800CBF18[] = "message in\n";
const char s03e_aMessageout_800CBF24[] = "message out\n";
const char s03e_aMessagex_800CBF34[] = "message %X\n";
const char s03e_aNofloorproc_800CBF40[] = "NO FLOOR PROC\n";
const char s03e_aRotd_800CBF50[] = "ROT %d\n";
const char s03e_aReqdoorclose_800CBF58[] = "REQ:DOOR CLOSE\n";
const char s03e_aInitopen_800CBF68[] = "INiTOPEN\n";
const char s03e_dword_800CBF74[] = {0x0, 0x0, 0x0, 0x0};
const int s03e_dword_800CBF78 = 0x800C3BC4;
const int s03e_dword_800CBF7C = 0x800C3CE8;
const int s03e_dword_800CBF80 = 0x800C3D90;
const int s03e_dword_800CBF84 = 0x800C3E48;
const int s03e_dword_800CBF88 = 0x800C44DC;
const int s03e_dword_800CBF8C = 0x800C3F50;
const int s03e_dword_800CBF90 = 0x800C3F50;
const int s03e_dword_800CBF94 = 0x800C41F4;
const int s03e_dword_800CBF98 = 0x800C42FC;
const int s03e_dword_800CBF9C = 0x800C43C4;
const int s03e_dword_800CBFA0 = 0x800C448C;
const int s03e_dword_800CBFA4 = 0x800C4198;
const char s03e_dword_800CBFA8[] = {'e', 'v', 'p', 'a'};
const char s03e_dword_800CBFAC[] = {'n', 'e', 'l', '.'};
const char s03e_dword_800CBFB0[] = {'c', 0x0, '!', 0x90};

// Game/lamp.c
const char aTexparseerror[] = "TEX:PARSE ERROR\n";
const char aLampC[] = {'l', 'a', 'm', 'p', '.', 'c', 0x0, 0x81};

const char s03e_dword_800CBFD0[] = {'i', 'n', 't', 'r'};
const char s03e_dword_800CBFD4[] = {'_', 'c', 'a', 'm'};
const char s03e_dword_800CBFD8[] = {'.', 'c', 0x0, 0x81};
const char s03e_aMotsec_800CBFDC[] = "motse.c";

// Enemy/wall.c
const char aDestroy[] = "destroy\n";
const char aBox01[] = "box_01";
const char aDbx1[] = "dbx1";
const char aDbx2[] = "dbx2";
const char aWallC[] = {'w', 'a', 'l', 'l', '.', 'c', 0x0, 0x81};

// Enemy/asioto.c
const char aAsiotoSeSetErr[] = " asioto se set err \n";
const char aAsiotoSeNoiseSetErr[] = " asioto se noise set err \n";
const char aMigiSodesuri[] = " migi sodesuri %d \n";
const char aAsiotoC[] = {'a', 's', 'i', 'o', 't', 'o', '.', 'c', 0x0, '\'', 0x91, 0x1};

// Okajima/uji.c
const char aUji[] = "uji";
const char aUjiC[] = {'u', 'j', 'i', '.', 'c', 0x0, 0xc1, '#'};

const int s03e_dword_800CC070 = 0x800C7544;
const int s03e_dword_800CC074 = 0x800C7544;
const int s03e_dword_800CC078 = 0x800C7564;
const int s03e_dword_800CC07C = 0x800C7584;
const int s03e_dword_800CC080 = 0x800C75A4;
const char s03e_dword_800CC084[] = {0x0, 0x0, 0xb0, 0xff};
const char s03e_dword_800CC088[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_aKill_800CC08C[] = "kill";
const char s03e_dword_800CC094[] = {0xb2, 0xbb, 0xc6, 0xfe};
const char s03e_dword_800CC098[] = {0xa4, 0xec, 0xa4, 0xeb};
const char s03e_dword_800CC09C[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_dword_800CC0A0[] = {0xb2, 0xbb, 0xc0, 0xda};
const char s03e_dword_800CC0A4[] = {0xa4, 0xeb, 0x0, 0x0};
const char s03e_dword_800CC0A8[] = {0xbb, 0xeb, 0xce, 0xcf};
const char s03e_dword_800CC0AC[] = {0xcc, 0xe1, 0xa4, 0xb9};
const char s03e_dword_800CC0B0[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_dword_800CC0B4[] = {0xbb, 0xeb, 0xce, 0xcf};
const char s03e_dword_800CC0B8[] = {0xcc, 0xb5, 0xa4, 0xaf};
const char s03e_dword_800CC0BC[] = {0xa4, 0xb9, 0x0, 0x0};
const char s03e_dword_800CC0C0[] = {0xbd, 0xe8, 0xcd, 0xfd};
const char s03e_dword_800CC0C4[] = {0xba, 0xc6, 0xb3, 0xab};
const char s03e_dword_800CC0C8[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_dword_800CC0CC[] = {0xbd, 0xe8, 0xcd, 0xfd};
const char s03e_dword_800CC0D0[] = {0xc4, 0xe4, 0xbb, 0xdf};
const char s03e_dword_800CC0D4[] = {0x0, 0x0, 0x0, 0x0};
const int s03e_dword_800CC0D8 = 0x800C81FC;
const int s03e_dword_800CC0DC = 0x800C820C;
const int s03e_dword_800CC0E0 = 0x800C8218;
const int s03e_dword_800CC0E4 = 0x800C8220;
const int s03e_dword_800CC0E8 = 0x800C822C;
const int s03e_dword_800CC0EC = 0x800C8234;
const int s03e_dword_800CC0F0 = 0x800C823C;
const char s03e_dword_800CC0F4[] = {0x0, 0x0, 'j', 0xff};
const char s03e_dword_800CC0F8[] = {'p', 0xfe, 0x0, 0x0};
const char s03e_aCameral_800CC0FC[] = "camera_l";
const char s03e_aGcagun_800CC108[] = "gca_gun";
const char s03e_aGcaarm_800CC110[] = "gca_arm";
const char s03e_dword_800CC118[] = {'g', 'u', 'n', 'c'};
const char s03e_dword_800CC11C[] = {'a', 'm', 'e', '.'};
const char s03e_dword_800CC120[] = {'c', 0x0, '+', 0x96};
const char s03e_dword_800CC124[] = {0x0, 0x1d, 0x3, 0x0};
const char s03e_dword_800CC128[] = {0x9, 0x0, 0x10, 0x0};
const char s03e_dword_800CC12C[] = {0x1b, 0x9, 0xb, 0xb8};
const char s03e_dword_800CC130[] = {0x2, 0x0, 0x1, 0xf};
const char s03e_dword_800CC134[] = {0x7, 0x3, '\n', 0xff};
const char s03e_dword_800CC138[] = {'8', 0xff, '8', 0x2};
const char s03e_dword_800CC13C[] = {0x0, 0x1, 0xf, 0x7};
const char s03e_dword_800CC140[] = {0x3, '\n', 0xfe, 0x98};
const char s03e_dword_800CC144[] = {0xfe, 0xfc, 0x2, 0x0};
const char s03e_dword_800CC148[] = {0x1, 0xf, 0x0, 0x0};
const char s03e_dword_800CC14C[] = {0x0, 0x13, 0x1, 0x0};
const char s03e_dword_800CC150[] = {0x5, 0xc, 0x0, 0x7};
const char s03e_dword_800CC154[] = {0x1, 0xff, '\n', 0x0};
const char s03e_dword_800CC158[] = {'F', 0x0, 'F', 0x8};
const char s03e_dword_800CC15C[] = {0xf0, 0xf0, 0xf0, 0x2};
const char s03e_dword_800CC160[] = {0x0, 0x1, 0xd, 0xf};
const char s03e_dword_800CC164[] = {0x0, '[', 0x4, 0x0};
const char s03e_dword_800CC168[] = {0xb, 0x0, 0x1e, 0x0};
const char s03e_dword_800CC16C[] = {'6', 0x0, 'N', 0xc};
const char s03e_dword_800CC170[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC174[] = {'\n', 0x0, 0xc8, 0x0};
const char s03e_dword_800CC178[] = {0xc8, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC17C[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC180[] = {0xd, 0xf, '\n', 0x1};
const char s03e_dword_800CC184[] = {0x90, 0x1, 0x90, 0xc};
const char s03e_dword_800CC188[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC18C[] = {'\n', 0x1, ',', 0x1};
const char s03e_dword_800CC190[] = {',', 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC194[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC198[] = {0xd, 0xf, '\n', 0x3};
const char s03e_dword_800CC19C[] = {' ', 0x3, ' ', 0xc};
const char s03e_dword_800CC1A0[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC1A4[] = {'\n', 0x1, 0x90, 0x1};
const char s03e_dword_800CC1A8[] = {0x90, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC1AC[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC1B0[] = {0xd, 0xf, '\n', 0x4};
const char s03e_dword_800CC1B4[] = {0xb0, 0x4, 0xb0, 0xc};
const char s03e_dword_800CC1B8[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC1BC[] = {'\n', 0x1, 0xf4, 0x1};
const char s03e_dword_800CC1C0[] = {0xf4, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC1C4[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC1C8[] = {0xd, 0xf, 0x0, 0x0};
const char s03e_dword_800CC1CC[] = {0x0, 'k', 0x4, 0x0};
const char s03e_dword_800CC1D0[] = {0xb, 0x0, '"', 0x0};
const char s03e_dword_800CC1D4[] = {'>', 0x0, 'Z', 0x8};
const char s03e_dword_800CC1D8[] = {0xff, 0xff, 0xff, 0xc};
const char s03e_dword_800CC1DC[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC1E0[] = {'\n', 0x0, 0xc8, 0x0};
const char s03e_dword_800CC1E4[] = {0xc8, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC1E8[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC1EC[] = {0xd, 0xf, 0x8, 0xff};
const char s03e_dword_800CC1F0[] = {0xff, 0xff, '\n', 0x1};
const char s03e_dword_800CC1F4[] = {0x90, 0x1, 0x90, 0xc};
const char s03e_dword_800CC1F8[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC1FC[] = {'\n', 0x1, ',', 0x1};
const char s03e_dword_800CC200[] = {',', 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC204[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC208[] = {0xd, 0xf, 0x8, 0xff};
const char s03e_dword_800CC20C[] = {0xff, 0xff, '\n', 0x3};
const char s03e_dword_800CC210[] = {' ', 0x3, ' ', 0xc};
const char s03e_dword_800CC214[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC218[] = {'\n', 0x1, 0x90, 0x1};
const char s03e_dword_800CC21C[] = {0x90, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC220[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC224[] = {0xd, 0xf, 0x8, 0xff};
const char s03e_dword_800CC228[] = {0xff, 0xff, '\n', 0x4};
const char s03e_dword_800CC22C[] = {0xb0, 0x4, 0xb0, 0xc};
const char s03e_dword_800CC230[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC234[] = {'\n', 0x1, 0xf4, 0x1};
const char s03e_dword_800CC238[] = {0xf4, 0x8, 0xf0, 0xf0};
const char s03e_dword_800CC23C[] = {0xf0, 0x2, 0x0, 0x1};
const char s03e_dword_800CC240[] = {0xd, 0xf, 0x0, 0x0};
const char s03e_dword_800CC244[] = {0x0, '[', 0x4, 0x0};
const char s03e_dword_800CC248[] = {0xb, 0x0, 0x1e, 0x0};
const char s03e_dword_800CC24C[] = {'6', 0x0, 'N', 0xc};
const char s03e_dword_800CC250[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC254[] = {'\n', 0x0, 0xc8, 0x0};
const char s03e_dword_800CC258[] = {0xc8, 0x8, 0xfc, 0xfc};
const char s03e_dword_800CC25C[] = {0xfc, 0x2, 0x0, 0x1};
const char s03e_dword_800CC260[] = {0xd, 0xf, '\n', 0x1};
const char s03e_dword_800CC264[] = {0x90, 0x1, 0x90, 0xc};
const char s03e_dword_800CC268[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC26C[] = {'\n', 0x1, ',', 0x1};
const char s03e_dword_800CC270[] = {',', 0x8, 0xfc, 0xfc};
const char s03e_dword_800CC274[] = {0xfc, 0x2, 0x0, 0x1};
const char s03e_dword_800CC278[] = {0xd, 0xf, '\n', 0x3};
const char s03e_dword_800CC27C[] = {' ', 0x3, ' ', 0xc};
const char s03e_dword_800CC280[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC284[] = {'\n', 0x1, 0x90, 0x1};
const char s03e_dword_800CC288[] = {0x90, 0x8, 0xfc, 0xfc};
const char s03e_dword_800CC28C[] = {0xfc, 0x2, 0x0, 0x1};
const char s03e_dword_800CC290[] = {0xd, 0xf, '\n', 0x4};
const char s03e_dword_800CC294[] = {0xb0, 0x4, 0xb0, 0xc};
const char s03e_dword_800CC298[] = {0x0, 0x7, 0x1, 0xff};
const char s03e_dword_800CC29C[] = {'\n', 0x1, 0xf4, 0x1};
const char s03e_dword_800CC2A0[] = {0xf4, 0x8, 0xfc, 0xfc};
const char s03e_dword_800CC2A4[] = {0xfc, 0x2, 0x0, 0x1};
const char s03e_dword_800CC2A8[] = {0xd, 0xf, 'S', 0x81};
const char s03e_dword_800CC2AC[] = {0x1, 'V', 0x4, 0x0};
const char s03e_dword_800CC2B0[] = {0xb, 0x0, '^', 0x0};
const char s03e_dword_800CC2B4[] = {0xb1, 0x1, 0x9, 0x1};
const char s03e_dword_800CC2B8[] = {0x0, 0xc, 0x0, 0x4};
const char s03e_dword_800CC2BC[] = {'\n', 0x0, 'd', 0x0};
const char s03e_dword_800CC2C0[] = {'d', 0x8, '2', 0x19};
const char s03e_dword_800CC2C4[] = {0x14, 0x2, 0x0, 0x1};
const char s03e_dword_800CC2C8[] = {0xd, '\n', 0x0, 'd'};
const char s03e_dword_800CC2CC[] = {0x0, 'd', 0x8, '2'};
const char s03e_dword_800CC2D0[] = {0x96, 0xaa, 0x2, 0x0};
const char s03e_dword_800CC2D4[] = {0x3, '\n', 0xff, 0x9c};
const char s03e_dword_800CC2D8[] = {0xff, 0x9c, 0x8, 0xce};
const char s03e_dword_800CC2DC[] = {'j', 'V', 0x2, 0x0};
const char s03e_dword_800CC2E0[] = {0x16, '\n', 0x1, ','};
const char s03e_dword_800CC2E4[] = {0xfe, 0x98, 0x8, 0xce};
const char s03e_dword_800CC2E8[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC2EC[] = {0x1, '\n', 0x1, ','};
const char s03e_dword_800CC2F0[] = {0xff, 0xe2, 0x8, 0xce};
const char s03e_dword_800CC2F4[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC2F8[] = {0x1, '\n', 0x1, ','};
const char s03e_dword_800CC2FC[] = {0xff, 0xf4, 0x2, 0x0};
const char s03e_dword_800CC300[] = {0x1, '\n', 0xfa, 0xba};
const char s03e_dword_800CC304[] = {0x0, 0xf0, 0x2, 0x0};
const char s03e_dword_800CC308[] = {0x1, 0xf, 0x1, 0x0};
const char s03e_dword_800CC30C[] = {0xc, 0x0, 0x4, '\n'};
const char s03e_dword_800CC310[] = {0x0, '2', 0x0, '2'};
const char s03e_dword_800CC314[] = {0x8, '2', 0x19, 0x14};
const char s03e_dword_800CC318[] = {0x2, 0x0, 0x1, 0xd};
const char s03e_dword_800CC31C[] = {'\n', 0x0, '2', 0x0};
const char s03e_dword_800CC320[] = {'2', 0x8, '2', 0x96};
const char s03e_dword_800CC324[] = {0xaa, 0x2, 0x0, 0x3};
const char s03e_dword_800CC328[] = {'\n', 0xff, 0xce, 0xff};
const char s03e_dword_800CC32C[] = {0xce, 0x8, 0xce, 'j'};
const char s03e_dword_800CC330[] = {'V', 0x2, 0x0, 0x16};
const char s03e_dword_800CC334[] = {'\n', 0x0, 0x96, 0xff};
const char s03e_dword_800CC338[] = {'L', 0x8, 0xce, 0xe7};
const char s03e_dword_800CC33C[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC340[] = {'\n', 0x0, 0x96, 0xff};
const char s03e_dword_800CC344[] = {0xf1, 0x8, 0xce, 0xe7};
const char s03e_dword_800CC348[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC34C[] = {'\n', 0x0, 0x96, 0xff};
const char s03e_dword_800CC350[] = {0xfa, 0x2, 0x0, 0x1};
const char s03e_dword_800CC354[] = {'\n', 0xfd, ']', 0x0};
const char s03e_dword_800CC358[] = {'x', 0x2, 0x0, 0x1};
const char s03e_dword_800CC35C[] = {0xf, '\n', 0xff, 0xd8};
const char s03e_dword_800CC360[] = {0xff, 0xd8, 0x1, 0x0};
const char s03e_dword_800CC364[] = {0xc, 0x0, 0x4, '\n'};
const char s03e_dword_800CC368[] = {0x0, 0x19, 0x0, 0x19};
const char s03e_dword_800CC36C[] = {0x8, '2', 0x19, 0x14};
const char s03e_dword_800CC370[] = {0x2, 0x0, 0x1, 0xd};
const char s03e_dword_800CC374[] = {'\n', 0x0, 0x19, 0x0};
const char s03e_dword_800CC378[] = {0x19, 0x8, '2', 0x96};
const char s03e_dword_800CC37C[] = {0xaa, 0x2, 0x0, 0x3};
const char s03e_dword_800CC380[] = {'\n', 0xff, 0xe7, 0xff};
const char s03e_dword_800CC384[] = {0xe7, 0x8, 0xce, 'j'};
const char s03e_dword_800CC388[] = {'V', 0x2, 0x0, 0x16};
const char s03e_dword_800CC38C[] = {'\n', 0x0, 'K', 0xff};
const char s03e_dword_800CC390[] = {0xa6, 0x8, 0xce, 0xe7};
const char s03e_dword_800CC394[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC398[] = {'\n', 0x0, 'K', 0xff};
const char s03e_dword_800CC39C[] = {0xf9, 0x8, 0xce, 0xe7};
const char s03e_dword_800CC3A0[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC3A4[] = {'\n', 0x0, 'K', 0xff};
const char s03e_dword_800CC3A8[] = {0xf9, 0x2, 0x0, 0x1};
const char s03e_dword_800CC3AC[] = {'\n', 0xfe, 0xd4, 0x0};
const char s03e_dword_800CC3B0[] = {'<', 0x2, 0x0, 0x1};
const char s03e_dword_800CC3B4[] = {0xf, '\n', 0xff, 0xc4};
const char s03e_dword_800CC3B8[] = {0xff, 0xc4, 0x1, 0x0};
const char s03e_dword_800CC3BC[] = {0xc, 0x0, 0x4, '\n'};
const char s03e_dword_800CC3C0[] = {0x0, '\n', 0x0, '\n'};
const char s03e_dword_800CC3C4[] = {0x8, '2', 0x19, 0x14};
const char s03e_dword_800CC3C8[] = {0x2, 0x0, 0x1, 0xd};
const char s03e_dword_800CC3CC[] = {'\n', 0x0, '\n', 0x0};
const char s03e_dword_800CC3D0[] = {'\n', 0x8, '2', 0x96};
const char s03e_dword_800CC3D4[] = {0xaa, 0x2, 0x0, 0x3};
const char s03e_dword_800CC3D8[] = {'\n', 0xff, 0xf6, 0xff};
const char s03e_dword_800CC3DC[] = {0xf6, 0x8, 0xce, 'j'};
const char s03e_dword_800CC3E0[] = {'V', 0x2, 0x0, 0x16};
const char s03e_dword_800CC3E4[] = {'\n', 0x0, 0x1e, 0xff};
const char s03e_dword_800CC3E8[] = {0xdc, 0x8, 0xce, 0xe7};
const char s03e_dword_800CC3EC[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC3F0[] = {'\n', 0x0, 0x1e, 0xff};
const char s03e_dword_800CC3F4[] = {0xfe, 0x8, 0xce, 0xe7};
const char s03e_dword_800CC3F8[] = {0xec, 0x2, 0x0, 0x1};
const char s03e_dword_800CC3FC[] = {'\n', 0x0, 0x1e, 0xff};
const char s03e_dword_800CC400[] = {0xfe, 0x2, 0x0, 0x1};
const char s03e_dword_800CC404[] = {'\n', 0xff, 0xb0, 0x0};
const char s03e_dword_800CC408[] = {'\n', 0x2, 0x0, 0x1};
const char s03e_dword_800CC40C[] = {0xf, 0x0, 0x0, 0x0};
const char s03e_dword_800CC410[] = {0x0, 0xf9, 0x3, 0x0};
const char s03e_dword_800CC414[] = {0x9, 0x0, '\\', 0x0};
const char s03e_dword_800CC418[] = {0xaf, 0x1, 0x0, 0xc};
const char s03e_dword_800CC41C[] = {0x0, 0x4, '\n', 0x0};
const char s03e_dword_800CC420[] = {'d', 0x0, 'd', 0x8};
const char s03e_dword_800CC424[] = {'-', '#', 0x14, 0x2};
const char s03e_dword_800CC428[] = {0x0, 0x1, 0xd, '\n'};
const char s03e_dword_800CC42C[] = {0x0, 'd', 0x0, 'd'};
const char s03e_dword_800CC430[] = {0x8, 'F', 'n', 0xaa};
const char s03e_dword_800CC434[] = {0x2, 0x0, 0x3, '\n'};
const char s03e_dword_800CC438[] = {0xff, 0x9c, 0xff, 0x9c};
const char s03e_dword_800CC43C[] = {0x8, 0xba, 0x92, 'V'};
const char s03e_dword_800CC440[] = {0x2, 0x0, 0x16, '\n'};
const char s03e_dword_800CC444[] = {0x1, ',', 0xfe, 0x98};
const char s03e_dword_800CC448[] = {0x8, 0xd3, 0xdd, 0xec};
const char s03e_dword_800CC44C[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC450[] = {0x1, ',', 0xff, 0xe2};
const char s03e_dword_800CC454[] = {0x8, 0xd3, 0xdd, 0xec};
const char s03e_dword_800CC458[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC45C[] = {0x1, ',', 0xff, 0xf4};
const char s03e_dword_800CC460[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC464[] = {0xfa, 0xba, 0x0, 0xf0};
const char s03e_dword_800CC468[] = {0x2, 0x0, 0x1, 0xf};
const char s03e_dword_800CC46C[] = {0x1, 0x0, 0xc, 0x0};
const char s03e_dword_800CC470[] = {0x4, '\n', 0x0, '2'};
const char s03e_dword_800CC474[] = {0x0, '2', 0x8, '-'};
const char s03e_dword_800CC478[] = {'#', 0x14, 0x2, 0x0};
const char s03e_dword_800CC47C[] = {0x1, 0xd, '\n', 0x0};
const char s03e_dword_800CC480[] = {'2', 0x0, '2', 0x8};
const char s03e_dword_800CC484[] = {'F', 'n', 0xaa, 0x2};
const char s03e_dword_800CC488[] = {0x0, 0x3, '\n', 0xff};
const char s03e_dword_800CC48C[] = {0xce, 0xff, 0xce, 0x8};
const char s03e_dword_800CC490[] = {0xba, 0x92, 'V', 0x2};
const char s03e_dword_800CC494[] = {0x0, 0x16, '\n', 0x0};
const char s03e_dword_800CC498[] = {0x96, 0xff, 'L', 0x8};
const char s03e_dword_800CC49C[] = {0xd3, 0xdd, 0xec, 0x2};
const char s03e_dword_800CC4A0[] = {0x0, 0x1, '\n', 0x0};
const char s03e_dword_800CC4A4[] = {0x96, 0xff, 0xf1, 0x8};
const char s03e_dword_800CC4A8[] = {0xd3, 0xdd, 0xec, 0x2};
const char s03e_dword_800CC4AC[] = {0x0, 0x1, '\n', 0x0};
const char s03e_dword_800CC4B0[] = {0x96, 0xff, 0xfa, 0x2};
const char s03e_dword_800CC4B4[] = {0x0, 0x1, '\n', 0xfd};
const char s03e_dword_800CC4B8[] = {']', 0x0, 'x', 0x2};
const char s03e_dword_800CC4BC[] = {0x0, 0x1, 0xf, 0x1};
const char s03e_dword_800CC4C0[] = {0x0, 0xc, 0x0, 0x4};
const char s03e_dword_800CC4C4[] = {'\n', 0x0, 0x19, 0x0};
const char s03e_dword_800CC4C8[] = {0x19, 0x8, '2', 0x19};
const char s03e_dword_800CC4CC[] = {0x14, 0x2, 0x0, 0x1};
const char s03e_dword_800CC4D0[] = {0xd, '\n', 0x0, 0x19};
const char s03e_dword_800CC4D4[] = {0x0, 0x19, 0x8, '2'};
const char s03e_dword_800CC4D8[] = {0x96, 0xaa, 0x2, 0x0};
const char s03e_dword_800CC4DC[] = {0x3, '\n', 0xff, 0xe7};
const char s03e_dword_800CC4E0[] = {0xff, 0xe7, 0x8, 0xce};
const char s03e_dword_800CC4E4[] = {'j', 'V', 0x2, 0x0};
const char s03e_dword_800CC4E8[] = {0x16, '\n', 0x0, 'K'};
const char s03e_dword_800CC4EC[] = {0xff, 0xa6, 0x8, 0xce};
const char s03e_dword_800CC4F0[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC4F4[] = {0x1, '\n', 0x0, 'K'};
const char s03e_dword_800CC4F8[] = {0xff, 0xf9, 0x8, 0xce};
const char s03e_dword_800CC4FC[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC500[] = {0x1, '\n', 0x0, 'K'};
const char s03e_dword_800CC504[] = {0xff, 0xf9, 0x2, 0x0};
const char s03e_dword_800CC508[] = {0x1, '\n', 0xfe, 0xd4};
const char s03e_dword_800CC50C[] = {0x0, '<', 0x2, 0x0};
const char s03e_dword_800CC510[] = {0x1, 0xf, 0x0, 0x0};
const char s03e_dword_800CC514[] = {0x0, 0xf9, 0x3, 0x0};
const char s03e_dword_800CC518[] = {0x9, 0x0, '\\', 0x0};
const char s03e_dword_800CC51C[] = {0xaf, 0x1, 0x0, 0xc};
const char s03e_dword_800CC520[] = {0x0, 0x4, '\n', 0x0};
const char s03e_dword_800CC524[] = {'d', 0x0, 'd', 0x8};
const char s03e_dword_800CC528[] = {0x19, '&', '-', 0x2};
const char s03e_dword_800CC52C[] = {0x0, 0x1, 0xd, '\n'};
const char s03e_dword_800CC530[] = {0x0, 'd', 0x0, 'd'};
const char s03e_dword_800CC534[] = {0x8, 0x96, 'b', 'F'};
const char s03e_dword_800CC538[] = {0x2, 0x0, 0x3, '\n'};
const char s03e_dword_800CC53C[] = {0xff, 0x9c, 0xff, 0x9c};
const char s03e_dword_800CC540[] = {0x8, 'j', 0x9e, 0xba};
const char s03e_dword_800CC544[] = {0x2, 0x0, 0x16, '\n'};
const char s03e_dword_800CC548[] = {0x1, ',', 0xfe, 0x98};
const char s03e_dword_800CC54C[] = {0x8, 0xe7, 0xda, 0xd3};
const char s03e_dword_800CC550[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC554[] = {0x1, ',', 0xff, 0xe2};
const char s03e_dword_800CC558[] = {0x8, 0xe7, 0xda, 0xd3};
const char s03e_dword_800CC55C[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC560[] = {0x1, ',', 0xff, 0xf4};
const char s03e_dword_800CC564[] = {0x2, 0x0, 0x1, '\n'};
const char s03e_dword_800CC568[] = {0xfa, 0xba, 0x0, 0xf0};
const char s03e_dword_800CC56C[] = {0x2, 0x0, 0x1, 0xf};
const char s03e_dword_800CC570[] = {0x1, 0x0, 0xc, 0x0};
const char s03e_dword_800CC574[] = {0x4, '\n', 0x0, '2'};
const char s03e_dword_800CC578[] = {0x0, '2', 0x8, '-'};
const char s03e_dword_800CC57C[] = {'#', 0x14, 0x2, 0x0};
const char s03e_dword_800CC580[] = {0x1, 0xd, '\n', 0x0};
const char s03e_dword_800CC584[] = {'2', 0x0, '2', 0x8};
const char s03e_dword_800CC588[] = {'F', 'n', 0xaa, 0x2};
const char s03e_dword_800CC58C[] = {0x0, 0x3, '\n', 0xff};
const char s03e_dword_800CC590[] = {0xce, 0xff, 0xce, 0x8};
const char s03e_dword_800CC594[] = {0xba, 0x92, 'V', 0x2};
const char s03e_dword_800CC598[] = {0x0, 0x16, '\n', 0x0};
const char s03e_dword_800CC59C[] = {0x96, 0xff, 'L', 0x8};
const char s03e_dword_800CC5A0[] = {0xd3, 0xdd, 0xec, 0x2};
const char s03e_dword_800CC5A4[] = {0x0, 0x1, '\n', 0x0};
const char s03e_dword_800CC5A8[] = {0x96, 0xff, 0xf1, 0x8};
const char s03e_dword_800CC5AC[] = {0xd3, 0xdd, 0xec, 0x2};
const char s03e_dword_800CC5B0[] = {0x0, 0x1, '\n', 0x0};
const char s03e_dword_800CC5B4[] = {0x96, 0xff, 0xfa, 0x2};
const char s03e_dword_800CC5B8[] = {0x0, 0x1, '\n', 0xfd};
const char s03e_dword_800CC5BC[] = {']', 0x0, 'x', 0x2};
const char s03e_dword_800CC5C0[] = {0x0, 0x1, 0xf, 0x1};
const char s03e_dword_800CC5C4[] = {0x0, 0xc, 0x0, 0x4};
const char s03e_dword_800CC5C8[] = {'\n', 0x0, 0x19, 0x0};
const char s03e_dword_800CC5CC[] = {0x19, 0x8, '2', 0x19};
const char s03e_dword_800CC5D0[] = {0x14, 0x2, 0x0, 0x1};
const char s03e_dword_800CC5D4[] = {0xd, '\n', 0x0, 0x19};
const char s03e_dword_800CC5D8[] = {0x0, 0x19, 0x8, '2'};
const char s03e_dword_800CC5DC[] = {0x96, 0xaa, 0x2, 0x0};
const char s03e_dword_800CC5E0[] = {0x3, '\n', 0xff, 0xe7};
const char s03e_dword_800CC5E4[] = {0xff, 0xe7, 0x8, 0xce};
const char s03e_dword_800CC5E8[] = {'j', 'V', 0x2, 0x0};
const char s03e_dword_800CC5EC[] = {0x16, '\n', 0x0, 'K'};
const char s03e_dword_800CC5F0[] = {0xff, 0xa6, 0x8, 0xce};
const char s03e_dword_800CC5F4[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC5F8[] = {0x1, '\n', 0x0, 'K'};
const char s03e_dword_800CC5FC[] = {0xff, 0xf9, 0x8, 0xce};
const char s03e_dword_800CC600[] = {0xe7, 0xec, 0x2, 0x0};
const char s03e_dword_800CC604[] = {0x1, '\n', 0x0, 'K'};
const char s03e_dword_800CC608[] = {0xff, 0xf9, 0x2, 0x0};
const char s03e_dword_800CC60C[] = {0x1, '\n', 0xfe, 0xd4};
const char s03e_dword_800CC610[] = {0x0, '<', 0x2, 0x0};
const char s03e_dword_800CC614[] = {0x1, 0xf, 0x0, 0x0};
const char s03e_dword_800CC618[] = {0x0, 0x4, 0x1, 0x0};
const char s03e_dword_800CC61C[] = {0x5, 0x2, 0x0, 0x1};
const char s03e_dword_800CC620[] = {0xf, 0x0, 0x0, 0x0};
const int s03e_dword_800CC624 = 0x800C9D38;
const int s03e_dword_800CC628 = 0x800C9D48;
const int s03e_dword_800CC62C = 0x800C9D60;
const int s03e_dword_800CC630 = 0x800C9D70;
const int s03e_dword_800CC634 = 0x800C9D88;
const int s03e_dword_800CC638 = 0x800C9D98;
const int s03e_dword_800CC63C = 0x800C9DB0;
const char s03e_dword_800CC640[] = {0x0, 0x0, 0x0, 0x0};
const int s03e_dword_800CC644 = 0x800C9E70;
const int s03e_dword_800CC648 = 0x800C9E80;
const int s03e_dword_800CC64C = 0x800C9E98;
const int s03e_dword_800CC650 = 0x800C9EA8;
const int s03e_dword_800CC654 = 0x800C9EC0;
const int s03e_dword_800CC658 = 0x800C9ED0;
const int s03e_dword_800CC65C = 0x800C9EE8;
const char s03e_dword_800CC660[] = {0x0, 0x0, 0x0, 0x0};
const int s03e_dword_800CC664 = 0x800C9FA8;
const int s03e_dword_800CC668 = 0x800C9FBC;
const int s03e_dword_800CC66C = 0x800C9FD4;
const int s03e_dword_800CC670 = 0x800C9FE4;
const int s03e_dword_800CC674 = 0x800C9FFC;
const int s03e_dword_800CC678 = 0x800CA00C;
const int s03e_dword_800CC67C = 0x800CA024;
const char s03e_dword_800CC680[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_dword_800CC684[] = {0xf4, 0x1, 0x0, 0x0};
const char s03e_dword_800CC688[] = {'s', 'p', 'a', 'r'};
const char s03e_dword_800CC68C[] = {'k', '2', '.', 'c'};
const char s03e_dword_800CC690[] = {0x0, 0x81, 'J', 0x81};
const char aFadeioC[] = {'f', 'a', 'd', 'e', 'i', 'o', '.', 'c', 0x0, 0x90, 0x1, 0x90};
const char aCinemaC[] = {'c', 'i', 'n', 'e', 'm', 'a', '.', 'c', 0x0, 0x90, 0x1, 0x90};
const char s03e_dword_800CC6AC[] = {'c', 'a', 't', '_'};
const char s03e_dword_800CC6B0[] = {'i', 'n', '.', 'c'};
const char s03e_dword_800CC6B4[] = {0x0, 0x90, 0x89, 0x90};
const char s03e_dword_800CC6B8[] = {0x0, 0x0, 0x0, 0x0};
const char s03e_dword_800CC6BC[] = {0xe5, 0x96, 0xe6, 0x96};
