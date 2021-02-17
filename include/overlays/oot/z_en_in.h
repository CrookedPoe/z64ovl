#ifndef __Z64OVL_Z_EN_IN__
#define __Z64OVL_Z_EN_IN__

#define Z_EN_IN_ACTOR_NUMBER     0x00CB
#define Z_EN_IN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_IN_OBJECT_NUMBER    0x00C0
#define Z_EN_IN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_in_s z_en_in_t;
struct z_en_in_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ float play_flame;
    /* 0x1D4 */ signed char bankID;
    /* 0x1D6 */ short anim_ID;
    /* 0x1D8 */ short anim_id;
    /* 0x1DA */ short timer;
    /* 0x1DC */ short snd_timer;
    /* 0x1DE */ short count;
    /* 0x1E0 */ short camera_no;
    /* 0x1E2 */ short active_no;
    /* 0x1E4 */ int timer_set;
    /* 0x1E8 */ short mesck_now;
    /* 0x1EA */ short mesck_old;
    /* 0x1EC */ short mesck_cnt;
    /* 0x1EE */ s_xyz joint[20][2];
    /* 0x2E0 */ xyz_t way;
    /* 0x2EC */ xyz_t eye;
    /* 0x2F8 */ NpcBasicAct npcbasic;
    /* 0x320 */ s_xyz pw_work[20];
}; /* size = 0x03A8 */

#endif /* __Z64OVL_Z_EN_IN__ */
