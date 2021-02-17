#ifndef __Z64OVL_Z_OCEFF_WIPE7__
#define __Z64OVL_Z_OCEFF_WIPE7__

#define Z_OCEFF_WIPE7_ACTOR_NUMBER     0x024E
#define Z_OCEFF_WIPE7_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_WIPE7_OBJECT_NUMBER    0x0001
#define Z_OCEFF_WIPE7_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_wipe7_s z_oceff_wipe7_t;
struct z_oceff_wipe7_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short timer;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OCEFF_WIPE7__ */
