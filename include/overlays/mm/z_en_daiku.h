#ifndef __Z64OVL_Z_EN_DAIKU__
#define __Z64OVL_Z_EN_DAIKU__

#define Z_EN_DAIKU_ACTOR_NUMBER     0x009C
#define Z_EN_DAIKU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DAIKU_OBJECT_NUMBER    0x00F1
#define Z_EN_DAIKU_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_daiku_s z_en_daiku_t;
struct z_en_daiku_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ Path_Info* path;
    /* 0x25C */ short path_count;
    /* 0x25E */ s_xyz neck_angle;
    /* 0x264 */ s_xyz neck_max_angle;
    /* 0x26C */ xyz_t move_pos;
    /* 0x278 */ int index;
    /* 0x27C */ short wait_timer;
    /* 0x27E */ short initial_timer;
    /* 0x280 */ short search_angle;
    /* 0x282 */ short search_angle2;
    /* 0x284 */ float end_frame;
    /* 0x288 */ short rail_index;
    /* 0x28A */ short stat_mode;
    /* 0x28C */ short talk_count;
    /* 0x290 */ int neck_flag;
    /* 0x294 */ ACTOR* Demo_Actor;
    /* 0x298 */ int demo_count;
    /* 0x29C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02E8 */

#endif /* __Z64OVL_Z_EN_DAIKU__ */
