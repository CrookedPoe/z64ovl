#ifndef __Z64OVL_Z_EN_GUEST__
#define __Z64OVL_Z_EN_GUEST__

#define Z_EN_GUEST_ACTOR_NUMBER     0x01A4
#define Z_EN_GUEST_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GUEST_OBJECT_NUMBER    0x0111
#define Z_EN_GUEST_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_guest_s z_en_guest_t;
struct z_en_guest_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ ClObjPipe pipe_info;
    /* 0x290 */ NpcBasicAct npcbasic;
    /* 0x2B8 */ short count;
    /* 0x2BA */ short eye_time;
    /* 0x2BC */ short pw_wk_y[16];
    /* 0x2DC */ short pw_wk_z[16];
    /* 0x2FC */ signed char anime_bank_ID;
    /* 0x2FD */ unsigned char eyeProc_id;
    /* 0x2FE */ unsigned char eye_id;
}; /* size = 0x0310 */

#endif /* __Z64OVL_Z_EN_GUEST__ */
