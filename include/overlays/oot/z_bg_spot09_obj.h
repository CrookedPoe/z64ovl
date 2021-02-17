#ifndef __Z64OVL_Z_BG_SPOT09_OBJ__
#define __Z64OVL_Z_BG_SPOT09_OBJ__

#define Z_BG_SPOT09_OBJ_ACTOR_NUMBER     0x00B8
#define Z_BG_SPOT09_OBJ_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT09_OBJ_OBJECT_NUMBER    0x00AE
#define Z_BG_SPOT09_OBJ_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot09_obj_s z_bg_spot09_obj_t;
struct z_bg_spot09_obj_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_SPOT09_OBJ__ */
