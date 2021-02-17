#ifndef __Z64OVL_Z_EN_JJ__
#define __Z64OVL_Z_EN_JJ__

#define Z_EN_JJ_ACTOR_NUMBER     0x005A
#define Z_EN_JJ_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_JJ_OBJECT_NUMBER    0x0040
#define Z_EN_JJ_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_jj_s z_en_jj_t;
struct z_en_jj_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ s_xyz joint1[22];
    /* 0x21C */ s_xyz joint2[22];
    /* 0x2A0 */ ClObjPipe pipe_info;
    /* 0x2EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2F0 */ ACTOR* ago;
    /* 0x2F4 */ ACTOR* eff;
    /* 0x2F8 */ short kuti;
    /* 0x2FA */ unshort flag;
    /* 0x2FC */ short timer;
    /* 0x2FE */ unchar eye_pattern;
    /* 0x2FF */ unchar eye_next;
    /* 0x300 */ unchar eye_count;
    /* 0x301 */ unchar eye_c_next;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_JJ__ */
