#ifndef __Z64OVL_Z_EN_KANBAN__
#define __Z64OVL_Z_EN_KANBAN__

#define Z_EN_KANBAN_ACTOR_NUMBER     0x00A8
#define Z_EN_KANBAN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KANBAN_OBJECT_NUMBER    0x00FC
#define Z_EN_KANBAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_kanban_s z_en_kanban_t;
struct z_en_kanban_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ u8 count;
    /* 0x14A */ short move_timer;
    /* 0x14C */ u8 move_mode;
    /* 0x14E */ u16 break_bit;
    /* 0x150 */ u8 break_size;
    /* 0x152 */ short hit_timer;
    /* 0x154 */ xyz_t offset;
    /* 0x160 */ s_xyz angle;
    /* 0x166 */ s_xyz angle_spd;
    /* 0x16C */ s8 angle_way_x;
    /* 0x16D */ s8 angle_way_z;
    /* 0x16E */ short angle_spd_px;
    /* 0x170 */ short angle_spd_pz;
    /* 0x172 */ u8 bound_count;
    /* 0x174 */ float bound_offset_h;
    /* 0x178 */ float bound_offset_v;
    /* 0x17C */ short ax_way;
    /* 0x180 */ xyz_t ground_angle;
    /* 0x18C */ u8 cut_paturn;
    /* 0x18D */ u8 cut_no;
    /* 0x18E */ short cut_eff_time;
    /* 0x190 */ short cut_eff_a;
    /* 0x192 */ short only_stick_time;
    /* 0x194 */ u8 message_mode;
    /* 0x195 */ u8 message_wait;
    /* 0x196 */ u8 oka_check;
    /* 0x197 */ s8 snow_flag;
    /* 0x198 */ s8 ice_flag;
    /* 0x199 */ u8 item_set;
    /* 0x19A */ u8 boomerang_cut;
    /* 0x19C */ ACTOR* atack_actor;
    /* 0x1A0 */ short atack_hit_time;
    /* 0x1A4 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01F0 */

#endif /* __Z64OVL_Z_EN_KANBAN__ */
