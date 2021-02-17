#ifndef __Z64OVL_Z_EN_SKJNEEDLE__
#define __Z64OVL_Z_EN_SKJNEEDLE__

#define Z_EN_SKJNEEDLE_ACTOR_NUMBER     0x0116
#define Z_EN_SKJNEEDLE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SKJNEEDLE_OBJECT_NUMBER    0x010A
#define Z_EN_SKJNEEDLE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_skjneedle_s z_en_skjneedle_t;
struct z_en_skjneedle_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ short count;
    /* 0x1D2 */ short life_timer;
    /* 0x1D4 */ float speed;
}; /* size = 0x01E8 */

#endif /* __Z64OVL_Z_EN_SKJNEEDLE__ */
