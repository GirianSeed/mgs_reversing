#include "common.h"
#include "charadef.h"

CHARA _StageCharacterEntries[] =
{
    { 0x51C6, (NEWCHARA)0x800D4344 },
    { 0x7A05, (NEWCHARA)0x800D3D38 },
    { 0x4170, (NEWCHARA)0x800C4204 },
    { 0xEC77, (NEWCHARA)0x800C7F8C },
    { 0xB103, (NEWCHARA)0x800D3F68 },
    { 0x92BC, (NEWCHARA)0x800C867C },
    { 0xA12E, (NEWCHARA)0x800D355C },
    { 0x1AD3, (NEWCHARA)0x800C3F94 },
    { 0x18E3, (NEWCHARA)0x800C70FC },
    { 0xA6F5, (NEWCHARA)0x800D43D8 },
    { 0x5F0E, (NEWCHARA)0x800D20D8 },
    { 0xA60D, (NEWCHARA)0x800C94D8 },
    { 0x73EA, (NEWCHARA)0x800C7A64 },
    { 0xB959, (NEWCHARA)0x800C588C },
    { 0x58F0, (NEWCHARA)0x800D2674 },
    { 0, NULL }
};

int SECTION("overlay.bss") s11i_dword_800D5944;
