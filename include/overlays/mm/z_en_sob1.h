#ifndef __Z64OVL_Z_EN_SOB1__
#define __Z64OVL_Z_EN_SOB1__

#define Z_EN_SOB1_ACTOR_NUMBER     0x002A
#define Z_EN_SOB1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SOB1_OBJECT_NUMBER    0x0001
#define Z_EN_SOB1_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_sob1_s z_en_sob1_t;
struct z_en_sob1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x190 */ void (*subProc)(/* ECOFF does not store param types */);
    /* 0x194 */ ClObjPipe pipe_info;
    /* 0x1E0 */ Path_Info* path;
    /* 0x1E4 */ int path_count;
    /* 0x1E8 */ short timer;
    /* 0x1EA */ signed char change_bank_ID;
    /* 0x1EB */ signed char sub1_bank_ID;
    /* 0x1EC */ signed char sub2_bank_ID;
    /* 0x1EE */ short neck_ang_y;
    /* 0x1F0 */ short objct_neck_ang_y;
    /* 0x1F2 */ s_xyz joint1[20];
    /* 0x26A */ s_xyz joint2[20];
    /* 0x2E2 */ short eyesID;
    /* 0x2E4 */ short eyesTM;
    /* 0x2E8 */ void* eyesProc;
    /* 0x2EC */ ACTOR* item[3];
    /* 0x2F8 */ int xkey_time;
    /* 0x2FC */ int ykey_time;
    /* 0x300 */ float x;
    /* 0x304 */ float y;
    /* 0x308 */ float scale;
    /* 0x30C */ unint csrr;
    /* 0x310 */ unint csrg;
    /* 0x314 */ unint csrb;
    /* 0x318 */ unint csra;
    /* 0x31C */ float csr_rate_rgba;
    /* 0x320 */ unsigned char csr_mode_rgba;
    /* 0x321 */ unsigned char alpha;
    /* 0x322 */ unchar item_id;
    /* 0x324 */ Omiseya_Yajirusi_Info oyInfo[2];
    /* 0x394 */ float arw_rate_rgba;
    /* 0x398 */ float arw_rate_pos;
    /* 0x39C */ unsigned char arw_mode_rgba;
    /* 0x39D */ unsigned char arw_mode_pos;
    /* 0x39E */ short talk_step;
    /* 0x3A0 */ short now_event;
    /* 0x3A2 */ short eventnum[3];
    /* 0x3A8 */ short get_bottle;
    /* 0x3AC */ float zoom_rate;
    /* 0x3B0 */ float camera_angle;
    /* 0x3B4 */ unsigned short mes_no;
    /* 0x3B6 */ unsigned short first_mes;
    /* 0x3B8 */ unsigned short bye_mes;
    /* 0x3BA */ unsigned char ap_flag;
    /* 0x3BC */ Talk_Area talk_pos;
    /* 0x3CC */ short kind;
}; /* size = 0x03D0 */

#endif /* __Z64OVL_Z_EN_SOB1__ */
