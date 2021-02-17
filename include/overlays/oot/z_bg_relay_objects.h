#ifndef __Z64OVL_Z_BG_RELAY_OBJECTS__
#define __Z64OVL_Z_BG_RELAY_OBJECTS__

#define Z_BG_RELAY_OBJECTS_ACTOR_NUMBER     0x0123
#define Z_BG_RELAY_OBJECTS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_RELAY_OBJECTS_OBJECT_NUMBER    0x006C
#define Z_BG_RELAY_OBJECTS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_relay_objects_s z_bg_relay_objects_t;
struct z_bg_relay_objects_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x159 */ signed char tmp_room_ID;
    /* 0x15A */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_RELAY_OBJECTS__ */
