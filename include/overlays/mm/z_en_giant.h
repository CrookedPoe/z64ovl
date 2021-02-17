#ifndef __Z64OVL_Z_EN_GIANT__
#define __Z64OVL_Z_EN_GIANT__

#define Z_EN_GIANT_ACTOR_NUMBER     0x01DB
#define Z_EN_GIANT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GIANT_OBJECT_NUMBER    0x01B8
#define Z_EN_GIANT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_giant_s z_en_giant_t;
struct z_en_giant_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ short anime_now;
    /* 0x24A */ unshort part;
    /* 0x24C */ unshort dousa;
    /* 0x24E */ short alpha;
    /* 0x250 */ unshort sound;
    /* 0x254 */ MtxF hige;
    /* 0x294 */ Eye_Anime eye_anime;
    /* 0x298 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_EN_GIANT__ */
