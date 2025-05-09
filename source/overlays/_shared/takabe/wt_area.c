#include "wt_area.h"

#include "common.h"
#include "libgv/libgv.h"
#include "libdg/libdg.h"
#include "libgcl/libgcl.h"
#include "game/camera.h"
#include "game/game.h"
#include "takabe/thing.h"

extern CONTROL         *tenage_ctrls_800BDD30[16];
extern int              tenage_ctrls_count_800BDD70;
extern UnkCameraStruct  gUnkCameraStruct_800B77B8;

extern void NewSplash2_800DB4E0( int angy, SVECTOR *pos, int noripple );
extern void *NewRipple_800D7F30( MATRIX *, int );
extern void *NewWaterView2(int name, int where, SVECTOR *bounds, CVECTOR *color);

/*---------------------------------------------------------------------------*/

typedef struct _Work
{
    GV_ACT actor;
    int where;            //0x20
    int name;             //0x24
    SVECTOR bound[2];     //0x28
    CVECTOR color;        //0x38
    int snake_catch;      //0x3C
    int splash_flag;      //0x40
    int field_44;         //0x44
    int field_48;         //0x48
    int field_4C;         //0x4C
    int proc_id;          //0x50
} Work;

#define EXEC_LEVEL GV_ACTOR_LEVEL5

/*---------------------------------------------------------------------------*/

//OPEN_MES, CLOSE_MES
static unsigned short mes_list[] = { 0x43D3, 0x4235 };

static int BoundInCheck( SVECTOR *bound, SVECTOR *check )
{
    if ( check->vx > bound[0].vx && check->vx < bound[1].vx &&
         check->vy > bound[0].vy && check->vy < bound[1].vy &&
         check->vz > bound[0].vz && check->vz < bound[1].vz )
    {
        return 1;
    }
    return 0;
}

/*---------------------------------------------------------------------------*/

static void ExecProc( int proc_id, int mode )
{
    GCL_ARGS    args ;
    long        data = mode ;
    if ( proc_id == 0 ) return ;
    args.argc = 1 ;
    args.argv = &data ;
    GCL_ExecProc( proc_id, &args );
}

/*---------------------------------------------------------------------------*/

static void Act( Work *work )
{
    static SVECTOR  mouth_offset = {0,0,100};
    //SVECTOR       pos, snake_pos ;
    SVECTOR     snake_pos ;
    CONTROL   **ctrl;
    int         flag ;
    MATRIX      mtx;
    MATRIX     *eye;
    int         i;
    //OPERATOR() ;
    mtx = DG_ZeroMatrix;

    /* メッセージチェック */
    switch ( THING_Msg_CheckMessage( ( unsigned short )work->name, 2, mes_list ) ){
      case 0:
        /* 水しぶき有効 */
        work->splash_flag = 1 ;
        break ;
      case 1:
        /* 水しぶき無効 */
        work->splash_flag = 0 ;
        break ;
    }

    if ( GM_PlayerControl == NULL ) return ;

    flag = BoundInCheck( work->bound, &GM_PlayerControl->mov );

    if ( work->snake_catch == 0  )
    {
        if ( flag )
        {
            /* スネーク中心部の水中バウンドチェック */
            snake_pos = GM_PlayerControl->mov ;
            snake_pos.vy = work->bound[1].vy; /* 水面に座標を合わせる */
            if ( work->splash_flag )
            {
                NewSplash2_800DB4E0( GM_PlayerControl->rot.vy + 2048, &snake_pos, 0 );
                GM_SeSet( &snake_pos, 0xB0 );
                if ( work->field_44 == NULL )
                {
                    GM_SetNoise(0x64, 2, &snake_pos );
                }
                work->splash_flag = 0;
            }
            else
            {
                GM_SeSet( &snake_pos, 0xB1 );
            }
            work->snake_catch = 1;
            GM_PlayerStatus |= PLAYER_IN_THE_WATER;
        }

    }
    else
    {
        if ( !flag )
        {
            /* スネーク中心部の水中バウンドチェック */
            snake_pos = GM_PlayerControl->mov ;
            snake_pos.vy = work->bound[1].vy; /* 水面に座標を合わせる */
            GM_SeSet( &snake_pos, 0xB1 );
            if ( work->field_44 == NULL )
            {
                GM_SetNoise(0x64, 2, &snake_pos );
            }
            work->snake_catch = 0;
            GM_PlayerStatus &= ~( PLAYER_IN_THE_WATER );
        }

    }
    snake_pos = GM_PlayerControl->mov ;

    if ( GM_PlayerStatus & 2 )
    {
        snake_pos = gUnkCameraStruct_800B77B8.eye;
    }
    else
    {
        if ( GM_PlayerStatus & 0x40 )
        {
            snake_pos.vy += 0x140;
        }
        else
        {
            snake_pos.vy = GM_PlayerBody->objs->objs[6].world.m[3][3];
        }
    }

    flag = BoundInCheck( work->bound, &snake_pos );

    if ( !work->field_48 )
    {
        if ( flag )
        {
            ExecProc( work->proc_id, 0x2A74 );
            work->field_48 = 1;
        }
    }
    else
    {
        if ( !flag && !GM_GameOverTimer )
        {
            DG_SetPos2( &snake_pos, &GM_PlayerControl->rot );
            DG_PutVector( &mouth_offset, &snake_pos, 1 );
            GM_SeSet( &snake_pos, 0xB3 );
            ExecProc( work->proc_id, 0xF26E );
            work->field_48 = 0;
        }
    }

    eye = &DG_Chanl(0)->field_30_eye;
    snake_pos.vx = eye->t[0];
    snake_pos.vy = eye->t[1];
    snake_pos.vz = eye->t[2];
    flag = BoundInCheck( work->bound, &snake_pos );

    if ( !work->field_4C )
    {
        if ( flag )
        {
            GM_SeSet2( 0, 0x3F, 0xB2 );
            ExecProc( work->proc_id, 0xF6D8 );
            work->field_4C = 1;
            if ( !(GM_PlayerStatus & 2) )
            {
                DG_FrameRate = 3;
            }
        }
    }
    else
    {
        if ( !flag )
        {
            GM_SetSound( 0xff0000fe, SD_ASYNC );
            ExecProc( work->proc_id, 0xBED3 );
            work->field_4C = 0;
            DG_FrameRate = 2;
        }
    }

    if ( !tenage_ctrls_count_800BDD70 ) return;

    ctrl = tenage_ctrls_800BDD30;
    for ( i = 16 ; i > 0 ; --i, ctrl++ )
    {
        if (*ctrl)
        {
            if ( BoundInCheck( work->bound, &( (*ctrl)->mov  ) ) )
            {
                mtx.t[0] = (*ctrl)->mov.vx;
                mtx.t[1] = work->bound[1].vy;
                mtx.t[2] = (*ctrl)->mov.vz;
                NewRipple_800D7F30( &mtx, 2048 );
                (*ctrl)->mov.pad = 1;
            }
        }
    }
}

/*---------------------------------------------------------------------------*/

static void Die( void )
{
}

/*---------------------------------------------------------------------------*/

static int GetResources( Work *work, int name, int where )
{
    work->color.r = 0x64;
    work->color.g = 0x80;
    work->color.b = 0x78;

    if ( GCL_GetOption( 'b' ) )
    {
        GCL_StrToSV( GCL_GetParamResult(), &work->bound[0] );
        GCL_StrToSV( GCL_GetParamResult(), &work->bound[1] );
    }

    if ( GCL_GetOption( 'c' ) )
    {
        work->color.r = GCL_StrToInt(GCL_GetParamResult());
        work->color.g = GCL_StrToInt(GCL_GetParamResult());
        work->color.b = GCL_StrToInt(GCL_GetParamResult());
    }

    work->field_44 = THING_Gcl_GetInt('s');
    work->proc_id  = THING_Gcl_GetInt('e');

    NewWaterView2( name, where, work->bound, &work->color );
    return 0;
}

/*---------------------------------------------------------------------------*/

void *NewWaterArea(int name, int where, int argc, char **argv)
{
    Work *work ;

    work = GV_NewActor( EXEC_LEVEL, sizeof( Work ) ) ;
    if ( work != NULL ) {
        GV_SetNamedActor( &( work->actor ), Act, Die, "wt_area.c" );
        if ( GetResources( work, name, where ) < 0 )
        {
            GV_DestroyActor( &( work->actor ) );
            return NULL;
        }
        work->where = where;
        work->name  = name;
    }
    return (void *)work;
}
