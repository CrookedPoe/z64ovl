#ifndef __Z64OVL_Z_OBJ_BELL__
#define __Z64OVL_Z_OBJ_BELL__

#define Z_OBJ_BELL_ACTOR_NUMBER     0x014E
#define Z_OBJ_BELL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BELL_OBJECT_NUMBER    0x016C
#define Z_OBJ_BELL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_bell_s z_obj_bell_t;
struct z_obj_bell_s {
    /* 0x0 */ MoveBG_Actor movBG;
    /* 0x15C */ ClObjSph sph_info;
    /* 0x1B4 */ ClObjSph acc_info;
    /* 0x20C */ short timer;
    /* 0x20E */ short count;
    /* 0x210 */ short addcount;
    /* 0x212 */ short pow_angy;
    /* 0x214 */ short damg_tmr;
    /* 0x218 */ float signf;
    /* 0x21C */ float swing;
    /* 0x220 */ float speed;
    /* 0x224 */ float aimspeed;
}; /* size = 0x0228 */

#endif /* __Z64OVL_Z_OBJ_BELL__ */
