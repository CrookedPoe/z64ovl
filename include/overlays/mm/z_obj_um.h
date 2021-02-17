#ifndef __Z64OVL_Z_OBJ_UM__
#define __Z64OVL_Z_OBJ_UM__

#define Z_OBJ_UM_ACTOR_NUMBER     0x0215
#define Z_OBJ_UM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_OBJ_UM_OBJECT_NUMBER    0x01FC
#define Z_OBJ_UM_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_um_s z_obj_um_t;
struct z_obj_um_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ SKELETON_INFO skeleton;
    /* 0x1A4 */ s_xyz joint[22];
    /* 0x228 */ s_xyz morph[22];
    /* 0x2AC */ short rot_sharin_angle;
    /* 0x2AE */ short arg0;
    /* 0x2B0 */ short arg1;
    /* 0x2B2 */ short tmp;
    /* 0x2B4 */ int talk_flag;
    /* 0x2B8 */ HorsePull pull;
    /* 0x2C4 */ xyz_t l_pos;
    /* 0x2D0 */ xyz_t l_ground;
    /* 0x2DC */ xyz_t r_pos;
    /* 0x2E8 */ xyz_t r_ground;
    /* 0x2F4 */ unsigned int status;
    /* 0x2F8 */ s_xyz head_old;
    /* 0x2FE */ s_xyz head_angle_target;
    /* 0x304 */ int anim_type;
    /* 0x308 */ xyz_t pl_pos;
    /* 0x314 */ int bin_type[3];
    /* 0x320 */ int hahen_set[3];
    /* 0x32C */ xyz_t sound_bin_pos[3];
    /* 0x350 */ int counter;
    /* 0x354 */ int mes_counter;
    /* 0x358 */ Yatou yatou;
    /* 0x420 */ int se_sharin_id;
    /* 0x424 */ ClObjPipe pipe[2];
    /* 0x4BC */ xyz_t shadow_pos;
    /* 0x4C8 */ unsigned short old_time;
    /* 0x4CC */ int mepachi_mode;
    /* 0x4D0 */ int mepachi_id;
    /* 0x4D4 */ int mouth_mode;
    /* 0x4D8 */ int work_timer;
    /* 0x4DC */ int demo2_run_end_counter;
    /* 0x4E0 */ int broken_flag;
}; /* size = 0x04E4 */

#endif /* __Z64OVL_Z_OBJ_UM__ */
