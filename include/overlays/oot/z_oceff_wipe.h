#ifndef __Z64OVL_Z_OCEFF_WIPE__
#define __Z64OVL_Z_OCEFF_WIPE__

#define Z_OCEFF_WIPE_ACTOR_NUMBER     0x018A
#define Z_OCEFF_WIPE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_WIPE_OBJECT_NUMBER    0x0001
#define Z_OCEFF_WIPE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_wipe_s z_oceff_wipe_t;
struct z_oceff_wipe_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short timer;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_OCEFF_WIPE__ */
