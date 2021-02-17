#ifndef __Z64OVL_Z_OCEFF_SPOT__
#define __Z64OVL_Z_OCEFF_SPOT__

#define Z_OCEFF_SPOT_ACTOR_NUMBER     0x00CC
#define Z_OCEFF_SPOT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_SPOT_OBJECT_NUMBER    0x0001
#define Z_OCEFF_SPOT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_spot_s z_oceff_spot_t;
struct z_oceff_spot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ Light_list* light_list;
    /* 0x148 */ Light_data light_data;
    /* 0x158 */ Light_list* light_list2;
    /* 0x15C */ Light_data light_data2;
    /* 0x16C */ float pow;
    /* 0x170 */ unshort count;
    /* 0x174 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_OCEFF_SPOT__ */
