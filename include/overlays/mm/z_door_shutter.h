#ifndef __Z64OVL_Z_DOOR_SHUTTER__
#define __Z64OVL_Z_DOOR_SHUTTER__

#define Z_DOOR_SHUTTER_ACTOR_NUMBER     0x001E
#define Z_DOOR_SHUTTER_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_DOOR_SHUTTER_OBJECT_NUMBER    0x0001
#define Z_DOOR_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_door_shutter_s z_door_shutter_t;
struct z_door_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ short work[2];
    /* 0x160 */ short event_no;
    /* 0x162 */ unsigned char type;
    /* 0x163 */ unsigned char status_type;
    /* 0x164 */ unsigned char shape_type;
    /* 0x165 */ signed char change_bank_ID;
    /* 0x166 */ signed char key_timer;
    /* 0x167 */ signed char timer;
    /* 0x168 */ float yari_ratio;
    /* 0x16C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_DOOR_SHUTTER__ */
