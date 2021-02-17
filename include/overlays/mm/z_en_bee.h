#ifndef __Z64OVL_Z_EN_BEE__
#define __Z64OVL_Z_EN_BEE__

#define Z_EN_BEE_ACTOR_NUMBER     0x0204
#define Z_EN_BEE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BEE_OBJECT_NUMBER    0x01EB
#define Z_EN_BEE_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_bee_s z_en_bee_t;
struct z_en_bee_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ short wait_timer;
    /* 0x206 */ short sound_timer;
    /* 0x208 */ short stat_mode;
    /* 0x20C */ int move_angle;
    /* 0x210 */ int move_angle_Y;
    /* 0x214 */ int move_index;
    /* 0x218 */ int index;
    /* 0x21C */ xyz_t move_pos[2];
    /* 0x234 */ s_xyz move_search_angle;
    /* 0x23C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0288 */

#endif /* __Z64OVL_Z_EN_BEE__ */
