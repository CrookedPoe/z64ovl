#ifndef __OVL_EN_TEXT_PRINT__
#define __OVL_EN_TEXT_PRINT__

#include "../../z64ovl.h"

extern char font_static_start[];
extern char font_static_end[];
extern int font_static_size_size;

extern char width_table_start[];
extern char width_table_end[];
extern int width_table_size;

typedef struct {
    actor_t actor;
    hsvf_t hsv;
    gfx_text_printer_t font;
} en_text_print_t;

static void construct(en_text_print_t* this, global_t* gl);
static void deconstruct(en_text_print_t* this, global_t* gl);
static void update(en_text_print_t* this, global_t* gl);
static void display(en_text_print_t* this, global_t* gl);

actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_text_print_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_TEXT_PRINT__ */