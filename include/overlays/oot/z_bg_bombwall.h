#ifndef __Z64OVL_Z_BG_BOMBWALL__
#define __Z64OVL_Z_BG_BOMBWALL__

#define Z_BG_BOMBWALL_ACTOR_NUMBER     0x00D0
#define Z_BG_BOMBWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_BOMBWALL_OBJECT_NUMBER    0x0002
#define Z_BG_BOMBWALL_FLAGS            (ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_bg_bombwall_s z_bg_bombwall_t;
struct z_bg_bombwall_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjTris tris;
    /* 0x174 */ ClObjTrisElem elem[3];
    /* 0x288 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x28C */ Gfx* model;
    /* 0x290 */ short timer;
    /* 0x292 */ unsigned char flag;
}; /* size = 0x02A4 */

#endif /* __Z64OVL_Z_BG_BOMBWALL__ */
