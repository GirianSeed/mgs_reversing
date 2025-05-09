#include "common.h"
#include "charadef.h"

#include "../_shared/enemy/asioto.h"
#include "../_shared/takabe/cinema.h"
#include "../_shared/animal/doll/doll.h"
#include "../s12c/takabe/findtrap.h"
#include "../_shared/enemy/wall.h"
#include "../_shared/game/evpanel.h"
#include "../_shared/okajima/uji.h"
#include "../_shared/takabe/dymc_seg.h"
#include "../_shared/game/lamp.h"
#include "../_shared/takabe/mosaic.h"
#include "../_shared/okajima/guncame.h"
#include "../_shared/takabe/fadeio.h"
#include "../_shared/takabe/gas_efct.h"
#include "../_shared/okajima/hiyoko.h"
#include "../_shared/game/point.h"
#include "../_shared/game/pad.h"
#include "../_shared/chara/others/intr_cam.h"
#include "../_shared/takabe/cat_in.h"
#include "../_shared/chara/others/motse.h"
#include "okajima/bullet.h"
#include "../_shared/enemy/demokage.h"
#include "../_shared/takabe/focus.h"
#include "../_shared/okajima/blur.h"
#include "../_shared/takabe/sepia.h"
#include "../_shared/okajima/red_alrt.h"
#include "../_shared/takabe/gas_efct.h"
#include "../_shared/okajima/blurpure.h"
#include "../_shared/takabe/telop.h"

CHARA _StageCharacterEntries[] = 
{
    { CHARA_ASIOTO, NewAsioto_800C3E08 },
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_DOLL, NewDoll_800DCD78 },
    { CHARA_FIND_TRAP, NewFindTrap_800D77DC },
    { CHARA_WALL, NewWall_800C3718 },
    { CHARA_ELEVATOR_PANEL, NewEvPanel_800C4AD8 },
    { CHARA_UJI, NewUji_800C42F8 },
    { CHARA_DYNAMIC_SEGMENT, NewDymcSeg_800C4BCC },
    { CHARA_LAMP, NewLamp_800C3B34 },
    { CHARA_MOSAIC, NewMosaic_800DCABC },
    { CHARA_GUNCAME, NewGunCame_800C9190 },
    { CHARA_FADE_IN_OUT, NewFadeIo_800C42BC },
    { CHARA_GAS_EFFECT, NewGasEffect_800C4E5C },
    { CHARA_HIYOKO, NewHiyoko_800D018C },
    { CHARA_POINT, NewPoint_800C5AB4 },
    { CHARA_PAD, NewPad_800C37EC },
    { CHARA_INTR_CAM, NewIntrudeCamera },
    { CHARA_CAT_IN, NewZoom_800DFA88 },
    { CHARA_MOTION_SE, NewMotionSoundEffect },
    { CHARA_FADEIO_0003, NewFadeIo_800C4224 },
    { CHARA_FADEIO_0004, NewFadeIo_800C4224 },
    { CHARA_BULLET, (NEWCHARA)NewBulletEx },
    { CHARA_DEMOKAGE, (NEWCHARA)NewDemoKage_800C48A4 },
    { CHARA_FOCUS, NewFocus_800CEFF8 },
    { CHARA_BLOOD_BL, NewBlur_800CD530 },
    { CHARA_SEPIA_0028, (NEWCHARA)NewSepia_800C5214 },
    { CHARA_RED_ALERT_0037, (NEWCHARA)NewRedAlert2_800C4E84 },
    { CHARA_RED_ALERT_0038, (NEWCHARA)RedAlert_800C4F48 },
    { CHARA_GAS_EFCT, (NEWCHARA)NewGasEffect_800C4EF8 },
    { CHARA_BLURPURE, (NEWCHARA)NewBlurPure_800C54D4 },
    { CHARA_TELOP_004C, (NEWCHARA)NewTelop2_800DDC60 },
    { 0, NULL }
};
