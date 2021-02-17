#ifndef __Z64OVL_Z_EN_BIRD__
#define __Z64OVL_Z_EN_BIRD__

#define Z_EN_BIRD_ACTOR_NUMBER     0x0072
#define Z_EN_BIRD_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BIRD_OBJECT_NUMBER    0x0077
#define Z_EN_BIRD_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_bird_s z_en_bird_t;
struct z_en_bird_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ int action;
    /* 0x188 */ int mode_timer;
    /* 0x18C */ short arg_data2;
    /* 0x190 */ float ud_data;
    /* 0x194 */ float lr_data;
    /* 0x198 */ float max_speed;
    /* 0x19C */ float acc_speed;
    /* 0x1A0 */ float move_area;
    /* 0x1A4 */ float counter0;
    /* 0x1A8 */ float counter0_add;
    /* 0x1AC */ float eye_add;
    /* 0x1B0 */ short turn_speed;
    /* 0x1B4 */ xyz_t coll_size_m;
    /* 0x1C0 */ xyz_t coll_size;
}; /* size = 0x01DC */

#endif /* __Z64OVL_Z_EN_BIRD__ */
