#ifndef __Z64OVL_STDIO_H_INCLUDED__
#define __Z64OVL_STDIO_H_INCLUDED__

/***
* An implementation of sprintf for Zelda 64.
* Source:
***/
#define sprintf z_sprintf
extern int32_t z_sprintf(char* str, const char* fmt, ...);
#if NZLE || OOT_DEBUG
    asm("z_sprintf = 0x80002F44");
#elif CZLE || OOT_U_1_0
    asm("z_sprintf = 0x800CE7B4");
#elif NZSE || MM_U_1_0
    asm("z_sprintf = 0x800878A4");
#elif NZSP || MM_DEBUG
    asm("z_sprintf = 0x8008A904");
#elif NZSJ || MM_J_1_0
    asm("z_sprintf = 0x80088844");
#endif

/***
* An implementation of bzero for Zelda 64.
* Write `n` zero bytes at `s`
* Source:
* TODO: Port to Majora's Mask
***/
#define bzero z_bzero
extern void z_bzero(void* s, int32_t n);
#if NZLE || OOT_DEBUG
    asm("z_bzero = 0x80004450");
#elif CZLE || OOT_U_1_0
    asm("z_bzero = 0x80002E80");
#elif NZSE || MM_U_1_0
    asm("z_bzero = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_bzero = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_bzero = 0x80800000");
#endif

/***
* An implementation of bcopy for Zelda 64.
* Copy `n` bytes from `src` to `dst`
* Source:
* TODO: Port to Majora's Mask
***/
#define bcopy z_bcopy
extern void z_bcopy(const void* src, void* dst, int32_t n);
#if NZLE || OOT_DEBUG
    asm("z_bcopy = 0x80006F10");
#elif CZLE || OOT_U_1_0
    asm("z_bcopy = 0x80004DC0");
#elif NZSE || MM_U_1_0
    asm("z_bcopy = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_bcopy = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_bcopy = 0x80800000");
#endif

#endif /* __Z64OVL_STDIO_H_INCLUDED__ */