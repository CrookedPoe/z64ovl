#ifndef __Z64OVL_Z_OBJ_HGDOOR__
#define __Z64OVL_Z_OBJ_HGDOOR__

#define Z_OBJ_HGDOOR_ACTOR_NUMBER     0x0254
#define Z_OBJ_HGDOOR_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HGDOOR_OBJECT_NUMBER    0x022C
#define Z_OBJ_HGDOOR_FLAGS            (ACTORFLAG_SFX_SYSTEM)

typedef struct z_obj_hgdoor_s z_obj_hgdoor_t;
struct z_obj_hgdoor_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short eventmgr;
    /* 0x162 */ short open_angle;
    /* 0x164 */ short proc_timer;
    /* 0x166 */ unshort old_dousa;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_OBJ_HGDOOR__ */
