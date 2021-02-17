#ifndef __Z64OVL_ACTOR_FUNCTIONS_INCLUDED__
#define __Z64OVL_ACTOR_FUNCTIONS_INCLUDED__

#include "types.h"

// z_cheap_proc

/**********
* Easily draw a display list to the OPA display list buffer.
* Source: z_cheap_proc.c
**********/
#define Gfx_DrawDListOpa z_cheap_draw_opa
#define Cheap_gfx_display z_cheap_draw_opa
extern void z_cheap_draw_opa(global_t* global, Gfx* display_list);
#if NZLE || OOT_DEBUG
    asm("z_cheap_draw_opa = 0x80035260");
#elif CZLE || OOT_U_1_0
    asm("z_cheap_draw_opa = 0x80028048");
#elif NZSE || MM_U_1_0
    asm("z_cheap_draw_opa = 0x800BDFC0");
#elif NZSP || MM_DEBUG
    asm("z_cheap_draw_opa = 0x800D2B4C");
#elif NZSJ || MM_J_1_0
    asm("z_cheap_draw_opa = 0x800BFB38");
#endif

/**********
* Easily draw a display list to the XLU display list buffer.
* Source: z_cheap_proc.c
**********/
#define Gfx_DrawDListXlu z_cheap_draw_xlu
#define Cheap_gfx_display_xlu z_cheap_draw_xlu
extern void z_cheap_draw_xlu(global_t* global, Gfx* display_list);
#if NZLE || OOT_DEBUG
    asm("z_cheap_draw_xlu = 0x80035324");
#elif CZLE || OOT_U_1_0
    asm("z_cheap_draw_xlu = 0x800280C8");
#elif NZSE || MM_U_1_0
    asm("z_cheap_draw_xlu = 0x800BE03C");
#elif NZSP || MM_DEBUG
    asm("z_cheap_draw_xlu = 0x800D2C2C");
#elif NZSJ || MM_J_1_0
    asm("z_cheap_draw_xlu = 0x800BFBB4");
#endif


#endif /* __Z64OVL_ACTOR_FUNCTIONS_INCLUDED__ */