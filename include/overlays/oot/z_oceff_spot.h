#ifndef __Z64OVL_Z_OCEFF_SPOT__
#define __Z64OVL_Z_OCEFF_SPOT__

#define Z_OCEFF_SPOT_ACTOR_NUMBER     0x017E
#define Z_OCEFF_SPOT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OCEFF_SPOT_OBJECT_NUMBER    0x0001
#define Z_OCEFF_SPOT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_oceff_spot_s z_oceff_spot_t;
struct z_oceff_spot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ Light_list* light_list;
    /* 0x140 */ Light_data light_data;
    /* 0x150 */ Light_list* light_list2;
    /* 0x154 */ Light_data light_data2;
    /* 0x164 */ float pow;
    /* 0x168 */ unshort count;
    /* 0x16C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_OCEFF_SPOT__ */
