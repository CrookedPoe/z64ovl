#ifndef __Z64OVL_Z_DOOR_ANA__
#define __Z64OVL_Z_DOOR_ANA__

#define Z_DOOR_ANA_ACTOR_NUMBER     0x0055
#define Z_DOOR_ANA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DOOR_ANA_OBJECT_NUMBER    0x0002
#define Z_DOOR_ANA_FLAGS            (ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_door_ana_s z_door_ana_t;
struct z_door_ana_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe ac_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_DOOR_ANA__ */
