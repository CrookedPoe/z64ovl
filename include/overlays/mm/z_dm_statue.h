#ifndef __Z64OVL_Z_DM_STATUE__
#define __Z64OVL_Z_DM_STATUE__

#define Z_DM_STATUE_ACTOR_NUMBER     0x0161
#define Z_DM_STATUE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_STATUE_OBJECT_NUMBER    0x026C
#define Z_DM_STATUE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_dm_statue_s z_dm_statue_t;
struct z_dm_statue_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe oc_info;
    /* 0x190 */ unsigned char char_type;
    /* 0x191 */ unsigned char flag;
    /* 0x192 */ short alpha;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_DM_STATUE__ */
