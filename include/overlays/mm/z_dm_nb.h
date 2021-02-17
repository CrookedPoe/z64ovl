#ifndef __Z64OVL_Z_DM_NB__
#define __Z64OVL_Z_DM_NB__

#define Z_DM_NB_ACTOR_NUMBER     0x02A0
#define Z_DM_NB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DM_NB_OBJECT_NUMBER    0x0004
#define Z_DM_NB_FLAGS            (ACTORFLAG_TALK)

typedef struct z_dm_nb_s z_dm_nb_t;
struct z_dm_nb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ s_xyz joint[8][2];
    /* 0x1EC */ unsigned char olddousa;
    /* 0x1F0 */ int now_anim;
    /* 0x1F4 */ int old_anim;
    /* 0x1F8 */ int demo_flg;
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_DM_NB__ */
