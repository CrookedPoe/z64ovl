#ifndef __Z64OVL_Z_BG_IKANA_MIRROR__
#define __Z64OVL_Z_BG_IKANA_MIRROR__

#define Z_BG_IKANA_MIRROR_ACTOR_NUMBER     0x0219
#define Z_BG_IKANA_MIRROR_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_IKANA_MIRROR_OBJECT_NUMBER    0x0203
#define Z_BG_IKANA_MIRROR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ikana_mirror_s z_bg_ikana_mirror_t;
struct z_bg_ikana_mirror_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjTris receive;
    /* 0x17C */ ClObjTrisElem receive_elem[9];
    /* 0x4B8 */ ClObjSwrd emit[2];
    /* 0x5B8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x5BC */ EvwAnimeInfo* evw_in;
    /* 0x5C0 */ EvwAnimeInfo* evw_out;
    /* 0x5C4 */ short power_meter;
    /* 0x5C6 */ unsigned char in_alpha;
    /* 0x5C7 */ unsigned char out_alpha;
    /* 0x5C8 */ signed char no_receive_counter;
}; /* size = 0x05CC */

#endif /* __Z64OVL_Z_BG_IKANA_MIRROR__ */
