#ifndef __Z64OVL_Z_EN_DNO__
#define __Z64OVL_Z_EN_DNO__

#define Z_EN_DNO_ACTOR_NUMBER     0x017F
#define Z_EN_DNO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNO_OBJECT_NUMBER    0x01F3
#define Z_EN_DNO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_dno_s z_en_dno_t;
struct z_en_dno_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ s_xyz joint1[28];
    /* 0x280 */ s_xyz joint2[28];
    /* 0x328 */ int mode;
    /* 0x32C */ int amp_no;
    /* 0x330 */ int talk_stat;
    /* 0x334 */ xyz_t control_pos;
    /* 0x340 */ Path_Run_Info_t path_run_info;
    /* 0x3AC */ short softfloat;
    /* 0x3AE */ short softfloat2;
    /* 0x3B0 */ unsigned short stat;
    /* 0x3B4 */ float head_angle_per;
    /* 0x3B8 */ s_xyz head_angle;
    /* 0x3BE */ short look_angle;
    /* 0x3C0 */ float talk_range;
    /* 0x3C4 */ Gfx* s[28];
    /* 0x434 */ s_xyz ang2;
    /* 0x43C */ Light_list* light_list;
    /* 0x440 */ Light_data light_data;
    /* 0x44E */ unsigned char step;
    /* 0x450 */ short anime_no;
    /* 0x452 */ short disp_type;
    /* 0x454 */ float kasa_scale;
    /* 0x458 */ int get_item;
    /* 0x45C */ short kasa_rot;
    /* 0x460 */ ACTOR* king_actor;
    /* 0x464 */ unsigned short say_message;
    /* 0x466 */ short waist_ang_y;
    /* 0x468 */ unsigned char old_dousa;
}; /* size = 0x046C */

#endif /* __Z64OVL_Z_EN_DNO__ */
