#ifndef __Z64OVL_Z_EFF_LASTDAY__
#define __Z64OVL_Z_EFF_LASTDAY__

#define Z_EFF_LASTDAY_ACTOR_NUMBER     0x0272
#define Z_EFF_LASTDAY_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFF_LASTDAY_OBJECT_NUMBER    0x0246
#define Z_EFF_LASTDAY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_eff_lastday_s z_eff_lastday_t;
struct z_eff_lastday_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void* display;
    /* 0x148 */ void* evw_anime;
    /* 0x14C */ short count;
    /* 0x14E */ short alpha;
    /* 0x150 */ unshort demono;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_EFF_LASTDAY__ */
