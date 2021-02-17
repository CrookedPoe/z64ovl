#ifndef __Z64OVL_Z_BG_SPOT08_ICEBLOCK__
#define __Z64OVL_Z_BG_SPOT08_ICEBLOCK__

#define Z_BG_SPOT08_ICEBLOCK_ACTOR_NUMBER     0x00D1
#define Z_BG_SPOT08_ICEBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT08_ICEBLOCK_OBJECT_NUMBER    0x0074
#define Z_BG_SPOT08_ICEBLOCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot08_iceblock_s z_bg_spot08_iceblock_t;
struct z_bg_spot08_iceblock_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ xyz_t n_vec;
    /* 0x164 */ xyz_t n_spd;
    /* 0x170 */ xyz_t rot_axis;
    /* 0x17C */ short fi_1;
    /* 0x17E */ short fi_2;
    /* 0x180 */ short omg_1;
    /* 0x182 */ short omg_2;
    /* 0x184 */ float sink_posY;
    /* 0x188 */ float swingV_posY;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_BG_SPOT08_ICEBLOCK__ */
