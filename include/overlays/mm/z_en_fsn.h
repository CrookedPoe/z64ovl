#ifndef __Z64OVL_Z_EN_FSN__
#define __Z64OVL_Z_EN_FSN__

#define Z_EN_FSN_ACTOR_NUMBER     0x01C4
#define Z_EN_FSN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_FSN_OBJECT_NUMBER    0x01AB
#define Z_EN_FSN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_fsn_s z_en_fsn_t;
struct z_en_fsn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x1DC */ ClObjPipe all_pipe;
    /* 0x228 */ short pwt_y[19];
    /* 0x24E */ short pwt_z[19];
    /* 0x274 */ s_xyz neck_angle;
    /* 0x27A */ s_xyz body_angle;
    /* 0x280 */ s_xyz joint1[19];
    /* 0x2F2 */ s_xyz joint2[19];
    /* 0x364 */ short eyesID;
    /* 0x366 */ short eyesTM;
    /* 0x368 */ short talk_step;
    /* 0x36A */ short now_event;
    /* 0x36C */ short eventnum[4];
    /* 0x374 */ short price;
    /* 0x376 */ unshort mes_no;
    /* 0x378 */ unsigned char mode;
    /* 0x379 */ unchar item_id;
    /* 0x37C */ int item_idx;
    /* 0x380 */ short mani_item[2];
    /* 0x384 */ short set_item[3];
    /* 0x38A */ short item_max;
    /* 0x38C */ short item_cnt;
    /* 0x390 */ ACTOR* item[3];
    /* 0x39C */ short timer;
    /* 0x3A0 */ int xkey_time;
    /* 0x3A4 */ int ykey_time;
    /* 0x3A8 */ float x;
    /* 0x3AC */ float y;
    /* 0x3B0 */ float scale;
    /* 0x3B4 */ unint csrr;
    /* 0x3B8 */ unint csrg;
    /* 0x3BC */ unint csrb;
    /* 0x3C0 */ unint csra;
    /* 0x3C4 */ float csr_rate_rgba;
    /* 0x3C8 */ unsigned char csr_mode_rgba;
    /* 0x3C9 */ unsigned char alpha;
    /* 0x3CC */ Fsn_Yajirusi_Info oyInfo[2];
    /* 0x43C */ float arw_rate_rgba;
    /* 0x440 */ float arw_rate_pos;
    /* 0x444 */ unsigned char arw_mode_rgba;
    /* 0x445 */ unsigned char arw_mode_pos;
    /* 0x448 */ float zoom_rate;
    /* 0x44C */ short stat;
    /* 0x44E */ unsigned short statf;
}; /* size = 0x0450 */

#endif /* __Z64OVL_Z_EN_FSN__ */
