#ifndef __OVL_EN_TEMPLATE__
#define __OVL_EN_TEMPLATE__

#include "../../z64ovl.h"

typedef struct {
    actor_t actor;
} en_template_t;

static void construct(en_template_t* this, global_t* gl);
static void deconstruct(en_template_t* this, global_t* gl);
static void update(en_template_t* this, global_t* gl);
static void display(en_template_t* this, global_t* gl);

actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_template_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_TEMPLATE__ */