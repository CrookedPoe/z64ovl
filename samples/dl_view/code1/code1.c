#include "../../../z64ovl.h"

#define GLOBAL_CONTEXT  0x801C84A0
#define SAVE_CONTEXT    0x8011A5D0
#define Title_Init_Func      0x808007B0
#define TitleContext_Size    0x01E8

extern void SaveContext_Init();
asm("SaveContext_Init = 0x80051AA0");

/***
* Gameplay_Init
***/
extern void Gameplay_Init(game_state_t* state);
#if NZLE || OOT_DEBUG
    asm("Gameplay_Init = 0x800BCA64");
#elif CZLE || OOT_U_1_0
    asm("Gameplay_Init = 0x8009A750");
#endif

void code1_dummy(void)
{
	AVAL(0x80600100, uint32_t, 0x0000) = 0xDEADBEEF;
}

// Hook 0x80600020 at 0x800A07000 (0x00B166B8)
void code1_title_skip(void)
{
    global_t* gl = (global_t*)GLOBAL_CONTEXT;

    SaveContext_Init();

    // Warp to Lon Lon Ranch from Hyrule Field
    AVAL(SAVE_CONTEXT, int32_t, 0x0000) = 0x0157;   // Entrance Index (Lon Lon Ranch, From Hyrule Field)
    AVAL(SAVE_CONTEXT, int32_t, 0x135C) = 0;        // Game Mode
    gl->state.init = (void*)Gameplay_Init;
    gl->state.size = 0x00012518;
    gl->state.running = 0;

    // Title Stuff
    //gl->state.init = Title_Init_Func;
    //gl->state.size = TitleContext_Size;
}

void code1_main()
{
	code1_dummy();
}