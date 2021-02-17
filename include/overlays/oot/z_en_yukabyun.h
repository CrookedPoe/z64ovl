#ifndef __Z64OVL_Z_EN_YUKABYUN__
#define __Z64OVL_Z_EN_YUKABYUN__

#define Z_EN_YUKABYUN_ACTOR_NUMBER     0x006B
#define Z_EN_YUKABYUN_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_YUKABYUN_OBJECT_NUMBER    0x005F
#define Z_EN_YUKABYUN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_yukabyun_s z_en_yukabyun_t;
struct z_en_yukabyun_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x142 */ unsigned char tex_num;
    /* 0x144 */ ClObjPipe all_pipe;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_YUKABYUN__ */
