#ifndef __Z64OVL_ROM_H_INCLUDED__
#define __Z64OVL_ROM_H_INCLUDED__

typedef struct {
    uint32_t index;
    uint32_t start;
    uint32_t size;
} rom_file_t;

#define ROM(INDEX, START, SIZE) (rom_file_t){(INDEX), (START), (SIZE)};

#if NZLE
#define ICON_ITEM_STATIC        ROM(7, 0x0074C000, 0x00089CA0)
#define NES_FONT_STATIC         ROM(20, 0x008C1000, 0x00004600)
#elif CZLE
#define JPN_FONT_STATIC         ROM(6, 0x004D9F40, 0x0007C300)
#define ICON_ITEM_STATIC        ROM(8, 0x007BD000, 0x000888A0)
#define NES_FONT_STATIC         ROM(21, 0x00928000, 0x00004580)
#define NES_FONT_WIDTH_TABLE    0x80112F40
#define PARAMETER_STATIC        ROM(940, 0x01A3C000, 0x00003B00)
#else
#endif

#endif /* __Z64OVL_ROM_H_INCLUDED__ */