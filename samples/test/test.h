#ifndef __OVL_EN_TEST__
#define __OVL_EN_TEST__

#include "../../z64ovl.h"
#include "object/vase_obj.h"

#define LINK 0x801DAA30
#define SAVE 0x8011A5D0

typedef struct {
    actor_t actor;
    debug_text_t dbtx;
} en_test_t;

static void construct(en_test_t* this, global_t* gl);
static void deconstruct(en_test_t* this, global_t* gl);
static void update(en_test_t* this, global_t* gl);
static void display(en_test_t* this, global_t* gl);

extern void draw_opa(global_t* gl, Gfx* dl);
asm("draw_opa = 0x80028048");

extern void dma_file(dma_t* req);
asm("dma_file = 0x80000B0C");


actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_test_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_TEST__ */