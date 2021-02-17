#ifndef __Z64OVL_Z_OCEFF_WIPE5__
#define __Z64OVL_Z_OCEFF_WIPE5__

#define Z_OCEFF_WIPE5_ACTOR_NUMBER     0x0249
#define Z_OCEFF_WIPE5_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_WIPE5_OBJECT_NUMBER    0x0001
#define Z_OCEFF_WIPE5_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_wipe5_s z_oceff_wipe5_t;
struct z_oceff_wipe5_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short timer;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OCEFF_WIPE5__ */
