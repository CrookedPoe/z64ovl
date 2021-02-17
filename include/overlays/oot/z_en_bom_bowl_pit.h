#ifndef __Z64OVL_Z_EN_BOM_BOWL_PIT__
#define __Z64OVL_Z_EN_BOM_BOWL_PIT__

#define Z_EN_BOM_BOWL_PIT_ACTOR_NUMBER     0x014C
#define Z_EN_BOM_BOWL_PIT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BOM_BOWL_PIT_OBJECT_NUMBER    0x0001
#define Z_EN_BOM_BOWL_PIT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bom_bowl_pit_s z_en_bom_bowl_pit_t;
struct z_en_bom_bowl_pit_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short color_cont;
    /* 0x142 */ short camera_no;
    /* 0x144 */ short message_end_code;
    /* 0x146 */ short item_demo_frag;
    /* 0x148 */ short wait_timer;
    /* 0x14A */ short item_type_index;
    /* 0x14C */ short demo_frag;
    /* 0x150 */ int check;
    /* 0x154 */ u8 HIT;
    /* 0x158 */ xyz_t way_bak;
    /* 0x164 */ xyz_t eye_bak;
    /* 0x170 */ xyz_t way;
    /* 0x17C */ xyz_t eye;
    /* 0x188 */ xyz_t eye_target;
    /* 0x194 */ xyz_t eye_target_ad;
    /* 0x1A0 */ xyz_t eye_spd;
    /* 0x1AC */ xyz_t way_target;
    /* 0x1B8 */ xyz_t way_target_ad;
    /* 0x1C4 */ xyz_t way_spd;
    /* 0x1D0 */ ACTOR* item_Actor;
    /* 0x1D4 */ BOWL_PIT_EFF bowl_pit_eff[200];
}; /* size = 0x3704 */

#endif /* __Z64OVL_Z_EN_BOM_BOWL_PIT__ */
