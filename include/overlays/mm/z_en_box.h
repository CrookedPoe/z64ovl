#ifndef __Z64OVL_Z_EN_BOX__
#define __Z64OVL_Z_EN_BOX__

#define Z_EN_BOX_ACTOR_NUMBER     0x0006
#define Z_EN_BOX_ACTOR_CATEGORY   ACTORCAT_CHEST
#define Z_EN_BOX_OBJECT_NUMBER    0x000C
#define Z_EN_BOX_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_box_s z_en_box_t;
struct z_en_box_s {
    /* 0x0 */ xyz_t trs_pos;
    /* 0xC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x10 */ void (*draw)(/* ECOFF does not store param types */);
    /* 0x14 */ int base_timer;
    /* 0x18 */ int start_timer;
    /* 0x1C */ int end_timer;
    /* 0x20 */ int roof;
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ int counter;
    /* 0x1A4 */ int one_point_demo;
    /* 0x1A8 */ float light_power;
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B0 */ s_xyz now[5];
    /* 0x1CE */ s_xyz morf[5];
    /* 0x1EC */ short open;
    /* 0x1EE */ unsigned char status;
    /* 0x1EF */ unsigned char alpha;
    /* 0x1F0 */ unsigned char sw_index;
    /* 0x1F1 */ unsigned char set_type;
    /* 0x1F2 */ unsigned char ice_counter;
    /* 0x1F3 */ unsigned char oc_sc_end;
    /* 0x1F4 */ En_Box_KuruKuruLight bkl;
    /* 0x218 */ short attent_event;
    /* 0x21A */ short open_event;
    /* 0x21C */ int obj_type;
    /* 0x220 */ int item_save;
}; /* size = 0x0224 */

#endif /* __Z64OVL_Z_EN_BOX__ */
