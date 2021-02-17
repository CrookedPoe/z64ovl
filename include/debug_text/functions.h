#ifndef __Z64OVL_DEBUG_TEXT_FUNCTIONS_INCLUDED__
#define __Z64OVL_DEBUG_TEXT_FUNCTIONS_INCLUDED__

#include "types.h"

/**********
* Set up the display list used by a debug text string--this isn't meant to be called directly.
* Source: gfxprint.h
* TODO: Better Argument Documentation
**********/
#define GfxPrint_InitDlist z_debug_text_setup
#define gfxprint_setup z_debug_text_setup
extern void z_debug_text_setup(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_setup = 0x800FAF60");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_setup = 0x800CB9C0");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_setup = 0x80085570");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_setup = 0x80086E30");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_setup = 0x80085EE0");
#endif

/**********
* Set the red, green, blue, and alpha component of a debug text string.
* Source: gfxprint.h
**********/
#define z_debug_text_set_rgba(r, g, b, a) (z_debug_text_set_rgba)(dbtx, r, g, b, a)
#define GfxPrint_SetColor z_debug_text_set_rgba
#define gfxprint_color z_debug_text_set_rgba
extern void (z_debug_text_set_rgba)(debug_text_t* this, uint32_t r, uint32_t g, uint32_t b, uint32_t a);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_set_rgba = 0x800FB3AC");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_set_rgba = 0x800CBE58");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_set_rgba = 0x800859BC");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_set_rgba = 0x8008727C");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_set_rgba = 0x8008632C");
#endif

/**********
* Set the x and y pixel position of a debug text string.
* Source: gfxprint.h
**********/
#define z_debug_text_set_xy_px(x, y) (z_debug_text_set_xy_px)(dbtx, x, y)
#define GfxPrint_SetPosPx z_debug_text_set_xy_px
#define gfxprint_locate z_debug_text_set_xy_px
extern void (z_debug_text_set_xy_px)(debug_text_t* this, int32_t x, int32_t y);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_set_xy_px = 0x800FB3F8");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_set_xy_px = 0x800CBEA4");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_set_xy_px = 0x80085A08");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_set_xy_px = 0x800872C8");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_set_xy_px = 0x80086378");
#endif

/**********
* Set the x and y pixel position (* 8) of a debug text string.
* Source: gfxprint.h
* ! error: declared as a function returning a function
* ! warning: parameter names (without types) in function declaration
**********/
//#define z_debug_text_set_xy (z_debug_text_set_xy)(dbtx, x, y)
#define GfxPrint_SetPos z_debug_text_set_xy
#define gfxprint_locate8x8 z_debug_text_set_xy
extern void (z_debug_text_set_xy)(debug_text_t* this, int32_t x, int32_t y);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_set_xy = 0x800FB41C");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_set_xy = 0x800CBEC8");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_set_xy = 0x80085A2C");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_set_xy = 0x800872EC");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_set_xy = 0x8008639C");
#endif

/**********
* Set the base x and y pixel position of a debug text string.
* Source: gfxprint.h
* ! error: declared as a function returning a function
* ! warning: parameter names (without types) in function declaration
**********/
//#define z_debug_text_set_offset (z_debug_text_set_offset)(dbtx, x, y)
#define GfxPrint_SetBasePosPx z_debug_text_set_offset
#define gfxprint_setoffset z_debug_text_set_offset
extern void (z_debug_text_set_offset)(debug_text_t* this, int32_t x, int32_t y);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_set_offset = 0x800FB444");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_set_offset = 0x800CBEF0");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_set_offset = 0x80085A54");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_set_offset = 0x80087314");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_set_offset = 0x800863C4");
#endif

/**********
* An implementation of putc--this isn't meant to be called directly.
* Source: gfxprint.h
* TODO: Better Argument Documentation
**********/
#define GfxPrint_PrintCharImpl __z_debug_text_putc
#define gfxprint_putc1 __z_debug_text_putc
extern void __z_debug_text_putc(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("__z_debug_text_putc = 0x800FB458");
#elif CZLE || OOT_U_1_0
    asm("__z_debug_text_putc = 0x800CBF04");
#elif NZSE || MM_U_1_0
    asm("__z_debug_text_putc = 0x80085A68");
#elif NZSP || MM_DEBUG
    asm("__z_debug_text_putc = 0x80087328");
#elif NZSJ || MM_J_1_0
    asm("__z_debug_text_putc = 0x800863D8");
#endif

/**********
* Print a single text character.
* Source: gfxprint.h
**********/
#define z_debug_text_putc(c) (z_debug_text_putc)(dbtx, c)
#define GfxPrint_PrintChar z_debug_text_putc
#define gfxprint_putc z_debug_text_putc
extern void (z_debug_text_putc)(debug_text_t* this, char c);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_putc = 0x800FB8EC");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_putc = 0x800CC210");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_putc = 0x80085D74");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_putc = 0x80087634");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_putc = 0x800866E4");
#endif

/**********
* Write a buffer (of a defined size) of (a defined number of) characters.
* Source: gfxprint.h
**********/
#define z_debug_text_write(buf, size, n) (z_debug_text_write)(dbtx, buf, size, n)
#define GfxPrint_PrintStringWithSize z_debug_text_write
#define gfxprint_write z_debug_text_write
extern void (z_debug_text_write)(debug_text_t* this, const void* buffer, size_t size, size_t n);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_write = 0x800FBAAC");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_write = 0x800CC3CC");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_write = 0x80085F30");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_write = 0x800877F0");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_write = 0x800868A0");
#endif

/**********
* Write a debug text string.
* Source: gfxprint.h
**********/
#define z_debug_text_puts(s) (z_debug_text_puts)(dbtx, s)
#define GfxPrint_PrintString z_debug_text_puts
#define gfxprint_puts z_debug_text_puts
extern void (z_debug_text_puts)(debug_text_t* this, char* string);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_puts = 0x800FBB08");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_puts = 0x800CC428");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_puts = 0x80085F8C");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_puts = 0x8008784C");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_puts = 0x800868FC");
#endif

/**********
* A callback printer function--this isn't meant to be called directly.
* Source: gfxprint.h
* TODO: Better Argument Documentation
**********/
#define GfxPrint_Callback z_debug_text_prout
#define gfxprint_prout z_debug_text_prout
extern void z_debug_text_prout(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_prout = 0x800FBB60");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_prout = 0x800CC480");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_prout = 0x80085FE4");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_prout = 0x800878A4");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_prout = 0x80086954");
#endif

/**********
* Initialize a debug text structure.
* Source: gfxprint.h
**********/
#define z_debug_text_init() (z_debug_text_init)(dbtx)
#define GfxPrint_Init z_debug_text_init
#define gfxprint_init z_debug_text_init
extern void (z_debug_text_init)(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_init = 0x800FBB8C");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_init = 0x800CC4AC");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_init = 0x80086010");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_init = 0x800878D0");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_init = 0x80086980");
#endif

/**********
* Free or destory a debug text structure.
* Source: gfxprint.h
**********/
#define z_debug_text_free() (z_debug_text_free)(dbtx)
#define GfxPrint_Destroy z_debug_text_free
#define gfxprint_cleanup z_debug_text_free
extern void (z_debug_text_free)(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_free = 0x800FBC14");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_free = 0x800CC500");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_free = 0x80086064");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_free = 0x80087924");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_free = 0x800869D4");
#endif

/**********
* Open a graphics buffer for a debug text structure.
* Source: gfxprint.h
**********/
#define z_debug_text_open(gfx) (z_debug_text_open)(dbtx, gfx)
#define GfxPrint_Open z_debug_text_open
#define gfxprint_open z_debug_text_open
extern void (z_debug_text_open)(debug_text_t* this, Gfx* glistp);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_open = 0x800FBC1C");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_open = 0x800CC508");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_open = 0x8008606C");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_open = 0x8008792C");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_open = 0x800869DC");
#endif

/**********
* Close a graphics buffer for a debug text structure.
* Source: gfxprint.h
**********/
#define z_debug_text_close() (z_debug_text_close)(dbtx)
#define GfxPrint_Close z_debug_text_close
#define gfxprint_close z_debug_text_close
extern Gfx* (z_debug_text_close)(debug_text_t* this);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_close = 0x800FBC64");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_close = 0x800CC550");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_close = 0x800860A0");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_close = 0x80087974");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_close = 0x80086A24");
#endif

/**********
* An implementation of vprintf() for debug text.
* Source: gfxprint.h
**********/
#define z_debug_text_vprintf(fmt, ap) (z_debug_text_vprintf)(dbtx, fmt, ap)
#define GfxPrint_VPrintf z_debug_text_vprintf
#define gfxprint_vprintf z_debug_text_vprintf
extern int32_t (z_debug_text_vprintf)(debug_text_t* this, const char* fmt, void* ap);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_vprintf = 0x800FBC94");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_vprintf = 0x800CC568");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_vprintf = 0x800860B8");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_vprintf = 0x8008798C");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_vprintf = 0x80086A3C");
#endif

/**********
* An implementation of printf() for debug text.
* Source: gfxprint.h
**********/
#define z_debug_text_printf(fmt, ...) (z_debug_text_printf)(dbtx, fmt __VA_OPT__(,) __VA_ARGS__)
#define GfxPrint_Printf z_debug_text_printf
#define gfxprint_printf z_debug_text_printf
extern int32_t (z_debug_text_printf)(debug_text_t* this, const char* fmt, ...);
#if NZLE || OOT_DEBUG
    asm("z_debug_text_printf = 0x800FBCB4");
#elif CZLE || OOT_U_1_0
    asm("z_debug_text_printf = 0x800CC588");
#elif NZSE || MM_U_1_0
    asm("z_debug_text_printf = 0x800860D8");
#elif NZSP || MM_DEBUG
    asm("z_debug_text_printf = 0x800879AC");
#elif NZSJ || MM_J_1_0
    asm("z_debug_text_printf = 0x80086A5C");
#endif

/**********
* An wrapper written to easily initialize and draw a string of debug text with a single call.
* Source: old z64ovl
**********/
#define zh_draw_debug_text(                                             \
   /* global_tP */        gl          /* Global Context    */           \
   , /* debug_text_t */   dbtx        /* Text Structure    */           \
   , /* uint32_t */           rgba        /* RGBA 32-Bit Color */       \
   , /* uint8_t */            x           /* X Coordinate      */       \
   , /* uint8_t */            y           /* Y Coordinate      */       \
   , /* const charP */        fmt         /* Format String     */       \
   , ...                                  /* Extra Arguments   */       \
)                                                                       \
{                                                                       \
   disp_buf_t* opa = &(gl)->state.gfx_context->poly_opa;                \
   rgba8_t _rgba;                                                       \
   _rgba.c = rgba;                                                      \
   z_debug_text_init();                                                 \
   z_debug_text_open(opa->p);                                           \
   z_debug_text_set_rgba(                                               \
      _rgba.r                                                           \
      , _rgba.g                                                         \
      , _rgba.b                                                         \
      , _rgba.a                                                         \
   );                                                                   \
   z_debug_text_set_xy((dbtx), x, y);                                   \
   z_debug_text_printf(fmt __VA_OPT__(,) __VA_ARGS__);                  \
   opa->p = z_debug_text_close();                                       \
}

#endif /* __Z64OVL_DEBUG_TEXT_FUNCTIONS_INCLUDED__ */