#ifndef __Z64OVL_Z_OBJ_KZSAKU__
#define __Z64OVL_Z_OBJ_KZSAKU__

#define Z_OBJ_KZSAKU_ACTOR_NUMBER     0x028A
#define Z_OBJ_KZSAKU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_KZSAKU_OBJECT_NUMBER    0x0260
#define Z_OBJ_KZSAKU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_kzsaku_s z_obj_kzsaku_t;
struct z_obj_kzsaku_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float trans_y;
    /* 0x164 */ int save_bit;
    /* 0x168 */ short proc_timer;
    /* 0x16A */ short proc_step;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_OBJ_KZSAKU__ */
