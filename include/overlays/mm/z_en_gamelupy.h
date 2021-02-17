#ifndef __Z64OVL_Z_EN_GAMELUPY__
#define __Z64OVL_Z_EN_GAMELUPY__

#define Z_EN_GAMELUPY_ACTOR_NUMBER     0x01D2
#define Z_EN_GAMELUPY_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GAMELUPY_OBJECT_NUMBER    0x0001
#define Z_EN_GAMELUPY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_gamelupy_s z_en_gamelupy_t;
struct z_en_gamelupy_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ int lupy_type;
    /* 0x198 */ short* common_value_s;
    /* 0x19C */ short mode_timer;
    /* 0x19E */ short eff_angle;
    /* 0x1A0 */ short eff_angle_speed;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_GAMELUPY__ */
