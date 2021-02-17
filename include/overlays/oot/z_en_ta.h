#ifndef __Z64OVL_Z_EN_TA__
#define __Z64OVL_Z_EN_TA__

#define Z_EN_TA_ACTOR_NUMBER     0x0084
#define Z_EN_TA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TA_OBJECT_NUMBER    0x0088
#define Z_EN_TA_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ta_s z_en_ta_t;
struct z_en_ta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ void (*anime_prc)(/* ECOFF does not store param types */);
    /* 0x254 */ ClObjPipe pipe_info;
    /* 0x2A0 */ void* eyesProc;
    /* 0x2A4 */ short eyesID;
    /* 0x2A6 */ short eyesTM;
    /* 0x2A8 */ ACTOR* niw[3];
    /* 0x2B4 */ short niw_time[3];
    /* 0x2BA */ unchar get_niw;
    /* 0x2BC */ short timer;
    /* 0x2BE */ short count;
    /* 0x2C0 */ short camera_no;
    /* 0x2C2 */ short active_no;
    /* 0x2C4 */ s_xyz neck_angle;
    /* 0x2CA */ s_xyz body_angle;
    /* 0x2D0 */ unshort flag;
    /* 0x2D2 */ short anime_timer;
    /* 0x2D4 */ SoftAnimTblInfo2* next_anime;
}; /* size = 0x02E8 */

#endif /* __Z64OVL_Z_EN_TA__ */
