#ifndef __Z64OVL_Z_EN_BAT__
#define __Z64OVL_Z_EN_BAT__

#define Z_EN_BAT_ACTOR_NUMBER     0x015B
#define Z_EN_BAT_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BAT_OBJECT_NUMBER    0x0172
#define Z_EN_BAT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_bat_s z_en_bat_t;
struct z_en_bat_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char damage_eff_kind;
    /* 0x149 */ unsigned char check_type;
    /* 0x14A */ short sw_num;
    /* 0x14C */ short timer;
    /* 0x14E */ short aim_angle_x;
    /* 0x150 */ short aim_angle_y;
    /* 0x152 */ short anm_frame;
    /* 0x154 */ float damage_eff_scale;
    /* 0x158 */ float damage_eff_scale2;
    /* 0x15C */ float damage_eff_alpha;
    /* 0x160 */ xyz_t shape_pos[3];
    /* 0x184 */ ClObjSph all_sph;
}; /* size = 0x01DC */

#endif /* __Z64OVL_Z_EN_BAT__ */
