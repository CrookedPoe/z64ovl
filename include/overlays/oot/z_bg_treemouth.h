#ifndef __Z64OVL_Z_BG_TREEMOUTH__
#define __Z64OVL_Z_BG_TREEMOUTH__

#define Z_BG_TREEMOUTH_ACTOR_NUMBER     0x003E
#define Z_BG_TREEMOUTH_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_TREEMOUTH_OBJECT_NUMBER    0x002A
#define Z_BG_TREEMOUTH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_treemouth_s z_bg_treemouth_t;
struct z_bg_treemouth_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short counter;
    /* 0x158 */ float ratio;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_TREEMOUTH__ */
