#ifndef __Z64OVL_Z_DOOR_TOKI__
#define __Z64OVL_Z_DOOR_TOKI__

#define Z_DOOR_TOKI_ACTOR_NUMBER     0x0070
#define Z_DOOR_TOKI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DOOR_TOKI_OBJECT_NUMBER    0x005E
#define Z_DOOR_TOKI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_door_toki_s z_door_toki_t;
struct z_door_toki_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_DOOR_TOKI__ */
