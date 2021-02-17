#ifndef __Z64OVL_Z_BG_SPOT18_OBJ__
#define __Z64OVL_Z_BG_SPOT18_OBJ__

#define Z_BG_SPOT18_OBJ_ACTOR_NUMBER     0x00B9
#define Z_BG_SPOT18_OBJ_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT18_OBJ_OBJECT_NUMBER    0x00AF
#define Z_BG_SPOT18_OBJ_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot18_obj_s z_bg_spot18_obj_t;
struct z_bg_spot18_obj_s {
/* 0x0 */ MoveBG_Actor a;
/* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
/* 0x158 */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_SPOT18_OBJ__ */
