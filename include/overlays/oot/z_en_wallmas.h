#ifndef __Z64OVL_Z_EN_WALLMAS__
#define __Z64OVL_Z_EN_WALLMAS__

#define Z_EN_WALLMAS_ACTOR_NUMBER     0x0011
#define Z_EN_WALLMAS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WALLMAS_OBJECT_NUMBER    0x000B
#define Z_EN_WALLMAS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_wallmas_s z_en_wallmas_t;
struct z_en_wallmas_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short sw_num;
    /* 0x188 */ s_xyz joint1[25];
    /* 0x21E */ s_xyz joint2[25];
    /* 0x2B4 */ float aim_pos_y;
    /* 0x2B8 */ ClObjPipe acoc_pipe;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_WALLMAS__ */
