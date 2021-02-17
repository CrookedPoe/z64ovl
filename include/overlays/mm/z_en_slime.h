#ifndef __Z64OVL_Z_EN_SLIME__
#define __Z64OVL_Z_EN_SLIME__

#define Z_EN_SLIME_ACTOR_NUMBER     0x014A
#define Z_EN_SLIME_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SLIME_OBJECT_NUMBER    0x016A
#define Z_EN_SLIME_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_slime_s z_en_slime_t;
struct z_en_slime_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char env_a;
    /* 0x149 */ unsigned char eye_tex;
    /* 0x14A */ unsigned char damage_eff_kind;
    /* 0x14C */ short timer;
    /* 0x14E */ short aim_angle_y;
    /* 0x150 */ short gel_angle_y;
    /* 0x152 */ short revival_time;
    /* 0x154 */ xyz_t work;
    /* 0x160 */ unsigned short* item_tex;
    /* 0x164 */ float damage_eff_alpha;
    /* 0x168 */ float damage_eff_scale;
    /* 0x16C */ float damage_eff_scale2;
    /* 0x170 */ float move_area;
    /* 0x174 */ xyz_t gel_scale;
    /* 0x180 */ xyz_t shape_pos[5];
    /* 0x1BC */ ClObjPipe all_pipe;
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_EN_SLIME__ */
