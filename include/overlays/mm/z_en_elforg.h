#ifndef __Z64OVL_Z_EN_ELFORG__
#define __Z64OVL_Z_EN_ELFORG__

#define Z_EN_ELFORG_ACTOR_NUMBER     0x01B0
#define Z_EN_ELFORG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ELFORG_OBJECT_NUMBER    0x0001
#define Z_EN_ELFORG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_elforg_s z_en_elforg_t;
struct z_en_elforg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ ClObjPipe pipe_info;
    /* 0x210 */ ACTOR* target;
    /* 0x214 */ unshort flag;
    /* 0x216 */ short kao;
    /* 0x218 */ short color;
    /* 0x21C */ int frame_counter;
    /* 0x220 */ int wait_counter;
    /* 0x224 */ float now_speedF;
    /* 0x228 */ float hankei;
    /* 0x22C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0230 */

#endif /* __Z64OVL_Z_EN_ELFORG__ */
