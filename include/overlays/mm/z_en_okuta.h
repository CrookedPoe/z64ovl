#ifndef __Z64OVL_Z_EN_OKUTA__
#define __Z64OVL_Z_EN_OKUTA__

#define Z_EN_OKUTA_ACTOR_NUMBER     0x0008
#define Z_EN_OKUTA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_OKUTA_OBJECT_NUMBER    0x0005
#define Z_EN_OKUTA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_okuta_s z_en_okuta_t;
struct z_en_okuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short attack_cnt;
    /* 0x192 */ s_xyz joint1[16];
    /* 0x1F2 */ s_xyz joint2[16];
    /* 0x254 */ float damage_eff_alpha;
    /* 0x258 */ float damage_eff_scale;
    /* 0x25C */ float damage_eff_scale2;
    /* 0x260 */ float aim_pos_y;
    /* 0x264 */ xyz_t head_scale;
    /* 0x270 */ xyz_t shape_pos[10];
    /* 0x2E8 */ ClObjPipe all_pipe;
}; /* size = 0x0334 */

#endif /* __Z64OVL_Z_EN_OKUTA__ */
