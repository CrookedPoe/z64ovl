#ifndef __OVL_EN_SAMPLE_UCODE__
#define __OVL_EN_SAMPLE_UCODE__

#define GAME_OCARINA 1

#include "../../z64ovl.h"

#define LINK            0x801DAA30

typedef struct {
    actor_t actor;
    debug_text_t dbtx;
    actor_t* link;
    struct {
        Gfx* head;
        Gfx* tail;
    } grid;
} en_load_ucode_t;

#define VtxXZ(X, Z) gdSPDefVtxC((int16_t)(X), 0, (int16_t)(Z), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF)

static void construct(en_load_ucode_t* this, global_t* gl);
static void deconstruct(en_load_ucode_t* this, global_t* gl);
static void update(en_load_ucode_t* this, global_t* gl);
static void display(en_load_ucode_t* this, global_t* gl);

actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_load_ucode_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_SAMPLE_UCODE__ */