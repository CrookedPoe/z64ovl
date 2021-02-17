#ifndef __Z64OVL_Z_OCEFF_STORM__
#define __Z64OVL_Z_OCEFF_STORM__

#define Z_OCEFF_STORM_ACTOR_NUMBER     0x018B
#define Z_OCEFF_STORM_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_STORM_OBJECT_NUMBER    0x0001
#define Z_OCEFF_STORM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_storm_s z_oceff_storm_t;
struct z_oceff_storm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unshort timer;
    /* 0x13E */ unchar fill;
    /* 0x13F */ unchar twist;
    /* 0x140 */ short work0;
    /* 0x142 */ short work1;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_OCEFF_STORM__ */
