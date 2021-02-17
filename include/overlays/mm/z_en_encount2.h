#ifndef __Z64OVL_Z_EN_ENCOUNT2__
#define __Z64OVL_Z_EN_ENCOUNT2__

#define Z_EN_ENCOUNT2_ACTOR_NUMBER     0x005F
#define Z_EN_ENCOUNT2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ENCOUNT2_OBJECT_NUMBER    0x0280
#define Z_EN_ENCOUNT2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_encount2_s z_en_encount2_t;
struct z_en_encount2_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short wait_timer;
    /* 0x162 */ short stat_mode;
    /* 0x164 */ short end_bit;
    /* 0x168 */ float scale;
    /* 0x16C */ float work_angle;
    /* 0x170 */ ClObjJntSph sph_pos;
    /* 0x190 */ ClObjJntSphElem sph_elem[1];
    /* 0x1D0 */ EN_ENCOUNT2_EFF en_encount2_eff[200];
}; /* size = 0x2A70 */

#endif /* __Z64OVL_Z_EN_ENCOUNT2__ */
