#ifndef __OVL_EN_SAMPLE_CONTROLLER__
#define __OVL_EN_SAMPLE_CONTROLLER__

#define GAME_OCARINA 1

#include "../../z64ovl.h"

#define CONTROLLER_1 0
#define CONTROLLER_2 1
#define CONTROLLER_3 2
#define CONTROLLER_4 3

#define GLOBAL_CONTEXT  0x801C84A0
#define LINK            0x801DAA30
#define BODY_ANGLE      0x06AC
#define ACTION_ANGLE_Y  0x082C
#define FPS             (1 / 20.0f)

typedef struct {
    actor_t actor;
    actor_t* link;
    input_instance_t input;
    debug_text_t dbtx;
    float time;
    struct {
        pos_rot_t cam;
        float speed;
    };
} en_controller_t;

static void construct(en_controller_t* this, global_t* gl);
static void deconstruct(en_controller_t* this, global_t* gl);
static void update(en_controller_t* this, global_t* gl);
static void display(en_controller_t* this, global_t* gl);

actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_controller_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_SAMPLE_CONTROLLER__ */