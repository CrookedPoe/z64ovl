#ifndef __Z64OVL_Z_DOOR_GERUDO__
#define __Z64OVL_Z_DOOR_GERUDO__

#define Z_DOOR_GERUDO_ACTOR_NUMBER     0x0172
#define Z_DOOR_GERUDO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DOOR_GERUDO_OBJECT_NUMBER    0x014B
#define Z_DOOR_GERUDO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_door_gerudo_s z_door_gerudo_t;
struct z_door_gerudo_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short work[1];
    /* 0x156 */ unsigned char key_timer;
    /* 0x157 */ unsigned char pad1;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_DOOR_GERUDO__ */
