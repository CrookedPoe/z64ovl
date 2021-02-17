#ifndef __Z64OVL_Z_EN_ENCOUNT1__
#define __Z64OVL_Z_EN_ENCOUNT1__

#define Z_EN_ENCOUNT1_ACTOR_NUMBER     0x00A7
#define Z_EN_ENCOUNT1_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ENCOUNT1_OBJECT_NUMBER    0x0001
#define Z_EN_ENCOUNT1_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_encount1_s z_en_encount1_t;
struct z_en_encount1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short max_birth_cont;
    /* 0x142 */ short birth_cont;
    /* 0x144 */ short index;
    /* 0x146 */ short max_summon;
    /* 0x148 */ short summon_cont;
    /* 0x14A */ short hani_out;
    /* 0x14C */ short birth_timer_cont;
    /* 0x14E */ short come_cont;
    /* 0x150 */ short all_come_cont;
    /* 0x152 */ short set_cont;
    /* 0x154 */ short timer;
    /* 0x156 */ u8 eazy_frag;
    /* 0x158 */ float birth_pos;
    /* 0x15C */ ACTOR* Big_Actor;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_EN_ENCOUNT1__ */
