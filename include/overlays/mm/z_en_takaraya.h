#ifndef __Z64OVL_Z_EN_TAKARAYA__
#define __Z64OVL_Z_EN_TAKARAYA__

#define Z_EN_TAKARAYA_ACTOR_NUMBER     0x01C1
#define Z_EN_TAKARAYA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TAKARAYA_OBJECT_NUMBER    0x0129
#define Z_EN_TAKARAYA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_takaraya_s z_en_takaraya_t;
struct z_en_takaraya_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ unsigned char eye_num;
    /* 0x2AD */ unsigned char game_end_flg;
    /* 0x2AE */ short timer;
    /* 0x2B0 */ short sw_num;
    /* 0x2B2 */ short base_sw_num;
    /* 0x2B4 */ s_xyz neck_angle;
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_EN_TAKARAYA__ */
