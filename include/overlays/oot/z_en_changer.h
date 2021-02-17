#ifndef __Z64OVL_Z_EN_CHANGER__
#define __Z64OVL_Z_EN_CHANGER__

#define Z_EN_CHANGER_ACTOR_NUMBER     0x0155
#define Z_EN_CHANGER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_CHANGER_OBJECT_NUMBER    0x0001
#define Z_EN_CHANGER_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_changer_s z_en_changer_t;
struct z_en_changer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ACTOR* LT_box_Actor;
    /* 0x144 */ ACTOR* RT_box_Actor;
    /* 0x148 */ ACTOR* GT_box_Actor;
    /* 0x14C */ short L_bit;
    /* 0x14E */ short R_bit;
    /* 0x150 */ short L_nakami;
    /* 0x152 */ short R_nakami;
    /* 0x154 */ short open_box;
    /* 0x156 */ short wait_timer;
    /* 0x158 */ short dead_frag;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_EN_CHANGER__ */
