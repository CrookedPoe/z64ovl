#ifndef __Z64OVL_Z_OCEFF_STORM__
#define __Z64OVL_Z_OCEFF_STORM__

#define Z_OCEFF_STORM_ACTOR_NUMBER     0x00D7
#define Z_OCEFF_STORM_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_STORM_OBJECT_NUMBER    0x0001
#define Z_OCEFF_STORM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_storm_s z_oceff_storm_t;
struct z_oceff_storm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unshort timer;
    /* 0x146 */ unchar fill;
    /* 0x147 */ unchar twist;
    /* 0x148 */ short work0;
    /* 0x14A */ short work1;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_OCEFF_STORM__ */
