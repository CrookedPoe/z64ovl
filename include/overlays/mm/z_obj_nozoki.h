#ifndef __Z64OVL_Z_OBJ_NOZOKI__
#define __Z64OVL_Z_OBJ_NOZOKI__

#define Z_OBJ_NOZOKI_ACTOR_NUMBER     0x0233
#define Z_OBJ_NOZOKI_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_NOZOKI_OBJECT_NUMBER    0x0001
#define Z_OBJ_NOZOKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_nozoki_s z_obj_nozoki_t;
struct z_obj_nozoki_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ unsigned char type;
    /* 0x15D */ unsigned char counter;
    /* 0x15E */ signed char timer;
    /* 0x15F */ signed char event_no;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_OBJ_NOZOKI__ */
