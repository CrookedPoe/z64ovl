#ifndef __Z64OVL_Z_DM_AL__
#define __Z64OVL_Z_DM_AL__

#define Z_DM_AL_ACTOR_NUMBER     0x0262
#define Z_DM_AL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DM_AL_OBJECT_NUMBER    0x000D
#define Z_DM_AL_FLAGS            (ACTORFLAG_TALK)

typedef struct z_dm_al_s z_dm_al_t;
struct z_dm_al_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ MtxF old_mtxf[6];
    /* 0x30C */ s_xyz joint[27][2];
    /* 0x450 */ unsigned char olddousa;
    /* 0x454 */ int now_anim;
    /* 0x458 */ int old_anim;
    /* 0x45C */ int demo_flg;
}; /* size = 0x0460 */

#endif /* __Z64OVL_Z_DM_AL__ */
