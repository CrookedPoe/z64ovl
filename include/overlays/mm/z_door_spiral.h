#ifndef __Z64OVL_Z_DOOR_SPIRAL__
#define __Z64OVL_Z_DOOR_SPIRAL__

#define Z_DOOR_SPIRAL_ACTOR_NUMBER     0x0100
#define Z_DOOR_SPIRAL_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_DOOR_SPIRAL_OBJECT_NUMBER    0x0001
#define Z_DOOR_SPIRAL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_door_spiral_s z_door_spiral_t;
struct z_door_spiral_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char open_flag;
    /* 0x145 */ unsigned char type;
    /* 0x146 */ unsigned char updown;
    /* 0x147 */ unsigned char status_type;
    /* 0x148 */ unsigned char shape_type;
    /* 0x149 */ signed char change_bank_ID;
    /* 0x14A */ signed char timer;
    /* 0x14B */ unsigned char pad1;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_DOOR_SPIRAL__ */
