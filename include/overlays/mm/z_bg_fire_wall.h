#ifndef __Z64OVL_Z_BG_FIRE_WALL__
#define __Z64OVL_Z_BG_FIRE_WALL__

#define Z_BG_FIRE_WALL_ACTOR_NUMBER     0x0110
#define Z_BG_FIRE_WALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_FIRE_WALL_OBJECT_NUMBER    0x0153
#define Z_BG_FIRE_WALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_fire_wall_s z_bg_fire_wall_t;
struct z_bg_fire_wall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short txt_num;
    /* 0x14A */ short timer;
    /* 0x14C */ short type_index;
    /* 0x14E */ short index_no;
    /* 0x150 */ float move_speed;
    /* 0x154 */ float scale_ex;
    /* 0x158 */ float scale_up;
    /* 0x15C */ float scale_max;
    /* 0x160 */ float hani;
    /* 0x164 */ ClObjPipe atoc_pipe;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_FIRE_WALL__ */
