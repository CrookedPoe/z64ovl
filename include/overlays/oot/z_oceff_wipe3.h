#ifndef __Z64OVL_Z_OCEFF_WIPE3__
#define __Z64OVL_Z_OCEFF_WIPE3__

#define Z_OCEFF_WIPE3_ACTOR_NUMBER     0x0199
#define Z_OCEFF_WIPE3_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_WIPE3_OBJECT_NUMBER    0x0001
#define Z_OCEFF_WIPE3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_wipe3_s z_oceff_wipe3_t;
struct z_oceff_wipe3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short timer;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_OCEFF_WIPE3__ */
