#ifndef __Z64OVL_Z_EFF_ZORABAND__
#define __Z64OVL_Z_EFF_ZORABAND__

#define Z_EFF_ZORABAND_ACTOR_NUMBER     0x0286
#define Z_EFF_ZORABAND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFF_ZORABAND_OBJECT_NUMBER    0x0255
#define Z_EFF_ZORABAND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_eff_zoraband_s z_eff_zoraband_t;
struct z_eff_zoraband_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short alpha;
    /* 0x146 */ unshort flag;
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EFF_ZORABAND__ */
