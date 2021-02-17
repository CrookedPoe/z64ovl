#ifndef __Z64OVL_Z_EN_DT__
#define __Z64OVL_Z_EN_DT__

#define Z_EN_DT_ACTOR_NUMBER     0x026F
#define Z_EN_DT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DT_OBJECT_NUMBER    0x0241
#define Z_EN_DT_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_dt_s z_en_dt_t;
struct z_en_dt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[15];
    /* 0x1E2 */ s_xyz joint2[15];
    /* 0x23C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x240 */ int mes_flag;
    /* 0x244 */ short wait_timer;
    /* 0x246 */ short c_change_flag;
    /* 0x248 */ short eye_flag;
    /* 0x24A */ short eye_timer;
    /* 0x24C */ short eye_cont;
    /* 0x250 */ float end_frame;
    /* 0x254 */ short stat_mode;
    /* 0x256 */ short talk_count;
    /* 0x258 */ short Event_now[11];
    /* 0x26E */ short Event_count;
    /* 0x270 */ short Event_flag;
    /* 0x274 */ ACTOR* Muto_Actor;
    /* 0x278 */ ACTOR* Baisen_Actor;
    /* 0x27C */ ACTOR* Demo_Actor;
    /* 0x280 */ int demo_count;
    /* 0x284 */ s_xyz neck_angle;
    /* 0x28A */ s_xyz neck_max_angle;
    /* 0x290 */ int neck_flag;
    /* 0x294 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02E0 */

#endif /* __Z64OVL_Z_EN_DT__ */
