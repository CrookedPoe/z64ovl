#ifndef __Z64OVL_Z_EN_DY_EXTRA__
#define __Z64OVL_Z_EN_DY_EXTRA__

#define Z_EN_DY_EXTRA_ACTOR_NUMBER     0x0184
#define Z_EN_DY_EXTRA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_DY_EXTRA_OBJECT_NUMBER    0x000A
#define Z_EN_DY_EXTRA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_dy_extra_s z_en_dy_extra_t;
struct z_en_dy_extra_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short type_index;
    /* 0x142 */ short dead_frag;
    /* 0x144 */ short wait_timer;
    /* 0x148 */ float alpha;
    /* 0x14C */ xyz_t size;
    /* 0x158 */ xyz_t pos;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_EN_DY_EXTRA__ */
