#ifndef __Z64OVL_Z_EN_DAIKU2__
#define __Z64OVL_Z_EN_DAIKU2__

#define Z_EN_DAIKU2_ACTOR_NUMBER     0x026A
#define Z_EN_DAIKU2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DAIKU2_OBJECT_NUMBER    0x00F1
#define Z_EN_DAIKU2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_daiku2_s z_en_daiku2_t;
struct z_en_daiku2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ Path_Info* path;
    /* 0x25C */ short path_count;
    /* 0x260 */ float turuhashi_scale;
    /* 0x264 */ float turuhashi_max_scale;
    /* 0x268 */ xyz_t move_pos;
    /* 0x274 */ short wait_timer_count;
    /* 0x276 */ short c_change_flag;
    /* 0x278 */ short save_bit;
    /* 0x27A */ short rail_index;
    /* 0x27C */ short search_angle;
    /* 0x280 */ int index;
    /* 0x284 */ float end_frame;
    /* 0x288 */ short stat_mode;
    /* 0x28A */ short talk_count;
    /* 0x28C */ EN_DAIKU2_EFF en_daiku2_eff[50];
    /* 0xD7C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0DC8 */

#endif /* __Z64OVL_Z_EN_DAIKU2__ */
