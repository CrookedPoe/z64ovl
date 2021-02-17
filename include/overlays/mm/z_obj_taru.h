#ifndef __Z64OVL_Z_OBJ_TARU__
#define __Z64OVL_Z_OBJ_TARU__

#define Z_OBJ_TARU_ACTOR_NUMBER     0x022D
#define Z_OBJ_TARU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_TARU_OBJECT_NUMBER    0x0250
#define Z_OBJ_TARU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_taru_s z_obj_taru_t;
struct z_obj_taru_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char stand_on_end_flag;
    /* 0x1AD */ signed char gold_se_timer;
    /* 0x1AE */ unsigned char pad_0[2];
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_OBJ_TARU__ */
