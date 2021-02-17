#ifndef __Z64OVL_Z_OBJ_KIBAKO2__
#define __Z64OVL_Z_OBJ_KIBAKO2__

#define Z_OBJ_KIBAKO2_ACTOR_NUMBER     0x00E5
#define Z_OBJ_KIBAKO2_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_KIBAKO2_OBJECT_NUMBER    0x0133
#define Z_OBJ_KIBAKO2_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_kibako2_s z_obj_kibako2_t;
struct z_obj_kibako2_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char stand_on_end_flag;
    /* 0x1AD */ signed char gold_se_timer;
    /* 0x1AE */ unsigned char pad_0[2];
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_OBJ_KIBAKO2__ */
