#ifndef __Z64OVL_Z_BG_ICE_OBJECTS__
#define __Z64OVL_Z_BG_ICE_OBJECTS__

#define Z_BG_ICE_OBJECTS_ACTOR_NUMBER     0x00D6
#define Z_BG_ICE_OBJECTS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_ICE_OBJECTS_OBJECT_NUMBER    0x006B
#define Z_BG_ICE_OBJECTS_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ice_objects_s z_bg_ice_objects_t;
struct z_bg_ice_objects_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ xyz_t aim_pos;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_ICE_OBJECTS__ */
