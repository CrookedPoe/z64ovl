#ifndef __Z64OVL_MICROCODE_TYPES_INCLUDED__
#define __Z64OVL_MICROCODE_TYPES_INCLUDED__

/* The intention are that the included files are from the Nintendo 64 SDK. 
* That isn't to say this can't be modified or added to to support binary blocks
* so feel free to do a submit a PR if you want to.
*/

typedef struct {
    char* text;
    char* data;
} ucode_info_t;

extern char gspFast3D_fifoTextStart[0x1400];
extern char gspFast3D_fifoDataStart[0x0800];

extern char gspF3DEX_fifoTextStart[0x1430];
extern char gspF3DEX_fifoDataStart[0x0800];

extern char gspF3DEX_NoN_fifoTextStart[0x1430];
extern char gspF3DEX_NoN_fifoDataStart[0x0800];

extern char gspF3DEX2_fifoTextStart[0x1390];
extern char gspF3DEX2_fifoDataStart[0x0420];

extern char gspF3DEX2_NoN_fifoTextStart[0x1390];
extern char gspF3DEX2_NoN_fifoDataStart[0x0420];

extern char gspF3DZEX2_NoN_fifoTextStart[0x1390];
extern char gspF3DZEX2_NoN_fifoDataStart[0x0420];

extern char gspL3DEX_fifoTextStart[0x0FF0];
extern char gspL3DEX_fifoDataStart[0x0800];

extern char gspL3DEX2_fifoTextStart[0x1190];
extern char gspL3DEX2_fifoDataStart[0x03F0];

/**********
* gspF3DZEX2 Text built into the ROM.
* TODO: Port to other game versions.
**********/
extern char z_F3DZEX_TextStart[];
#if NZLE || OOT_DEBUG
    asm("z_F3DZEX_TextStart = 0x00000000"); // 2.08J
#elif CZLE || OOT_U_1_0
    asm("z_F3DZEX_TextStart = 0x800E3F70"); // 2.06H
#elif NZSE || MM_U_1_0
    asm("z_F3DZEX_TextStart = 0x00000000"); // 2.08I
#elif NZSP || MM_DEBUG
    asm("z_F3DZEX_TextStart = 0x00000000"); // 2.08I
#elif NZSJ || MM_J_1_0
    asm("z_F3DZEX_TextStart = 0x00000000"); // 2.08I
#endif

/**********
* gspF3DZEX2 Data built into the ROM.
* TODO: Port to other game versions.
**********/
extern char z_F3DZEX_DataStart[];
#if NZLE || OOT_DEBUG
    asm("z_F3DZEX_DataStart = 0x00000000"); // 2.08J
#elif CZLE || OOT_U_1_0
    asm("z_F3DZEX_DataStart = 0x801145C0"); // 2.06H
#elif NZSE || MM_U_1_0
    asm("z_F3DZEX_DataStart = 0x00000000"); // 2.08I
#elif NZSP || MM_DEBUG
    asm("z_F3DZEX_DataStart = 0x00000000"); // 2.08I
#elif NZSJ || MM_J_1_0
    asm("z_F3DZEX_DataStart = 0x00000000"); // 2.08I
#endif

#endif /* __Z64OVL_MICROCODE_TYPES_INCLUDED__ */