#ifndef __Z64OVL_Z_OBJ_FIRESHIELD__
#define __Z64OVL_Z_OBJ_FIRESHIELD__

#define Z_OBJ_FIRESHIELD_ACTOR_NUMBER     0x0162
#define Z_OBJ_FIRESHIELD_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_FIRESHIELD_OBJECT_NUMBER    0x0001
#define Z_OBJ_FIRESHIELD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_fireshield_s z_obj_fireshield_t;
struct z_obj_fireshield_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ void (*event_proc)(/* ECOFF does not store param types */);
    /* 0x194 */ int event_timer;
    /* 0x198 */ float now_t;
    /* 0x19C */ int mode;
    /* 0x1A0 */ int mode_timer;
    /* 0x1A4 */ short scroll_counter;
    /* 0x1A6 */ unsigned char prim_alpha;
    /* 0x1A7 */ signed char sw_controll_flag;
    /* 0x1A8 */ signed char sw_in_flag;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_OBJ_FIRESHIELD__ */
