#ifndef __Z64OVL_Z_OBJ_WIND__
#define __Z64OVL_Z_OBJ_WIND__

#define Z_OBJ_WIND_ACTOR_NUMBER     0x01ED
#define Z_OBJ_WIND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_WIND_OBJECT_NUMBER    0x0001
#define Z_OBJ_WIND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_wind_s z_obj_wind_t;
struct z_obj_wind_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char mode;
    /* 0x145 */ unsigned char pad1;
    /* 0x146 */ short counter;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_WIND__ */
