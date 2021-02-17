#ifndef __Z64OVL_Z_EN_WEIYER__
#define __Z64OVL_Z_EN_WEIYER__

#define Z_EN_WEIYER_ACTOR_NUMBER     0x018C
#define Z_EN_WEIYER_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WEIYER_OBJECT_NUMBER    0x0026
#define Z_EN_WEIYER_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_weiyer_s z_en_weiyer_t;
struct z_en_weiyer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short aim_angle_y;
    /* 0x188 */ s_xyz joint1[19];
    /* 0x1FA */ s_xyz joint2[19];
    /* 0x26C */ float tmp_pos_y;
    /* 0x270 */ float aim_pos_y;
    /* 0x274 */ ClObjPipe all_pipe;
}; /* size = 0x02D0 */

#endif /* __Z64OVL_Z_EN_WEIYER__ */
