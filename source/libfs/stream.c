#include "libfs.h"

#include <stdio.h>
#include <sys/types.h>
#include <libapi.h>
#include <libetc.h>
#include <libcd.h>

#include "common.h"
#include "mts/mts.h"
#include "sd/sd_cli.h"

extern int          fs_stream_ref_count_800B5298;
extern int          fs_dword_800B529C;
extern int          fs_dword_800B52A0;
extern void         *fs_stream_heap_800B52A4;
extern char         *fs_stream_heap_end_800B52A8;
extern int          fs_stream_heapSize_800B52AC;
extern void         *fs_dword_800B52B0;
extern char         *fs_ptr_800B52B4;
extern int          *fs_ptr_800B52B8;
extern char         *fs_ptr_800B52BC;
extern int          fs_stream_task_state_800B52C0;

STATIC int  fs_stream_tick_start_8009D510 = -1;
STATIC int  fs_dword_8009D514 = 0;
STATIC int  fs_stream_is_force_stop_8009D518 = 0;
STATIC int  fs_stream_end_flag_8009D51C = 1;
STATIC int *fs_dword_8009D520 = NULL;

STATIC int FS_800239E8( CDBIOS_TASK *task )
{
    char *charPtr1, *charPtr2;
    char *streamHeap, *streamHeapEnd;
    int  *memcpySrc, *memcpyDst;
    int   ptrDiff1, ptrDiff2, ptrDiff3;
    int   heapOffset;
    int   retval;

    retval = 1;
    fs_ptr_800B52B8 = task->buffer + task->field_C * 4;

    if (fs_stream_is_force_stop_8009D518 == 0 && fs_stream_end_flag_8009D51C == 0)
    {
        charPtr1 = fs_ptr_800B52BC;
        for (;; fs_ptr_800B52BC = charPtr1)
        {
            heapOffset = *(int *)charPtr1 >> 8;
            charPtr2 = charPtr1 + heapOffset;

            if ((char *)&fs_ptr_800B52B8[-1] >= charPtr2)
            {
                charPtr1 = charPtr2;
                if (*charPtr2 != 0xF0)
                {
                    continue;
                }
                fs_stream_end_flag_8009D51C = 1;
                fs_ptr_800B52BC = charPtr2;
                goto exit;
            }

            if (fs_stream_heap_end_800B52A8 >= charPtr2 &&
                fs_stream_heap_end_800B52A8 >= (char *)(fs_ptr_800B52B8 + 2048 / sizeof(int)))
            {
                break;
            }

            ptrDiff1 = (char *)fs_stream_heap_800B52A4 + heapOffset - charPtr1;
            if (ptrDiff1 < 0)
            {
                ptrDiff1 = ptrDiff1 + fs_stream_heapSize_800B52AC;
            }

            ptrDiff2 = (char *)fs_ptr_800B52B4 - charPtr1;
            if (ptrDiff2 < 0)
            {
                ptrDiff2 += fs_stream_heapSize_800B52AC;
            }

            if (ptrDiff2 < ptrDiff1)
            {
                fs_dword_8009D520 = (int *)charPtr1;
                goto exit;
            }

            memcpyDst = fs_stream_heap_800B52A4;
            memcpySrc = (int *)charPtr1;
            while (memcpySrc < fs_ptr_800B52B8)
            {
                *memcpyDst = *memcpySrc;
                memcpySrc++;
                memcpyDst++;
            }

            streamHeap = fs_stream_heap_800B52A4;
            task->buffer = memcpyDst;

            *(int *)charPtr1 = -1;
            retval = 2;

            fs_ptr_800B52B8 = memcpyDst;
            fs_stream_heap_end_800B52A8 =
                (char *)memcpyDst + ((fs_stream_heapSize_800B52AC - ((char *)memcpyDst - streamHeap)) & ~0x7FF);
            fs_ptr_800B52BC = streamHeap;
            goto skip_heap_end_adjustment;
        }

        if ((char *)fs_ptr_800B52B8 >= fs_stream_heap_end_800B52A8)
        {
            streamHeapEnd = (char *)fs_stream_heap_800B52A4 + fs_stream_heapSize_800B52AC;
            if ((int)fs_ptr_800B52B8 < (unsigned)streamHeapEnd)
            {
                *fs_ptr_800B52B8 = -1;
            }

            retval = 2;
            fs_stream_heap_end_800B52A8 = streamHeapEnd;

            task->buffer = fs_stream_heap_800B52A4;
            fs_ptr_800B52BC = fs_stream_heap_800B52A4;
            fs_ptr_800B52B8 = fs_stream_heap_800B52A4;
        }

    skip_heap_end_adjustment:
        ptrDiff3 = -(int)fs_ptr_800B52B8 + (int)fs_ptr_800B52B4;
        if (ptrDiff3 < 0)
        {
            ptrDiff3 = ptrDiff3 + fs_stream_heapSize_800B52AC;
        }
        if (ptrDiff3 > 2048)
        {
            return retval;
        }
    }

exit:
    fs_dword_800B529C = 0;
    fs_dword_800B52A0 = task->sector + 1;
    return 0;
}

STATIC void FS_80023C40( void )
{
    int temp_a0;
    int var_v1;
    int* temp_v0;
    int* var_a1;
    int* var_v1_2;
    int new_var;

    if (fs_dword_8009D520 != 0)
    {
        temp_v0 = fs_dword_8009D520;

        var_v1 = (int)(fs_stream_heap_800B52A4 + (temp_v0[0] >> 8)) - (int)temp_v0;

        if (var_v1 < 0)
        {
            var_v1 += fs_stream_heapSize_800B52AC;
        }

        temp_a0 = (int)fs_ptr_800B52B4 - (int)temp_v0;

        if (temp_a0 < 0)
        {
            temp_a0 += fs_stream_heapSize_800B52AC;
        }

        if (temp_a0 < var_v1)
        {
            return;
        }

        SwEnterCriticalSection();

        var_a1 = fs_stream_heap_800B52A4;
        var_v1_2 = temp_v0;

        while (var_v1_2 < (int *)fs_ptr_800B52B8)
        {
            *var_a1++ = *var_v1_2++;
        }

        fs_ptr_800B52B8 = var_a1;
        *temp_v0 = -1;
        fs_dword_8009D520 = NULL;
        new_var = (fs_stream_heapSize_800B52AC - ((int)var_a1 - (int)fs_stream_heap_800B52A4)) & ~0x7FF;
        fs_stream_heap_end_800B52A8 = (char *)var_a1 + new_var;
        fs_ptr_800B52BC = fs_stream_heap_800B52A4;

        SwExitCriticalSection();
    }

    fs_dword_800B529C = 1;
    CDBIOS_ReadRequest(fs_ptr_800B52B8, fs_dword_800B52A0, 0, &FS_800239E8);
}

void FS_StreamTaskStart( int param_1 )
{
    fs_stream_end_flag_8009D51C = 0;
    fs_stream_is_force_stop_8009D518 = 0;

    fs_dword_800B52A0 = param_1;

    fs_stream_tick_start_8009D510 = -1;

    fs_dword_8009D514 = 0;
    fs_dword_8009D520 = NULL;

    fs_stream_task_state_800B52C0 = -1;

    fs_ptr_800B52B4 = fs_stream_heap_800B52A4;
    fs_ptr_800B52BC = fs_stream_heap_800B52A4;
    fs_ptr_800B52B8 = fs_stream_heap_800B52A4;

    FS_80023C40();
}

int FS_StreamTaskState( void )
{
    return fs_stream_task_state_800B52C0;
}

void FS_StreamTaskInit( void )
{
    /* do nothing */
}

int FS_StreamSync( void )
{
    int temp_t2;
    int temp_t3;
    int temp_v0;
    int temp_v1_2;
    int var_a0_2;
    char *var_a0;

    temp_t2 = fs_dword_800B529C;
    temp_t3 = fs_stream_end_flag_8009D51C;

    if ((temp_t3 != 0) || (fs_stream_is_force_stop_8009D518 != 0))
    {
        fs_stream_task_state_800B52C0 = 0;
        return 0;
    }

    if (fs_stream_task_state_800B52C0 == -1)
    {
        if (temp_t2 == 1)
        {
            return 1;
        }

        fs_stream_task_state_800B52C0 = 1;
        fs_dword_800B52B0 = fs_stream_heap_800B52A4;
    }

    var_a0 = fs_ptr_800B52B4;

    while (var_a0 != fs_ptr_800B52BC)
    {
        temp_v0 = *(int *)var_a0;
        temp_v1_2 = temp_v0 & 0xFF;
        temp_v0 >>= 8;

        if (temp_v1_2 == 0xFF)
        {
            var_a0 = fs_stream_heap_800B52A4;
        }
        else if (temp_v1_2 == 0)
        {
            var_a0 += temp_v0;

            if (var_a0 == (fs_stream_heap_800B52A4 + fs_stream_heapSize_800B52AC))
            {
                var_a0 = fs_stream_heap_800B52A4;
            }
        }
        else
        {
            break;
        }
    }

    fs_ptr_800B52B4 = var_a0;

    if (temp_t2 == 0)
    {
        if (temp_t3 == 0)
        {
            var_a0_2 = (char *)fs_ptr_800B52B8 - var_a0;

            if (var_a0_2 < 0)
            {
                var_a0_2 += fs_stream_heapSize_800B52AC;
            }

            if (var_a0_2 < ((fs_stream_heapSize_800B52AC * 2) / 3))
            {
                FS_80023C40();
            }
        }
    }

    return 1;
}

void FS_StreamCD( void )
{
    /* do nothing */
}

// warning/bug here is probably in OG code, unless this is an incorrect match
int FS_StreamGetTop( int is_demo )
{
    int file_id;

#ifndef NO_WARNING_WORKAROUNDS
    file_id = *&file_id;
#endif

    switch (is_demo)
    {
    case 0:
        file_id = FS_FILEID_VOX;
        break;
    case 1:
        file_id = FS_FILEID_DEMO;
        break;
    }
    return fs_file_info[file_id].pos;
}

int FS_StreamInit( void *pHeap, int heapSize )
{
    fs_stream_heap_800B52A4 = pHeap;
    fs_stream_heapSize_800B52AC = heapSize;
    fs_stream_heap_end_800B52A8 = pHeap + heapSize;
    printf("stream init %X %X\n", (unsigned int)pHeap, heapSize);
    fs_stream_ref_count_800B5298 = 0;
    return 1;
}

void FS_StreamStop( void )
{
    fs_stream_is_force_stop_8009D518 = 1;
    fs_stream_end_flag_8009D51C = 1;
    fs_stream_task_state_800B52C0 = 0;
    CDBIOS_ForceStop();
}

void FS_StreamOpen( void )
{
    mts_lock_sem(1);
    ++fs_stream_ref_count_800B5298;
    mts_unlock_sem(1);
}

void FS_StreamClose( void )
{
    mts_lock_sem(1);
    --fs_stream_ref_count_800B5298;
    mts_unlock_sem(1);
}

int FS_StreamIsEnd( void )
{
    return fs_stream_ref_count_800B5298 == 0;
}

void *FS_StreamGetData( int param_1 )
{
    char *ptr;
    int type;
    int size;

    if (fs_stream_is_force_stop_8009D518 != 0)
    {
        return NULL;
    }

    for (ptr = fs_ptr_800B52B4; ptr != fs_ptr_800B52BC;)
    {
        type = *(int*)ptr & 0xFF;
        size = *(int*)ptr >> 8;

        if (type == 0xff)
        {
            ptr = fs_stream_heap_800B52A4;
        }
        else
        {
            if (type == param_1)
            {
                *ptr = type | 0x80;
                return ptr + 4;
            }

            ptr += size;

            if (ptr >= (char *)fs_stream_heap_800B52A4 + fs_stream_heapSize_800B52AC)
            {
                ptr = fs_stream_heap_800B52A4;
            }
        }
    }

    return NULL;
}

int FS_StreamGetSize( int *ptr )
{
    return ptr[-1] >> 8;
}

void FS_StreamUngetData( int addr )
{
    int *ptr = (int*)(addr - 4);
    int val = *ptr;

    if ((val & 0x80) != 0)
    {
        *(char *)ptr = val & ~0x80;
    }
}

void FS_StreamClear( void *stream )
{
    ((int *)stream)[-1] &= ~0xff;
}

void FS_StreamClearType( void *stream, int find )
{
    char *ptr;
    char *ptr2;
    int size;
    int type;

    if (fs_stream_is_force_stop_8009D518 != 0)
    {
        return;
    }

    ptr = fs_ptr_800B52B4;
    ptr2 = (char *)stream - 4;

    while ((ptr != ptr2) && (ptr != fs_ptr_800B52BC))
    {
        size = *(int *)ptr >> 8;
        type = *(int *)ptr & 0xF;

        if (type == find)
        {
            ptr[0] = 0;
            printf("clear %X\n", size);
        }

        ptr += size;

        if (ptr == (fs_stream_heap_800B52A4 + fs_stream_heapSize_800B52AC))
        {
            ptr = fs_stream_heap_800B52A4;
        }
    }
}

void FS_800242A4( void )
{
    char *ptr;
    int type;
    int size;

    ptr = fs_ptr_800B52B4;

    printf("now_data_top %X loaded_header %X\n", (unsigned int)ptr, (unsigned int)fs_ptr_800B52BC);
    printf("Tick %d\n", FS_StreamGetTick());

    while (ptr != fs_ptr_800B52BC)
    {
        type = *(int *)ptr & 0xFF;
        size = *(int *)ptr >> 8;

        if (type == 0xFF)
        {
            ptr = fs_stream_heap_800B52A4;
        }
        else
        {
            if (type == 5)
            {
                printf("%08X TYPE %X size %d time %d\n", (unsigned int)ptr, 5, size, *(int *)(ptr + 4));
            }
            else
            {
                printf("%08X TYPE %X size %d\n", (unsigned int)ptr, type, size);
            }

            ptr += size;

            if (ptr == (fs_stream_heap_800B52A4 + fs_stream_heapSize_800B52AC))
            {
                ptr = fs_stream_heap_800B52A4;
            }
        }
    }
}

int FS_StreamGetEndFlag( void )
{
    return fs_stream_end_flag_8009D51C;
}

int FS_StreamIsForceStop( void )
{
    return fs_stream_is_force_stop_8009D518;
}

// TODO: the var might be part of a struct and the code
// takes a ptr to that struct, unknown currently
static inline int *GetTicksPtr( void )
{
    return &fs_stream_tick_start_8009D510;
}

void FS_StreamTickStart( void )
{
    *GetTicksPtr() = VSync(-1);
}

// for some reason no ptr access here
void FS_StreamSoundMode( void )
{
    fs_stream_tick_start_8009D510 = -1;
    fs_dword_8009D514 = 1;
}

int FS_StreamGetTick( void )
{
    int current = mts_get_tick_count();
    int iVar2;

    if (fs_dword_8009D514 != 0)
    {
        iVar2 = get_str_counter();

        if (iVar2 < 0)
        {
            if (fs_stream_tick_start_8009D510 < 0)
            {
                return -1;
            }

            return current - fs_stream_tick_start_8009D510 + fs_dword_8009D514;
        }

        fs_stream_tick_start_8009D510 = current;
        fs_dword_8009D514 = (iVar2 * 64) / 105 + 1;
        return (iVar2 * 64) / 105 + 1;
    }

    return current - fs_stream_tick_start_8009D510;
}
