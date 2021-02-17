#ifndef __Z64OVL_Z_EN_JSJUTAN__
#define __Z64OVL_Z_EN_JSJUTAN__

#define Z_EN_JSJUTAN_ACTOR_NUMBER     0x016B
#define Z_EN_JSJUTAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JSJUTAN_OBJECT_NUMBER    0x0001
#define Z_EN_JSJUTAN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_jsjutan_s z_en_jsjutan_t;
struct z_en_jsjutan_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ u8 shadow_change;
    /* 0x158 */ float base_pos_y;
    /* 0x15C */ float shadow_prim_a;
    /* 0x160 */ float fly_power;
    /* 0x164 */ u8 j_break;
    /* 0x165 */ u8 j_init;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_EN_JSJUTAN__ */
