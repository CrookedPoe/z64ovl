#ifndef __Z64OVL_Z_BG_BDAN_OBJECTS__
#define __Z64OVL_Z_BG_BDAN_OBJECTS__

#define Z_BG_BDAN_OBJECTS_ACTOR_NUMBER     0x00C8
#define Z_BG_BDAN_OBJECTS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_BDAN_OBJECTS_OBJECT_NUMBER    0x0096
#define Z_BG_BDAN_OBJECTS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_bdan_objects_s z_bg_bdan_objects_t;
struct z_bg_bdan_objects_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15A */ short timer;
    /* 0x15C */ ClObjPipe at_pipe;
    /* 0x1A8 */ int contact_ru1;
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_BG_BDAN_OBJECTS__ */
