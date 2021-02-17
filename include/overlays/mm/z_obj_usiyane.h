#ifndef __Z64OVL_Z_OBJ_USIYANE__
#define __Z64OVL_Z_OBJ_USIYANE__

#define Z_OBJ_USIYANE_ACTOR_NUMBER     0x0288
#define Z_OBJ_USIYANE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_USIYANE_OBJECT_NUMBER    0x0257
#define Z_OBJ_USIYANE_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_usiyane_s z_obj_usiyane_t;
struct z_obj_usiyane_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int dno;
    /* 0x164 */ TobichiriDemo td;
    /* 0x744 */ unsigned long status;
}; /* size = 0x0748 */

#endif /* __Z64OVL_Z_OBJ_USIYANE__ */
