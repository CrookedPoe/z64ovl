#ifndef __Z64OVL_Z_EN_SSH__
#define __Z64OVL_Z_EN_SSH__

#define Z_EN_SSH_ACTOR_NUMBER     0x00D4
#define Z_EN_SSH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SSH_OBJECT_NUMBER    0x0127
#define Z_EN_SSH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ssh_s z_en_ssh_t;
struct z_en_ssh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[30];
    /* 0x23C */ s_xyz joint2[30];
    /* 0x2F0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2F4 */ ClObjPipe all_pipe[6];
    /* 0x4BC */ ClObjJntSph all_jntsph;
    /* 0x4DC */ ClObjJntSphElem sphelem[1];
    /* 0x51C */ short block_angle_sy;
    /* 0x51E */ short add_angle_sy;
    /* 0x520 */ short damage_timer;
    /* 0x522 */ short attack_timer;
    /* 0x524 */ short no_body_attack_timer;
    /* 0x526 */ short no_effect_timer;
    /* 0x528 */ short s_timer;
    /* 0x52A */ short stop_timer;
    /* 0x52C */ short fall_timer;
    /* 0x52E */ short swingtimer;
    /* 0x530 */ int blure_index;
    /* 0x534 */ float per;
    /* 0x538 */ float bottom_y_pos;
    /* 0x53C */ xyz_t string_top;
    /* 0x548 */ xyz_t string_pos[10];
    /* 0x5C0 */ short z_roll_count;
    /* 0x5C2 */ unshort flag;
    /* 0x5C4 */ unchar damage;
    /* 0x5C6 */ Eye_Anime eye_anime;
}; /* size = 0x05CC */

#endif /* __Z64OVL_Z_EN_SSH__ */
