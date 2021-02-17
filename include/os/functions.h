#ifndef __Z64OVL_OS_FUNCTIONS_INCLUDED__
#define __Z64OVL_OS_FUNCTIONS_INCLUDED__

/***
* osSyncPrintf
* Source: libultra
* TODO: Port to Majora's Mask
***/
extern uint32_t osSyncPrintf(const char* fmt, ...);
#if NZLE || OOT_DEBUG
    asm("osSyncPrintf = 0x80002130");
#elif CZLE || OOT_U_1_0
    asm("osSyncPrintf = 0x800ADBF8");
#elif NZSE || MM_U_1_0
    asm("osSyncPrintf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("osSyncPrintf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("osSyncPrintf = 0x80800000");
#endif

/***
* osGetMemSize
* Source: libultra
* TODO: Port to CZLE
* TODO: Port to Majora's Mask
***/
extern uint32_t osGetMemSize(void);
#if NZLE || OOT_DEBUG
    asm("osGetMemSize = 0x80005100");
#elif CZLE || OOT_U_1_0
    asm("osGetMemSize = 0x80003E90");
#elif NZSE || MM_U_1_0
    asm("osGetMemSize = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("osGetMemSize = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("osGetMemSize = 0x80800000");
#endif

/***
* osGetTime
* Source: libultra
* TODO: Port to CZLE
* TODO: Port to Majora's Mask
***/
extern OSTime osGetTime(void);
#if NZLE || OOT_DEBUG
    asm("osGetTime = 0x800069E0");
#elif CZLE || OOT_U_1_0
    asm("osGetTime = 0x800D4390");
#elif NZSE || MM_U_1_0
    asm("osGetTime = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("osGetTime = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("osGetTime = 0x80800000");
#endif

#endif /* __Z64OVL_OS_FUNCTIONS_INCLUDED__ */