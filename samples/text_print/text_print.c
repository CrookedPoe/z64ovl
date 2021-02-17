#include "text_print.h"

static void construct(en_text_print_t* this, global_t* gl)
{
    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface
    this->font.timg = &font_static_start;
    this->font.width_table = (float*)width_table_start;
    this->font.shadow = 1;
    this->hsv.h = 0.0f;
    this->hsv.s = 1.0f;
    this->hsv.v = 1.0f;
}

static void deconstruct(en_text_print_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_text_print_t* this, global_t* gl)
{
    zh_color_cycle_hue(&this->hsv.h, 10.0f);
    this->font.color = zh_color_hsv2rgb(&this->hsv);
}

static void display(en_text_print_t* this, global_t* gl)
{
    zh_gfx_font(gl, &this->font, "This is real debug font.", 20.0f, 100.0f, 1.0f);
}

