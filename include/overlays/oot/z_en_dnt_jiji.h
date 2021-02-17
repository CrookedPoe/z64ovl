#ifndef __Z64OVL_Z_EN_DNT_JIJI__
#define __Z64OVL_Z_EN_DNT_JIJI__

#define Z_EN_DNT_JIJI_ACTOR_NUMBER     0x01A2
#define Z_EN_DNT_JIJI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNT_JIJI_OBJECT_NUMBER    0x0171
#define Z_EN_DNT_JIJI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_dnt_jiji_s z_en_dnt_jiji_t;
struct z_en_dnt_jiji_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[13];
    /* 0x1CE */ s_xyz joint2[13];
    /* 0x21C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x220 */ xyz_t pos;
    /* 0x22C */ u8 no_HIT;
    /* 0x22E */ short action_mode;
    /* 0x230 */ short demo_timer;
    /* 0x232 */ short sound_timer;
    /* 0x234 */ short eye_timer;
    /* 0x236 */ short parts_time;
    /* 0x238 */ short ende_frame;
    /* 0x23A */ short walk_frag;
    /* 0x23C */ short eye_cont;
    /* 0x23E */ short mode;
    /* 0x240 */ short message_end_code;
    /* 0x242 */ short damage_frag;
    /* 0x244 */ int item_index;
    /* 0x248 */ ACTOR* Demo_Actor;
    /* 0x24C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02A8 */

#endif /* __Z64OVL_Z_EN_DNT_JIJI__ */
