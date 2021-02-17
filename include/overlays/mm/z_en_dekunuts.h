#ifndef __Z64OVL_Z_EN_DEKUNUTS__
#define __Z64OVL_Z_EN_DEKUNUTS__

#define Z_EN_DEKUNUTS_ACTOR_NUMBER     0x003B
#define Z_EN_DEKUNUTS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DEKUNUTS_OBJECT_NUMBER    0x0040
#define Z_EN_DEKUNUTS_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_dekunuts_s z_en_dekunuts_t;
struct z_en_dekunuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char se_flg;
    /* 0x18D */ unsigned char reverse_timer;
    /* 0x18E */ unsigned char damage_eff_kind;
    /* 0x190 */ short timer;
    /* 0x192 */ short aim_angle_y;
    /* 0x194 */ short attack_cnt;
    /* 0x196 */ s_xyz joint1[10];
    /* 0x1D2 */ s_xyz joint2[10];
    /* 0x210 */ float damage_eff_alpha;
    /* 0x214 */ float damage_eff_scale;
    /* 0x218 */ float damage_eff_scale2;
    /* 0x21C */ xyz_t shape_pos[8];
    /* 0x27C */ ClObjPipe acoc_pipe;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_DEKUNUTS__ */
