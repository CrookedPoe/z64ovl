#ifndef __Z64OVL_Z_EN_TR__
#define __Z64OVL_Z_EN_TR__

#define Z_EN_TR_ACTOR_NUMBER     0x00CC
#define Z_EN_TR_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TR_OBJECT_NUMBER    0x00C1
#define Z_EN_TR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_tr_s z_en_tr_t;
struct z_en_tr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[27];
    /* 0x222 */ s_xyz joint2[27];
    /* 0x2C4 */ unshort flag;
    /* 0x2C6 */ unshort timer;
    /* 0x2C8 */ short demo_no;
    /* 0x2CC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2D0 */ Eye_Anime eye_anime;
    /* 0x2D4 */ SoftAnimTblInfo2* next_anime;
}; /* size = 0x02E8 */

#endif /* __Z64OVL_Z_EN_TR__ */
