#ifndef __Z64OVL_Z_EN_TP__
#define __Z64OVL_Z_EN_TP__

#define Z_EN_TP_ACTOR_NUMBER     0x0035
#define Z_EN_TP_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TP_OBJECT_NUMBER    0x0022
#define Z_EN_TP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_tp_s z_en_tp_t;
struct z_en_tp_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int mode;
    /* 0x140 */ int action;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char reaction_buf;
    /* 0x14A */ short mode_timer;
    /* 0x14C */ short mode_timer2;
    /* 0x14E */ short work0;
    /* 0x150 */ short work1;
    /* 0x152 */ short work2;
    /* 0x154 */ short work3;
    /* 0x158 */ float counter0;
    /* 0x15C */ float f_work0;
    /* 0x160 */ float f_work1;
    /* 0x164 */ ClObjJntSph sph_pos;
    /* 0x184 */ ClObjJntSphElem sph_elem;
    /* 0x1C4 */ ACTOR* mast;
}; /* size = 0x01D8 */

#endif /* __Z64OVL_Z_EN_TP__ */
