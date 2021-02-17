#include "../../../z64ovl.h"

#if NZLE || OOT_DEBUG
#define CODE_VRAM	  0x8001CE60
#define CODE_START	 0x00A94000
#define CODE_SIZE	  0x0013AF30
#define CODE_BSS	   0x80157D90
#define CODE_BSS_SIZE  0x0001DC30
#define CODE1_REQ	  0x80012364
#elif CZLE || OOT_U_1_0
#define CODE_VRAM	  0x800110A0
#define CODE_START	 0x00A87000
#define CODE_SIZE	  0x00103D30
#define CODE_BSS	   0x80114DD0
#define CODE_BSS_SIZE  0x00017060
#define CODE1_REQ	  0x80006820
#endif

#define MB_8			  0x00800000
#define HAS_EXPANSIONPAK  (osGetMemSize() >= MB_8)

/***
* dma_rom_chk
***/
extern void dma_rom_chk(dma_entry_t* req);
#if NZLE || OOT_DEBUG
	asm("dma_rom_chk = 0x800013FC");
#elif CZLE || OOT_U_1_0
	asm("dma_rom_chk = 0x80000B0C");
#endif

/***
* dmacopy_fg
***/
extern int32_t dmacopy_fg(uint32_t vram_dest, uint32_t vrom, uint32_t size);
#if NZLE || OOT_DEBUG
	asm("dmacopy_fg = 0x800017C0");
#elif CZLE || OOT_U_1_0
	asm("dmacopy_fg = 0x80000DF0");
#endif

/***
* CreateDmaManager
***/
extern void CreateDmaManager(void);
#if NZLE || OOT_DEBUG
	asm("CreateDmaManager = 0x8000183C");
#elif CZLE || OOT_U_1_0
	asm("CreateDmaManager = 0x80000E6C");
#endif

/***
* __dmacopy_fg
***/
extern int32_t __dmacopy_fg(void* vram_dest, uint32_t vrom, uint32_t size, const char* file, int32_t line);
#if NZLE || OOT_DEBUG
	asm("__dmacopy_fg = 0x80001AA0");
#elif CZLE || OOT_U_1_0
#warning:  This function does not exist inside of CZLE.
	asm("__dmacopy_fg = 0x00000000");
#endif

/***
* Main
***/
extern void mainproc(void*);
#if NZLE || OOT_DEBUG
	asm("mainproc = 0x800C6E20");
#elif CZLE || OOT_U_1_0
	asm("mainproc = 0x800A1C50");
#endif

#if NZLE || OOT_DEBUG
// This exists at 0x000011A0 in a normal, vanilla Debug ROM.
void mainx(void* arg)
{
	OSTime t;

	//osSyncPrintf("mainx 実行開始\n");
	CreateDmaManager();
	//osSyncPrintf("codeセグメントロード中...");
	t = osGetTime();
	__dmacopy_fg(
		(void*)CODE_VRAM
		, CODE_START
		, CODE_SIZE
		, 0 // "../idle.c"
		, 0 // 238
	);
	t -= osGetTime();
#if CODE1_REQ
	if (HAS_EXPANSIONPAK)
		dma_rom_chk((dma_entry_t*)CODE1_REQ);
#endif
	//osSyncPrintf("\rcodeセグメントロード中...完了\n");
	//osSyncPrintf("転送時間 %6.3f\n");
	bzero((void*)CODE_BSS, CODE_BSS_SIZE);
	//osSyncPrintf("codeセグメントBSSクリア完了\n");
	mainproc(arg);
	//osSyncPrintf("mainx 実行終了\n");
}
#elif CZLE || OOT_U_1_0
// This exists at 0x000011A0 in a normal, vanilla 1.0 ROM.
void mainx(void* arg)
{
	OSTime t;

	CreateDmaManager();
	t = osGetTime();
	dmacopy_fg(
		CODE_VRAM
		, CODE_START
		, CODE_SIZE
	);
	t -= osGetTime();
#if CODE1_REQ
	if (HAS_EXPANSIONPAK)
		dma_rom_chk((dma_entry_t*)CODE1_REQ);
#endif
	bzero((void*)CODE_BSS, CODE_BSS_SIZE);
	mainproc(arg);
}
#endif