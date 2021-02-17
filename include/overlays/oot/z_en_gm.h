#ifndef __Z64OVL_Z_EN_GM__
#define __Z64OVL_Z_EN_GM__

#define Z_EN_GM_ACTOR_NUMBER     0x013D
#define Z_EN_GM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GM_OBJECT_NUMBER    0x00C9
#define Z_EN_GM_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_gm_s z_en_gm_t;
struct z_en_gm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[18];
    /* 0x1EC */ s_xyz joint2[18];
    /* 0x258 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x25C */ void (*subProc)(/* ECOFF does not store param types */);
    /* 0x260 */ ClObjPipe pipe_info;
    /* 0x2AC */ signed char model_bank_ID;
    /* 0x2AE */ short count;
    /* 0x2B0 */ short eyesTM;
    /* 0x2B2 */ unsigned char eyesID;
    /* 0x2B4 */ xyz_t talk_pos;
}; /* size = 0x02D0 */

#endif /* __Z64OVL_Z_EN_GM__ */
