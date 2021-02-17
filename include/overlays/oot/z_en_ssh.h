#ifndef __Z64OVL_Z_EN_SSH__
#define __Z64OVL_Z_EN_SSH__

#define Z_EN_SSH_ACTOR_NUMBER     0x0188
#define Z_EN_SSH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SSH_OBJECT_NUMBER    0x015E
#define Z_EN_SSH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ssh_s z_en_ssh_t;
struct z_en_ssh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[30];
    /* 0x234 */ s_xyz joint2[30];
    /* 0x2E8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2EC */ ClObjPipe all_pipe[6];
    /* 0x4B4 */ ClObjJntSph all_jntsph;
    /* 0x4D4 */ ClObjJntSphElem sphelem[1];
    /* 0x514 */ short block_angle_sy;
    /* 0x516 */ short add_angle_sy;
    /* 0x518 */ short damage_timer;
    /* 0x51A */ short attack_timer;
    /* 0x51C */ short no_body_attack_timer;
    /* 0x51E */ short no_effect_timer;
    /* 0x520 */ short s_timer;
    /* 0x522 */ short stop_timer;
    /* 0x524 */ short fall_timer;
    /* 0x526 */ short swingtimer;
    /* 0x528 */ int blure_index;
    /* 0x52C */ float per;
    /* 0x530 */ float bottom_y_pos;
    /* 0x534 */ xyz_t string_top;
    /* 0x540 */ xyz_t string_pos[10];
    /* 0x5B8 */ short z_roll_count;
    /* 0x5BA */ unshort flag;
    /* 0x5BC */ unchar damage;
    /* 0x5BE */ Eye_Anime eye_anime;
}; /* size = 0x05D4 */

#endif /* __Z64OVL_Z_EN_SSH__ */
