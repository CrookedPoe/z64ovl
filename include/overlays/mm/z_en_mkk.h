#ifndef __Z64OVL_Z_EN_MKK__
#define __Z64OVL_Z_EN_MKK__

#define Z_EN_MKK_ACTOR_NUMBER     0x0164
#define Z_EN_MKK_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_MKK_OBJECT_NUMBER    0x017A
#define Z_EN_MKK_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_mkk_s z_en_mkk_t;
struct z_en_mkk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char eye_anm;
    /* 0x149 */ unsigned char attack_flg;
    /* 0x14A */ unsigned char env_alpha;
    /* 0x14B */ unsigned char work_flg;
    /* 0x14C */ unsigned char item_table;
    /* 0x14E */ short timer;
    /* 0x150 */ short aim_angle_y;
    /* 0x152 */ short revival_timer;
    /* 0x154 */ xyz_t tail_pos0;
    /* 0x160 */ xyz_t tail_pos1;
    /* 0x16C */ xyz_t eff_pos;
    /* 0x178 */ float search_area;
    /* 0x17C */ ClObjSph all_sph;
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_EN_MKK__ */
