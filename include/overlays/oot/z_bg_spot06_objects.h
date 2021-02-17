#ifndef __Z64OVL_Z_BG_SPOT06_OBJECTS__
#define __Z64OVL_Z_BG_SPOT06_OBJECTS__

#define Z_BG_SPOT06_OBJECTS_ACTOR_NUMBER     0x00D5
#define Z_BG_SPOT06_OBJECTS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT06_OBJECTS_OBJECT_NUMBER    0x006A
#define Z_BG_SPOT06_OBJECTS_FLAGS            (ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_bg_spot06_objects_s z_bg_spot06_objects_t;
struct z_bg_spot06_objects_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short sw_num;
    /* 0x15A */ short timer;
    /* 0x15C */ float water_ypos;
    /* 0x160 */ ClObjJntSph acoc_jntsph;
    /* 0x180 */ ClObjJntSphElem sph_elem;
}; /* size = 0x01D0 */

#endif /* __Z64OVL_Z_BG_SPOT06_OBJECTS__ */
