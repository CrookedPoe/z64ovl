#ifndef __Z64OVL_Z_BG_LAST_BWALL__
#define __Z64OVL_Z_BG_LAST_BWALL__

#define Z_BG_LAST_BWALL_ACTOR_NUMBER     0x0298
#define Z_BG_LAST_BWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_LAST_BWALL_OBJECT_NUMBER    0x0234
#define Z_BG_LAST_BWALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_last_bwall_s z_bg_last_bwall_t;
struct z_bg_last_bwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjTris tris;
    /* 0x180 */ ClObjTrisElem triselem[2];
    /* 0x238 */ unsigned char type;
    /* 0x23A */ short event_id[1];
}; /* size = 0x023C */

#endif /* __Z64OVL_Z_BG_LAST_BWALL__ */
