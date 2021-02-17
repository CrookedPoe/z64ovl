#ifndef __Z64OVL_Z_ARROW_ICE__
#define __Z64OVL_Z_ARROW_ICE__

#define Z_ARROW_ICE_ACTOR_NUMBER     0x010B
#define Z_ARROW_ICE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ARROW_ICE_OBJECT_NUMBER    0x0001
#define Z_ARROW_ICE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_arrow_ice_s z_arrow_ice_t;
struct z_arrow_ice_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short scale;
    /* 0x13E */ unshort timer;
    /* 0x140 */ unchar alpha;
    /* 0x144 */ xyz_t tail_pos;
    /* 0x150 */ float tail_scale;
    /* 0x154 */ float kankyo;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_ARROW_ICE__ */
