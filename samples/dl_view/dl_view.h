#ifndef __OVL_EN_DL_VIEW__
#define __OVL_EN_DL_VIEW__

#include "../../z64ovl.h"

#define CONTROLLER_1    0
#define FPS             (1 / 20.0f)
#define GLOBAL_CONTEXT  0x801C84A0

uint32_t* segment_table = (uint32_t*)RAM_SEGMENT_TABLE;
#define SEGTORAM(addr) PHYSICAL_TO_VIRTUAL(segment_table[SEGMENT_NUMBER(addr)] + SEGMENT_OFFSET(addr))

enum dl_mode_e {
    MODE_DLIST = 0
    , MODE_HIERARCHY
} dl_mode_t;

enum bone_mode_e {
    BONE_NOMTX = 0
    , BONE_MTX
} bone_mode_t;

typedef struct {
    actor_t actor;
    struct {
        uint8_t show_grid;
        Mtx* translate;
        Gfx* head;
        Gfx* tail;
    } grid;
    struct {
        camera_t* instance;
        float speed;
        vec3f_t pos, rot;
        vec3f_t forward, right;
    } cam;
    struct {
        input_instance_t instance;
        float time;
    } input;
    struct {
        uint8_t mode;
        float scale;
        Gfx* main_dlist;
        struct {
            uint8_t ready;
            void* skl;
            animation_t* anim;
            skelanime_t skelanime;
        } skeleton;
    } object;
    struct {
        debug_text_t dbtx;
        uint32_t word[10];
    } debug_info;
} en_dl_view_t;

#define VtxXZ(X, Z) gdSPDefVtxC((int16_t)(X), 0, (int16_t)(Z), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF)

static void construct(en_dl_view_t* this, global_t* gl);
static void deconstruct(en_dl_view_t* this, global_t* gl);
static void update(en_dl_view_t* this, global_t* gl);
static void display(en_dl_view_t* this, global_t* gl);

actor_init_t init_vars = {
    .number = 0x0005
    , .category = 0x04
    , .room = 0xFF
    , .flags = (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ALWAYS_UPDATE)
    , .object = 0x0001
    , .instance_size = sizeof(en_dl_view_t)
    , .constructor = construct
    , .destructor = deconstruct
    , .update = update
    , .draw = display
};

#endif /* __OVL_EN_DL_VIEW__ */