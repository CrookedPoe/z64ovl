#ifndef __Z64OVL_Z_EN_WALLMAS__
#define __Z64OVL_Z_EN_WALLMAS__

#define Z_EN_WALLMAS_ACTOR_NUMBER     0x000A
#define Z_EN_WALLMAS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WALLMAS_OBJECT_NUMBER    0x0009
#define Z_EN_WALLMAS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_wallmas_s z_en_wallmas_t;
struct z_en_wallmas_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short sw_num;
    /* 0x192 */ s_xyz joint1[25];
    /* 0x228 */ s_xyz joint2[25];
    /* 0x2C0 */ float aim_pos_y;
    /* 0x2C4 */ float search_area;
    /* 0x2C8 */ float damage_eff_alpha;
    /* 0x2CC */ float damage_eff_scale;
    /* 0x2D0 */ float damage_eff_scale2;
    /* 0x2D4 */ xyz_t shape_pos[11];
    /* 0x358 */ ClObjPipe acoc_pipe;
}; /* size = 0x03A4 */

#endif /* __Z64OVL_Z_EN_WALLMAS__ */
