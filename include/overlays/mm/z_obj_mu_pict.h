#ifndef __Z64OVL_Z_OBJ_MU_PICT__
#define __Z64OVL_Z_OBJ_MU_PICT__

#define Z_OBJ_MU_PICT_ACTOR_NUMBER     0x0284
#define Z_OBJ_MU_PICT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MU_PICT_OBJECT_NUMBER    0x0001
#define Z_OBJ_MU_PICT_FLAGS            (ACTORFLAG_TALK)

typedef struct z_obj_mu_pict_s z_obj_mu_pict_t;
struct z_obj_mu_pict_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short talk_flag;
    /* 0x14A */ short pict_type;
    /* 0x14C */ unshort old_message_no;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_OBJ_MU_PICT__ */
