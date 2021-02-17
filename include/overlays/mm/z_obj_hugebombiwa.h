#ifndef __Z64OVL_Z_OBJ_HUGEBOMBIWA__
#define __Z64OVL_Z_OBJ_HUGEBOMBIWA__

#define Z_OBJ_HUGEBOMBIWA_ACTOR_NUMBER     0x016D
#define Z_OBJ_HUGEBOMBIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HUGEBOMBIWA_OBJECT_NUMBER    0x012A
#define Z_OBJ_HUGEBOMBIWA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_hugebombiwa_s z_obj_hugebombiwa_t;
struct z_obj_hugebombiwa_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ HugebombiwaBreak brk[20];
    /* 0x4B0 */ short brk_del_cnt;
    /* 0x4B2 */ signed char mode_timer;
    /* 0x4B3 */ signed char no_hm_timer;
    /* 0x4B4 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x04B8 */

#endif /* __Z64OVL_Z_OBJ_HUGEBOMBIWA__ */
