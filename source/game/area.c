#include "common.h"
#include "menu/menuman.h"
#include "game.h"

extern AreaHistory      gAreaHistory_800B5850;

STATIC char GM_CurrentStageName[8] = {};

short SECTION(".sbss")  sCurrentAreaName_800AB9C0;
short SECTION(".sbss")  pad3_;
short SECTION(".sbss")  pad3;

//------------------------------------------------------------------------------

void GM_InitArea(void)
{
    gAreaHistory_800B5850 = ( AreaHistory ){{ 0 }};
}

void GM_GetAreaHistory(AreaHistory *pHistoryCopy)
{
    *pHistoryCopy = gAreaHistory_800B5850;
}

void GM_SetAreaHistory(AreaHistory *pNewHistory)
{
    gAreaHistory_800B5850 = *pNewHistory;
}

int GM_SetArea(int stage_id, char *stage_name)
{
    int i;

    sCurrentAreaName_800AB9C0 = stage_id;
    strcpy(GM_CurrentStageName, stage_name);
    for (i = MAX_HISTORY - 1; i > 0; i--)
    {
        gAreaHistory_800B5850.history[i] = gAreaHistory_800B5850.history[i - 1];
    }
    gAreaHistory_800B5850.history[0] = stage_id;
    return stage_id;
}

int GM_AreaHistory(int stage_id)
{
    int i;

    for (i = 1; i < MAX_HISTORY; i++)
    {
        if (gAreaHistory_800B5850.history[i] == stage_id)
        {
            break;
        }
    }
    return i;
}

char *GM_GetArea(int flag)
{
    return GM_CurrentStageName;
}
