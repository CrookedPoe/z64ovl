#ifndef __Z64OVL_Z_EN_DS__
#define __Z64OVL_Z_EN_DS__

#define Z_EN_DS_ACTOR_NUMBER     0x0149
#define Z_EN_DS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DS_OBJECT_NUMBER    0x010F
#define Z_EN_DS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ds_s z_en_ds_t;
struct z_en_ds_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[6];
    /* 0x1A4 */ s_xyz joint2[6];
    /* 0x1C8 */ s_xyz neck_angle;
    /* 0x1CE */ s_xyz body_angle;
    /* 0x1D4 */ float environment;
    /* 0x1D8 */ unshort flag;
    /* 0x1DA */ unshort timer;
    /* 0x1DC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01F0 */

#endif /* __Z64OVL_Z_EN_DS__ */
