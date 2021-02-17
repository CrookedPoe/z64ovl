#ifndef __Z64OVL_Z_OBJ_DEKUJR__
#define __Z64OVL_Z_OBJ_DEKUJR__

#define Z_OBJ_DEKUJR_ACTOR_NUMBER     0x00D3
#define Z_OBJ_DEKUJR_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_OBJ_DEKUJR_OBJECT_NUMBER    0x00CC
#define Z_OBJ_DEKUJR_FLAGS            (ACTORFLAG_TALK)

typedef struct z_obj_dekujr_s z_obj_dekujr_t;
struct z_obj_dekujr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ short timer;
    /* 0x18A */ unsigned char count;
    /* 0x18B */ unsigned char demoflag;
    /* 0x18C */ unsigned char demo_seq;
    /* 0x190 */ int talking;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_OBJ_DEKUJR__ */
