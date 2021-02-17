#ifndef __Z64OVL_Z_EN_ANUBICE__
#define __Z64OVL_Z_EN_ANUBICE__

#define Z_EN_ANUBICE_ACTOR_NUMBER     0x00E0
#define Z_EN_ANUBICE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ANUBICE_OBJECT_NUMBER    0x00D6
#define Z_EN_ANUBICE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_anubice_s z_en_anubice_t;
struct z_en_anubice_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ short parts_time;
    /* 0x246 */ short hanten_frag;
    /* 0x248 */ short hanten_angle_y;
    /* 0x24A */ short dead_timer;
    /* 0x24C */ short damage_angle_timer;
    /* 0x24E */ short start;
    /* 0x250 */ short ret_back;
    /* 0x252 */ short damage_frag;
    /* 0x254 */ short fire_check;
    /* 0x258 */ float work_angle;
    /* 0x25C */ float ende_frame;
    /* 0x260 */ float purpose_posY;
    /* 0x264 */ float purpose_plus;
    /* 0x268 */ float neck_angle;
    /* 0x26C */ float eye_pos;
    /* 0x270 */ xyz_t shape_pos;
    /* 0x27C */ xyz_t shoot_angle;
    /* 0x288 */ xyz_t pos;
    /* 0x294 */ xyz_t speed_max;
    /* 0x2A0 */ ACTOR* check_actor[5];
    /* 0x2B4 */ u8 jump_frag;
    /* 0x2B8 */ ClObjPipe acoc_pipe_info;
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ float scale;
    /* 0x144 */ float scale_max;
    /* 0x148 */ short index;
    /* 0x14A */ short time;
    /* 0x14C */ short bg_hit_time;
    /* 0x14E */ short dead_frag;
    /* 0x150 */ xyz_t move_pos[6];
    /* 0x198 */ ClObjPipe acoc_pipe_info;
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ACTOR* Actor_child;
    /* 0x144 */ float hani;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_ANUBICE__ */
