#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
    #include "types.h"
}
#else
#include "types.h"
#endif

#define SM64AP_ID_OFFSET 3626000
#define SM64AP_ITEMID_STAR SM64AP_ID_OFFSET
#define SM64AP_ID_KEY1 (SM64AP_ID_OFFSET+178)
#define SM64AP_ID_KEY2 (SM64AP_ID_KEY1+1)
#define SM64AP_ID_KEYPROG (SM64AP_ID_KEY2+1)
#define SM64AP_ID_WINGCAP (SM64AP_ID_KEYPROG+1)
#define SM64AP_ID_METALCAP (SM64AP_ID_WINGCAP+1)
#define SM64AP_ID_VANISHCAP (SM64AP_ID_METALCAP + 1)
#define SM64AP_ITEMID_1UP (SM64AP_ID_VANISHCAP + 1)

#define SM64AP_MOVE_JUMP (SM64AP_ITEMID_1UP + 1)
#define SM64AP_MOVE_JUMP_NONE 0
#define SM64AP_MOVE_JUMP_BASIC 1
#define SM64AP_MOVE_JUMP_DOUBLE 2
#define SM64AP_MOVE_JUMP_TRIPLE 3
#define SM64AP_MOVE_JUMP_SPECIAL 4
#define SM64AP_MOVE_PUNCH (SM64AP_MOVE_JUMP + 1)
#define SM64AP_MOVE_PUNCH_NONE 0
#define SM64AP_MOVE_PUNCH_BASIC 1
#define SM64AP_MOVE_PUNCH_JUMPKICK 2
#define SM64AP_MOVE_PUNCH_DIVE 3
#define SM64AP_MOVE_SIDEJUMP (SM64AP_MOVE_PUNCH + 1)
#define SM64AP_MOVE_WALLKICK (SM64AP_MOVE_SIDEJUMP + 1)
#define SM64AP_MOVE_LONGJUMP (SM64AP_MOVE_WALLKICK + 1)
#define SM64AP_MOVE_BACKFLIP (SM64AP_MOVE_LONGJUMP + 1)
#define SM64AP_MOVE_GROUNDPOUND (SM64AP_MOVE_BACKFLIP + 1)
#define SM64AP_MOVE_SWEEPKICK (SM64AP_MOVE_GROUNDPOUND + 1)

#define SM64AP_INITIAL_JUMP SM64AP_MOVE_JUMP_NONE
#define SM64AP_INITIAL_PUNCH SM64AP_MOVE_PUNCH_NONE
#define SM64AP_INITIAL_SIDEFLIP false
#define SM64AP_INITIAL_WALLKICK false
#define SM64AP_INITIAL_LONGJUMP false
#define SM64AP_INITIAL_BACKFLIP false
#define SM64AP_INITIAL_GROUNDPOUND false
#define SM64AP_INITIAL_SLIDEKICK false

#define SM64AP_ID_CANNONUNLOCK(x) (SM64AP_ID_OFFSET+200+x)

#define SM64AP_NUM_LOCS 244

#ifdef __cplusplus
//Init
extern "C" void SM64AP_InitMW(const char*, const char*, const char*);
extern "C" void SM64AP_InitSP(const char*);

// Local Stars, Keys and Caps
extern "C" int SM64AP_GetStars();
extern "C" int SM64AP_GetRequiredStars(int);
extern "C" u32 SM64AP_CourseStarFlags(s32);
extern "C" void SM64AP_RedirectWarp(s16*,s16*,s8*,s16*,s16*,bool,int);
extern "C" int SM64AP_CourseToTTC();
extern "C" void SM64AP_SetClockToTTCAction(int* action);
extern "C" bool SM64AP_CheckedLoc(int);
extern "C" bool SM64AP_HaveKey1();
extern "C" bool SM64AP_HaveKey2();
extern "C" bool SM64AP_HaveCap(int);
extern "C" bool SM64AP_HaveCannon(int);
extern "C" bool SM64AP_DeathLinkPending();
extern "C" void SM64AP_DeathLinkClear();
extern "C" void SM64AP_DeathLinkSend();
extern "C" bool SM64AP_CanDoAction(int action);

// Send Item
extern "C" void SM64AP_SendByBoxID(int);
extern "C" void SM64AP_SendItem(int);

// Print Next Message to Screen
extern "C" void SM64AP_PrintNext();

// Called when Story completed, sends StatusUpdate
extern "C" void SM64AP_StoryComplete();
#else
void SM64AP_InitMW(const char*, const char*, const char*);
void SM64AP_InitSP(const char*);
int SM64AP_GetStars();
int SM64AP_GetRequiredStars(int);
u32 SM64AP_CourseStarFlags(s32);
void SM64AP_RedirectWarp(s16*,s16*,s8*,s16*,s16*,bool,int);
int SM64AP_CourseToTTC();
void SM64AP_SetClockToTTCAction(int* action);
bool SM64AP_CheckedLoc(int);
bool SM64AP_HaveKey1();
bool SM64AP_HaveKey2();
bool SM64AP_HaveCap(int);
bool SM64AP_HaveCannon(int);
bool SM64AP_DeathLinkPending();
void SM64AP_DeathLinkClear();
void SM64AP_DeathLinkSend();
bool SM64AP_CanDoAction(int action);
void SM64AP_SendByBoxID(int);
void SM64AP_SendItem(int);
void SM64AP_PrintNext();
void SM64AP_StoryComplete();
#endif
