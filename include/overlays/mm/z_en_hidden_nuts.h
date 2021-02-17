#ifndef __Z64OVL_Z_EN_HIDDEN_NUTS__
#define __Z64OVL_Z_EN_HIDDEN_NUTS__

#define Z_EN_HIDDEN_NUTS_ACTOR_NUMBER     0x025F
#define Z_EN_HIDDEN_NUTS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HIDDEN_NUTS_OBJECT_NUMBER    0x012B
#define Z_EN_HIDDEN_NUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_hidden_nuts_s z_en_hidden_nuts_t;
struct z_en_hidden_nuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ Path_Info* path;
    /* 0x208 */ short path_count;
    /* 0x20A */ u8 hint_sound_flag;
    /* 0x20C */ xyz_t move_pos;
    /* 0x218 */ short wait_timer;
    /* 0x21A */ short stat_mode;
    /* 0x21C */ short save_bit;
    /* 0x21E */ short rail_index;
    /* 0x220 */ int c_change_flag;
    /* 0x224 */ short kyoro_count;
    /* 0x226 */ short Event_now;
    /* 0x228 */ float max_offset_y;
    /* 0x22C */ float end_frame;
    /* 0x230 */ short head_angle;
    /* 0x232 */ short head_angle_max;
    /* 0x234 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0280 */

#endif /* __Z64OVL_Z_EN_HIDDEN_NUTS__ */
