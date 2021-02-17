#ifndef __Z64OVL_Z_EN_BROB__
#define __Z64OVL_Z_EN_BROB__

#define Z_EN_BROB_ACTOR_NUMBER     0x00B6
#define Z_EN_BROB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BROB_OBJECT_NUMBER    0x00AC
#define Z_EN_BROB_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_brob_s z_en_brob_t;
struct z_en_brob_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x19C */ short timer;
    /* 0x19E */ short draw_offset_y;
    /* 0x1A0 */ s_xyz joint1[10];
    /* 0x1DC */ s_xyz joint2[10];
    /* 0x218 */ ClObjPipe all_pipe[2];
}; /* size = 0x02C0 */

#endif /* __Z64OVL_Z_EN_BROB__ */
