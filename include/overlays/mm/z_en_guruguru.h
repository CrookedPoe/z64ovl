#ifndef __Z64OVL_Z_EN_GURUGURU__
#define __Z64OVL_Z_EN_GURUGURU__

#define Z_EN_GURUGURU_ACTOR_NUMBER     0x0248
#define Z_EN_GURUGURU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GURUGURU_OBJECT_NUMBER    0x00FF
#define Z_EN_GURUGURU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_guruguru_s z_en_guruguru_t;
struct z_en_guruguru_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ s_xyz neck_angle;
    /* 0x252 */ s_xyz neck_max_angle;
    /* 0x258 */ s_xyz body_angle;
    /* 0x25E */ s_xyz body_max_angle;
    /* 0x264 */ short wait_timer;
    /* 0x266 */ short mes_wait_timer;
    /* 0x268 */ short play_music_flag;
    /* 0x26C */ float end_frame;
    /* 0x270 */ u8 nuts_flag;
    /* 0x272 */ short stat_mode;
    /* 0x274 */ short talk_count;
    /* 0x276 */ short eye_cont;
    /* 0x278 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02C4 */

#endif /* __Z64OVL_Z_EN_GURUGURU__ */
