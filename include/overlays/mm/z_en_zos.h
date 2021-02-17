#ifndef __Z64OVL_Z_EN_ZOS__
#define __Z64OVL_Z_EN_ZOS__

#define Z_EN_ZOS_ACTOR_NUMBER     0x0241
#define Z_EN_ZOS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOS_OBJECT_NUMBER    0x0220
#define Z_EN_ZOS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_zos_s z_en_zos_t;
struct z_en_zos_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ s_xyz joint1[18];
    /* 0x1B0 */ s_xyz joint2[18];
    /* 0x21C */ SKELETON_INFO skeleton;
    /* 0x260 */ ClObjPipe pipe_info;
    /* 0x2AC */ Eye_Anime eye_anime;
    /* 0x2B0 */ s_xyz neck_angle;
    /* 0x2B6 */ unshort flag;
    /* 0x2B8 */ short anime;
    /* 0x2BA */ short dousa;
    /* 0x2BC */ short near;
    /* 0x2C0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02C4 */

#endif /* __Z64OVL_Z_EN_ZOS__ */
