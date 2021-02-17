#ifndef __Z64OVL_Z_EN_VALI__
#define __Z64OVL_Z_EN_VALI__

#define Z_EN_VALI_ACTOR_NUMBER     0x0063
#define Z_EN_VALI_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_VALI_OBJECT_NUMBER    0x0056
#define Z_EN_VALI_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_QUAKE)

typedef struct z_en_vali_s z_en_vali_t;
struct z_en_vali_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char elect_timer;
    /* 0x185 */ unsigned char speedup_timer;
    /* 0x186 */ short timer;
    /* 0x188 */ s_xyz joint1[29];
    /* 0x236 */ s_xyz joint2[29];
    /* 0x2E4 */ float arm_scale;
    /* 0x2E8 */ float keep_pos_y;
    /* 0x2EC */ ClObjSwrd at_l_sword;
    /* 0x36C */ ClObjSwrd at_r_sword;
    /* 0x3EC */ ClObjPipe all_pipe;
}; /* size = 0x0448 */

#endif /* __Z64OVL_Z_EN_VALI__ */
