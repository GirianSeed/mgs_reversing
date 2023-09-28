#include "linker.h"
#include "libgcl/libgcl.h"
#include "libgv/libgv.h"
#include "libhzd/libhzd.h"

typedef struct DymcSegWork
{
    GV_ACT   actor;
    int      map;
    int      name;
    HZD_HDL *hzd;
    HZD_SEG  seg;
} DymcSegWork;

extern int GM_CurrentMap_800AB9B0;

extern const char     s16b_dword_800C588C[]; // = "dymc_seg.c"
extern unsigned short s16b_dword_800C3254[]; // = {0xD182, 0x006B}

int s16b_800C43A4(char param);
int s16b_800C44DC(unsigned short name, int hash_count, unsigned short *hashes);

#define EXEC_LEVEL 5

#pragma INCLUDE_ASM("asm/overlays/s16b/s16b_800C4820.s")
#pragma INCLUDE_ASM("asm/overlays/s16b/s16b_800C4848.s")

void DymcSegAct_800C4A44(DymcSegWork *work)
{
    GM_CurrentMap_800AB9B0 = work->map;

    if (s16b_800C44DC(work->name, 2, s16b_dword_800C3254) == 1)
    {
        GV_DestroyActor_800151C8(&work->actor);
    }
}

void DymcSegDie_800C4A98(DymcSegWork *work)
{
    HZD_DequeueDynamicSegment2_8006FE44(work->hzd, &work->seg);
}

int DymcSegGetResources_800C4AC0(DymcSegWork *work, int name, int where)
{
    SVECTOR  min, max;
    int      height;
    int      flags;
    HZD_SEG *seg;
    SVECTOR *vec;

    GM_CurrentMap_800AB9B0 = where;

    work->map = where;
    work->name = name;

    if (GCL_GetParam_80020968('p'))
    {
        GCL_GetSV_80020A14(GCL_Get_Param_Result_80020AA4(), &min);
        GCL_GetSV_80020A14(GCL_Get_Param_Result_80020AA4(), &max);
    }

    height = s16b_800C43A4('h');
    flags = s16b_800C43A4('s');

    seg = &work->seg;

    vec = &min;
    seg->p1.x = vec->vx;
    seg->p1.y = vec->vy;
    seg->p1.z = vec->vz;
    seg->p1.h = height;

    vec = &max;
    seg->p2.x = vec->vx;
    seg->p2.y = vec->vy;
    seg->p2.z = vec->vz;
    seg->p2.h = height;

    HZD_SetDynamicSegment_8006FEE4(seg, seg);

    work->hzd = Map_FromId_800314C0(where)->field_8_hzd;
    HZD_QueueDynamicSegment2_8006FDDC(work->hzd, seg, flags);
    return 0;
}

GV_ACT *NewDymcSeg_800C4BCC(int name, int where, int argc, char **argv)
{
    DymcSegWork *work;

    work = (DymcSegWork *)GV_NewActor_800150E4(EXEC_LEVEL, sizeof(DymcSegWork));
    if (work != NULL)
    {
        GV_SetNamedActor_8001514C(&work->actor, (TActorFunction)DymcSegAct_800C4A44, (TActorFunction)DymcSegDie_800C4A98, s16b_dword_800C588C);

        if (DymcSegGetResources_800C4AC0(work, name, where) < 0)
        {
            GV_DestroyActor_800151C8(&work->actor);
            return NULL;
        }
    }

    return &work->actor;
}