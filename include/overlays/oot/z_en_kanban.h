#ifndef __Z64OVL_Z_EN_KANBAN__
#define __Z64OVL_Z_EN_KANBAN__

#define Z_EN_KANBAN_ACTOR_NUMBER     0x0141
#define Z_EN_KANBAN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KANBAN_OBJECT_NUMBER    0x012F
#define Z_EN_KANBAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_kanban_s z_en_kanban_t;
struct z_en_kanban_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ u8 count;
    /* 0x142 */ short move_timer;
    /* 0x144 */ u8 move_mode;
    /* 0x146 */ u16 break_bit;
    /* 0x148 */ u8 break_size;
    /* 0x14A */ short hit_timer;
    /* 0x14C */ xyz_t offset;
    /* 0x158 */ s_xyz angle;
    /* 0x15E */ s_xyz angle_spd;
    /* 0x164 */ s8 angle_way_x;
    /* 0x165 */ s8 angle_way_z;
    /* 0x166 */ short angle_spd_px;
    /* 0x168 */ short angle_spd_pz;
    /* 0x16A */ u8 bound_count;
    /* 0x16C */ float bound_offset_h;
    /* 0x170 */ float bound_offset_v;
    /* 0x174 */ short ax_way;
    /* 0x178 */ xyz_t ground_angle;
    /* 0x184 */ u8 cut_paturn;
    /* 0x185 */ u8 cut_no;
    /* 0x186 */ short cut_eff_time;
    /* 0x188 */ short cut_eff_a;
    /* 0x18A */ short only_stick_time;
    /* 0x18C */ u8 message_mode;
    /* 0x18D */ u8 message_wait;
    /* 0x18E */ u8 oka_check;
    /* 0x190 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01EC */

#endif /* __Z64OVL_Z_EN_KANBAN__ */
