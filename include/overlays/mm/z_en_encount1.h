#ifndef __Z64OVL_Z_EN_ENCOUNT1__
#define __Z64OVL_Z_EN_ENCOUNT1__

#define Z_EN_ENCOUNT1_ACTOR_NUMBER     0x005B
#define Z_EN_ENCOUNT1_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ENCOUNT1_OBJECT_NUMBER    0x0001
#define Z_EN_ENCOUNT1_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_encount1_s z_en_encount1_t;
struct z_en_encount1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ Path_Info* path;
    /* 0x14C */ short max_birth_cont;
    /* 0x14E */ short birth_cont;
    /* 0x150 */ short index;
    /* 0x152 */ short come_cont;
    /* 0x154 */ short all_come_cont;
    /* 0x156 */ short wait_timer;
    /* 0x158 */ short timer_data;
    /* 0x15A */ short rail_index;
    /* 0x15C */ int item_no;
    /* 0x160 */ float birth_pos;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_ENCOUNT1__ */
