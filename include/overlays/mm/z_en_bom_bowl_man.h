#ifndef __Z64OVL_Z_EN_BOM_BOWL_MAN__
#define __Z64OVL_Z_EN_BOM_BOWL_MAN__

#define Z_EN_BOM_BOWL_MAN_ACTOR_NUMBER     0x011C
#define Z_EN_BOM_BOWL_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOM_BOWL_MAN_OBJECT_NUMBER    0x0110
#define Z_EN_BOM_BOWL_MAN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_bom_bowl_man_s z_en_bom_bowl_man_t;
struct z_en_bom_bowl_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ s_xyz neck_angle;
    /* 0x28E */ s_xyz neck_max_angle;
    /* 0x294 */ Path_Info* path;
    /* 0x298 */ short path_count;
    /* 0x29A */ short rail_index;
    /* 0x29C */ short stat_mode;
    /* 0x29E */ short move_stat;
    /* 0x2A0 */ xyz_t move_pos;
    /* 0x2AC */ xyz_t Balloon_pos;
    /* 0x2B8 */ short sundry_count;
    /* 0x2BA */ short move_timer;
    /* 0x2BC */ short wait_timer;
    /* 0x2BE */ short demo_timer;
    /* 0x2C0 */ short talk_count;
    /* 0x2C2 */ short mes_stat;
    /* 0x2C4 */ float end_frame;
    /* 0x2C8 */ float check_hani;
    /* 0x2CC */ short Event_now[4];
    /* 0x2D4 */ short search_angle;
    /* 0x2D6 */ short Event_Techo_now;
    /* 0x2D8 */ ACTOR* Demo_Senter;
    /* 0x2DC */ ACTOR* Demo_No[5];
    /* 0x2F0 */ short eye_cont;
    /* 0x2F2 */ short eye_timer;
    /* 0x2F4 */ short index;
    /* 0x2F6 */ short type_index;
    /* 0x2F8 */ int c_change_flag;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_BOM_BOWL_MAN__ */
