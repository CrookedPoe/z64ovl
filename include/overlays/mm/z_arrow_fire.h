#ifndef __Z64OVL_Z_ARROW_FIRE__
#define __Z64OVL_Z_ARROW_FIRE__

#define Z_ARROW_FIRE_ACTOR_NUMBER     0x007D
#define Z_ARROW_FIRE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ARROW_FIRE_OBJECT_NUMBER    0x0001
#define Z_ARROW_FIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_arrow_fire_s z_arrow_fire_t;
struct z_arrow_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjSwrd at0;
    /* 0x1C4 */ ClObjSwrd at1;
    /* 0x244 */ xyz_t tail_pos;
    /* 0x250 */ float tail_scale;
    /* 0x254 */ float kankyo;
    /* 0x258 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x25C */ short scale;
    /* 0x25E */ unshort timer;
    /* 0x260 */ unchar alpha;
}; /* size = 0x0264 */

#endif /* __Z64OVL_Z_ARROW_FIRE__ */
