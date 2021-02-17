#ifndef __OVL_EN_OOTO_PUPPET__
#define __OVL_EN_OOTO_PUPPET__

//#define OOTO_GENERATE_SYNC 1
#define GAME_OCARINA 1

#include "../../z64ovl.h"

#define LINK 0x801DAA30
#define SAVE 0x8011A5D0

typedef struct {
    actor_t actor;
} player_t;

typedef struct {
    actor_t actor;
    float arbitrary_var;
} en_puppet_t;

static void construct(en_puppet_t* this, global_t* gl);
static void deconstruct(en_puppet_t* this, global_t* gl);
static void update(en_puppet_t* this, global_t* gl);
static void display(en_puppet_t* this, global_t* gl);


actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_puppet_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_OOTO_PUPPET__ */