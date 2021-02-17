#ifndef __Z64OVL_Z_EN_MINIFROG__
#define __Z64OVL_Z_EN_MINIFROG__

#define Z_EN_MINIFROG_ACTOR_NUMBER     0x0022
#define Z_EN_MINIFROG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MINIFROG_OBJECT_NUMBER    0x00BC
#define Z_EN_MINIFROG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_minifrog_s z_en_minifrog_t;
struct z_en_minifrog_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ ACTOR* leader;
    /* 0x2B0 */ short color;
    /* 0x2B2 */ short jump_mode;
    /* 0x2B4 */ short timer;
    /* 0x2B6 */ unshort flag;
    /* 0x2B8 */ ClObjPipe all_pipe;
}; /* size = 0x0304 */

#endif /* __Z64OVL_Z_EN_MINIFROG__ */
