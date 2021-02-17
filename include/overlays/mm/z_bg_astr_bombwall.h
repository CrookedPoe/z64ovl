#ifndef __Z64OVL_Z_BG_ASTR_BOMBWALL__
#define __Z64OVL_Z_BG_ASTR_BOMBWALL__

#define Z_BG_ASTR_BOMBWALL_ACTOR_NUMBER     0x028D
#define Z_BG_ASTR_BOMBWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_ASTR_BOMBWALL_OBJECT_NUMBER    0x0267
#define Z_BG_ASTR_BOMBWALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_astr_bombwall_s z_bg_astr_bombwall_t;
struct z_bg_astr_bombwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjTris tris;
    /* 0x180 */ ClObjTrisElem triselem[2];
    /* 0x238 */ short event_id[1];
}; /* size = 0x023C */

#endif /* __Z64OVL_Z_BG_ASTR_BOMBWALL__ */
