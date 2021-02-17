#ifndef __Z64OVL_Z_EN_BOM_BOWL_MAN__
#define __Z64OVL_Z_EN_BOM_BOWL_MAN__

#define Z_EN_BOM_BOWL_MAN_ACTOR_NUMBER     0x014B
#define Z_EN_BOM_BOWL_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOM_BOWL_MAN_OBJECT_NUMBER    0x0160
#define Z_EN_BOM_BOWL_MAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_bom_bowl_man_s z_en_bom_bowl_man_t;
struct z_en_bom_bowl_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[11];
    /* 0x1C2 */ s_xyz joint2[11];
    /* 0x204 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x208 */ s_xyz neck_angle;
    /* 0x20E */ s_xyz neck_max_angle;
    /* 0x214 */ s_xyz body_angle;
    /* 0x21A */ short timer;
    /* 0x21C */ short parts_time;
    /* 0x21E */ short message_end_code;
    /* 0x220 */ short today_eye_item;
    /* 0x222 */ short nidome_frag;
    /* 0x224 */ short eye_cont;
    /* 0x226 */ short eye_timer;
    /* 0x228 */ short eye_switch;
    /* 0x22A */ short eye_frag;
    /* 0x22C */ short retry_frag;
    /* 0x22E */ short wall_return[2];
    /* 0x232 */ short item_no;
    /* 0x234 */ short go_to_stage;
    /* 0x238 */ xyz_t pos;
    /* 0x244 */ float ende_frame;
    /* 0x248 */ u8 next_frag;
    /* 0x24C */ ACTOR* pit_Actor;
    /* 0x250 */ ACTOR* today_Actor;
}; /* size = 0x0264 */

#endif /* __Z64OVL_Z_EN_BOM_BOWL_MAN__ */
