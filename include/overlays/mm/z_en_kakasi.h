#ifndef __Z64OVL_Z_EN_KAKASI__
#define __Z64OVL_Z_EN_KAKASI__

#define Z_EN_KAKASI_ACTOR_NUMBER     0x00CA
#define Z_EN_KAKASI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KAKASI_OBJECT_NUMBER    0x011D
#define Z_EN_KAKASI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_kakasi_s z_en_kakasi_t;
struct z_en_kakasi_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x14C */ SKELETON_INFO skeleton;
    /* 0x190 */ short dance_cont;
    /* 0x192 */ short dance_timer;
    /* 0x194 */ short index;
    /* 0x196 */ short stat_mode;
    /* 0x198 */ s_xyz dance_angle;
    /* 0x1A0 */ int c_change_flag;
    /* 0x1A4 */ int sundry_count;
    /* 0x1A8 */ int oca_check_flag;
    /* 0x1AC */ short message_end_check;
    /* 0x1AE */ short Event_now[2];
    /* 0x1B4 */ float end_frame;
    /* 0x1B8 */ float takasa_pos;
    /* 0x1BC */ xyz_t face_pos;
    /* 0x1C8 */ s_xyz shape_angle[5];
    /* 0x1E6 */ s_xyz shape_max_angle[5];
    /* 0x204 */ short demo_timer;
    /* 0x206 */ short demo_stat;
    /* 0x208 */ short camera_no;
    /* 0x20A */ short demo_count;
    /* 0x20C */ float fovy;
    /* 0x210 */ float fovy_max;
    /* 0x214 */ xyz_t eye;
    /* 0x220 */ xyz_t way;
    /* 0x22C */ xyz_t init_pos;
    /* 0x238 */ xyz_t eye_max;
    /* 0x244 */ xyz_t way_max;
    /* 0x250 */ float ocarina_check_hani;
    /* 0x254 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02A0 */

#endif /* __Z64OVL_Z_EN_KAKASI__ */
