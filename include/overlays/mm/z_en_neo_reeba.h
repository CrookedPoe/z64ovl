#ifndef __Z64OVL_Z_EN_NEO_REEBA__
#define __Z64OVL_Z_EN_NEO_REEBA__

#define Z_EN_NEO_REEBA_ACTOR_NUMBER     0x0216
#define Z_EN_NEO_REEBA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_NEO_REEBA_OBJECT_NUMBER    0x0201
#define Z_EN_NEO_REEBA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_neo_reeba_s z_en_neo_reeba_t;
struct z_en_neo_reeba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe pipe_info;
    /* 0x1D4 */ s_xyz joint1[18];
    /* 0x240 */ s_xyz joint2[18];
    /* 0x2AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2B0 */ xyz_t aim_pos;
    /* 0x2BC */ xyz_t damage_spd;
    /* 0x2C8 */ xyz_t effect_pos[4];
    /* 0x2F8 */ float offset_speed;
    /* 0x2FC */ float damage_angle;
    /* 0x300 */ float effect_alpha;
    /* 0x304 */ float effect_scale;
    /* 0x308 */ short damage_cycle;
    /* 0x30A */ short proc_timer;
    /* 0x30C */ short sound_timer;
    /* 0x30E */ short effect_timer;
    /* 0x310 */ u8 effect_type;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_NEO_REEBA__ */
