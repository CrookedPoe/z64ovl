#ifndef __Z64OVL_Z_EN_RECEPGIRL__
#define __Z64OVL_Z_EN_RECEPGIRL__

#define Z_EN_RECEPGIRL_ACTOR_NUMBER     0x0290
#define Z_EN_RECEPGIRL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RECEPGIRL_OBJECT_NUMBER    0x0129
#define Z_EN_RECEPGIRL_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_recepgirl_s z_en_recepgirl_t;
struct z_en_recepgirl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ unsigned char eye_num;
    /* 0x2AE */ s_xyz neck_angle;
}; /* size = 0x02B4 */

#endif /* __Z64OVL_Z_EN_RECEPGIRL__ */
