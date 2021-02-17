#ifndef __Z64OVL_Z_ARROW_FIRE__
#define __Z64OVL_Z_ARROW_FIRE__

#define Z_ARROW_FIRE_ACTOR_NUMBER     0x010A
#define Z_ARROW_FIRE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ARROW_FIRE_OBJECT_NUMBER    0x0001
#define Z_ARROW_FIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_arrow_fire_s z_arrow_fire_t;
struct z_arrow_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ xyz_t tail_pos;
    /* 0x148 */ float tail_scale;
    /* 0x14C */ float kankyo;
    /* 0x150 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x154 */ short scale;
    /* 0x156 */ unshort timer;
    /* 0x158 */ unchar alpha;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_ARROW_FIRE__ */
