#ifndef __Z64OVL_Z_EN_PO_COMPOSER__
#define __Z64OVL_Z_EN_PO_COMPOSER__

#define Z_EN_PO_COMPOSER_ACTOR_NUMBER     0x0247
#define Z_EN_PO_COMPOSER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_PO_COMPOSER_OBJECT_NUMBER    0x005D
#define Z_EN_PO_COMPOSER_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_po_composer_s z_en_po_composer_t;
struct z_en_po_composer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ ClObjJntSph at_jntsph;
    /* 0x1B0 */ ClObjJntSphElem sph_elem;
    /* 0x1F0 */ SKELETON_INFO skeleton;
    /* 0x234 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x238 */ MtxF kantera_mtx;
    /* 0x278 */ Light_list* light_list;
    /* 0x27C */ Light_data light_data;
    /* 0x28C */ int anime_no;
    /* 0x290 */ int event_no;
    /* 0x294 */ s_xyz joint1[12];
    /* 0x2DC */ s_xyz joint2[12];
    /* 0x324 */ short eventmgr[4];
    /* 0x32C */ short proc_timer;
    /* 0x32E */ short proc_step;
    /* 0x330 */ short demo_flag;
    /* 0x332 */ short alpha_flag;
    /* 0x334 */ unshort old_dousa;
    /* 0x336 */ rgba_t eye_env;
    /* 0x33A */ rgba_t kantera_env;
}; /* size = 0x0340 */

#endif /* __Z64OVL_Z_EN_PO_COMPOSER__ */
