#ifndef __Z64OVL_Z_ITEM_SHIELD__
#define __Z64OVL_Z_ITEM_SHIELD__

#define Z_ITEM_SHIELD_ACTOR_NUMBER     0x00EE
#define Z_ITEM_SHIELD_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ITEM_SHIELD_OBJECT_NUMBER    0x0015
#define Z_ITEM_SHIELD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_item_shield_s z_item_shield_t;
struct z_item_shield_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ short accel;
    /* 0x18A */ short timer;
    /* 0x18C */ short flag;
    /* 0x18E */ unchar fire_timer[8];
    /* 0x198 */ xyz_t fire_pos[8];
    /* 0x1F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_ITEM_SHIELD__ */
