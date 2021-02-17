#ifndef __Z64OVL_Z_OBJ_SNOWBALL__
#define __Z64OVL_Z_OBJ_SNOWBALL__

#define Z_OBJ_SNOWBALL_ACTOR_NUMBER     0x01DC
#define Z_OBJ_SNOWBALL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SNOWBALL_OBJECT_NUMBER    0x00EF
#define Z_OBJ_SNOWBALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_snowball_s z_obj_snowball_t;
struct z_obj_snowball_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ SnowballHalf brk[2];
    /* 0x208 */ signed char mode_timer;
    /* 0x209 */ signed char no_hm_timer;
    /* 0x20A */ signed char break_type;
    /* 0x20B */ signed char event_flag;
    /* 0x20C */ float scale_mult;
    /* 0x210 */ signed char melt_flag;
    /* 0x211 */ signed char talk_now_flag;
}; /* size = 0x0214 */

#endif /* __Z64OVL_Z_OBJ_SNOWBALL__ */
