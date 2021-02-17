#ifndef __Z64OVL_Z_OBJ_BOMBIWA__
#define __Z64OVL_Z_OBJ_BOMBIWA__

#define Z_OBJ_BOMBIWA_ACTOR_NUMBER     0x0092
#define Z_OBJ_BOMBIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BOMBIWA_OBJECT_NUMBER    0x012A
#define Z_OBJ_BOMBIWA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_bombiwa_s z_obj_bombiwa_t;
struct z_obj_bombiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ BombiwaBreak brk[4];
    /* 0x200 */ signed char brk_del_cnt;
    /* 0x201 */ signed char mode_timer;
    /* 0x202 */ signed char no_hm_timer;
    /* 0x203 */ unsigned char info;
    /* 0x204 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_OBJ_BOMBIWA__ */
