#ifndef __Z64OVL_Z_DM_HINA__
#define __Z64OVL_Z_DM_HINA__

#define Z_DM_HINA_ACTOR_NUMBER     0x0140
#define Z_DM_HINA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_HINA_OBJECT_NUMBER    0x01CC
#define Z_DM_HINA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_hina_s z_dm_hina_t;
struct z_dm_hina_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ float scale;
    /* 0x14C */ float parcent;
    /* 0x150 */ float col_parcent;
    /* 0x154 */ float add_ypos;
    /* 0x158 */ float offset_ypos;
    /* 0x15C */ float mini_scale;
    /* 0x160 */ xyz_t eye;
    /* 0x16C */ xyz_t center;
    /* 0x178 */ short demo_mode;
    /* 0x17A */ short camera_no;
    /* 0x17C */ short cam_timer;
    /* 0x17E */ unchar eff_mode;
    /* 0x17F */ unchar alpha;
    /* 0x180 */ unchar draw_sw;
}; /* size = 0x0184 */

#endif /* __Z64OVL_Z_DM_HINA__ */
