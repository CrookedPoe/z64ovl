#ifndef __Z64OVL_Z_EN_SYATEKI_MAN__
#define __Z64OVL_Z_EN_SYATEKI_MAN__

#define Z_EN_SYATEKI_MAN_ACTOR_NUMBER     0x011D
#define Z_EN_SYATEKI_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SYATEKI_MAN_OBJECT_NUMBER    0x01AC
#define Z_EN_SYATEKI_MAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_man_s z_en_syateki_man_t;
struct z_en_syateki_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ Path_Info* path_info;
    /* 0x190 */ int mato_go_sign;
    /* 0x194 */ int day;
    /* 0x198 */ s_xyz joint1[16];
    /* 0x1F8 */ s_xyz joint2[16];
    /* 0x258 */ s_xyz neck_angle;
    /* 0x25E */ s_xyz body_angle;
    /* 0x264 */ short eyesID;
    /* 0x266 */ short eyesTM;
    /* 0x268 */ short camera_no;
    /* 0x26A */ short game_flag;
    /* 0x26C */ short syateki_game_timer;
    /* 0x26E */ short okuta_hit_flag;
    /* 0x270 */ short end_game_timer;
    /* 0x272 */ short set_dnuts_flag;
    /* 0x274 */ short set_crow_flag;
    /* 0x276 */ short set_wf_flag;
    /* 0x278 */ short dnuts_hit_count;
    /* 0x27A */ short crow_hit_count;
    /* 0x27C */ short mori_game_cycle;
    /* 0x27E */ short mato_no;
    /* 0x280 */ short hit_count;
    /* 0x282 */ short talk_flag;
    /* 0x284 */ short old_message_no;
}; /* size = 0x0288 */

#endif /* __Z64OVL_Z_EN_SYATEKI_MAN__ */
