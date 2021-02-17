#ifndef __Z64OVL_Z_SHOT_SUN__
#define __Z64OVL_Z_SHOT_SUN__

#define Z_SHOT_SUN_ACTOR_NUMBER     0x0183
#define Z_SHOT_SUN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_SHOT_SUN_OBJECT_NUMBER    0x0001
#define Z_SHOT_SUN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_shot_sun_s z_shot_sun_t;
struct z_shot_sun_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ s_xyz pos;
    /* 0x192 */ short timer;
    /* 0x194 */ unsigned char oc_sc_end;
}; /* size = 0x01A8 */

#endif /* __Z64OVL_Z_SHOT_SUN__ */
