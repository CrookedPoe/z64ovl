#ifndef __Z64OVL_Z_OCEFF_WIPE2__
#define __Z64OVL_Z_OCEFF_WIPE2__

#define Z_OCEFF_WIPE2_ACTOR_NUMBER     0x00DF
#define Z_OCEFF_WIPE2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_WIPE2_OBJECT_NUMBER    0x0001
#define Z_OCEFF_WIPE2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_wipe2_s z_oceff_wipe2_t;
struct z_oceff_wipe2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short timer;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OCEFF_WIPE2__ */
