#ifndef __Z64OVL_Z_EN_WIZ_FIRE__
#define __Z64OVL_Z_EN_WIZ_FIRE__

#define Z_EN_WIZ_FIRE_ACTOR_NUMBER     0x015F
#define Z_EN_WIZ_FIRE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WIZ_FIRE_OBJECT_NUMBER    0x0178
#define Z_EN_WIZ_FIRE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_wiz_fire_s z_en_wiz_fire_t;
struct z_en_wiz_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ u8 arrow_break;
    /* 0x14C */ float scale;
    /* 0x150 */ float scale_max;
    /* 0x154 */ xyz_t scale_hosei;
    /* 0x160 */ short stat_mode;
    /* 0x162 */ short index;
    /* 0x164 */ u8 clear_fire;
    /* 0x166 */ short ice_shoot;
    /* 0x168 */ short time;
    /* 0x16A */ short bg_hit_time;
    /* 0x16C */ short shield_timer;
    /* 0x16E */ short dead_frag;
    /* 0x170 */ short txt_num;
    /* 0x172 */ short no_check_timer;
    /* 0x174 */ u8 hit_flag;
    /* 0x178 */ xyz_t move_pos[10];
    /* 0x1F0 */ float Ffloor_scale;
    /* 0x1F4 */ float Fwall_scale;
    /* 0x1F8 */ float Fsmoke_scale;
    /* 0x1FC */ float alpha;
    /* 0x200 */ float frame;
    /* 0x204 */ float persent;
    /* 0x208 */ ClObjPipe acoc_pipe_info;
    /* 0x254 */ EN_WIZ_FIRE_EFF en_wiz_fire_eff[200];
}; /* size = 0x2AF4 */

#endif /* __Z64OVL_Z_EN_WIZ_FIRE__ */
