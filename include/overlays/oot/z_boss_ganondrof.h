#ifndef __Z64OVL_Z_BOSS_GANONDROF__
#define __Z64OVL_Z_BOSS_GANONDROF__

#define Z_BOSS_GANONDROF_ACTOR_NUMBER     0x0052
#define Z_BOSS_GANONDROF_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_GANONDROF_OBJECT_NUMBER    0x0037
#define Z_BOSS_GANONDROF_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_ganondrof_s z_boss_ganondrof_t;
struct z_boss_ganondrof_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short work[20];
    /* 0x1AC */ short timer[5];
    /* 0x1B6 */ u8 delete_flag;
    /* 0x1B7 */ u8 dam_flag;
    /* 0x1B8 */ u8 dam_flash_time;
    /* 0x1B9 */ u8 fly_mode;
    /* 0x1BA */ u8 ball_revise_flag;
    /* 0x1BC */ float fwork[10];
    /* 0x1E4 */ xyz_t fly_target;
    /* 0x1F0 */ xyz_t yari_pos;
    /* 0x1FC */ xyz_t center_pos;
    /* 0x208 */ xyz_t shape_pos[27];
    /* 0x34C */ short camera_no;
    /* 0x34E */ short demo_mode;
    /* 0x350 */ xyz_t eye;
    /* 0x35C */ xyz_t way;
    /* 0x368 */ xyz_t eye_spd;
    /* 0x374 */ xyz_t way_spd;
    /* 0x380 */ xyz_t eye_target;
    /* 0x38C */ xyz_t eye_target_ad;
    /* 0x398 */ xyz_t way_target;
    /* 0x3A4 */ xyz_t way_target_ad;
    /* 0x3B0 */ float camera_morf;
    /* 0x3B4 */ float camera_morf_spd;
    /* 0x3B8 */ float foot_za;
    /* 0x3BC */ float foot_xa;
    /* 0x3C0 */ float foot_za2;
    /* 0x3C4 */ float hand_za;
    /* 0x3C8 */ float hand_xa;
    /* 0x3CC */ float parts_xa[30];
    /* 0x444 */ float parts_za[30];
    /* 0x4BC */ Light_list* light_list;
    /* 0x4C0 */ Light_data light_data;
    /* 0x4D0 */ ClObjPipe acoc_pipe_info;
    /* 0x51C */ ClObjPipe acoc_pipe_info2;
}; /* size = 0x0578 */

#endif /* __Z64OVL_Z_BOSS_GANONDROF__ */
