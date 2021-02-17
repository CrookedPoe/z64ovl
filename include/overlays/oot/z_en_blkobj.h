#ifndef __Z64OVL_Z_EN_BLKOBJ__
#define __Z64OVL_Z_EN_BLKOBJ__

#define Z_EN_BLKOBJ_ACTOR_NUMBER     0x0136
#define Z_EN_BLKOBJ_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BLKOBJ_OBJECT_NUMBER    0x0125
#define Z_EN_BLKOBJ_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_blkobj_s z_en_blkobj_t;
struct z_en_blkobj_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short room_alpha;
    /* 0x156 */ short counter;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_EN_BLKOBJ__ */
