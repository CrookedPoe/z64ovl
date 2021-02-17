#ifndef __Z64OVL_Z_EN_TRT__
#define __Z64OVL_Z_EN_TRT__

#define Z_EN_TRT_ACTOR_NUMBER     0x0188
#define Z_EN_TRT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TRT_OBJECT_NUMBER    0x018F
#define Z_EN_TRT_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_trt_s z_en_trt_t;
struct z_en_trt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x14C */ SKELETON_INFO skeleton;
    /* 0x190 */ ClObjPipe all_pipe;
    /* 0x1DC */ s_xyz jnt[27][2];
    /* 0x320 */ xyz_t eye_position;
    /* 0x32C */ unsigned short mesno;
    /* 0x32E */ short count;
    /* 0x330 */ short timer;
    /* 0x332 */ short sleep_timer;
    /* 0x334 */ short talk_step;
    /* 0x338 */ int xkey_time;
    /* 0x33C */ int ykey_time;
    /* 0x340 */ ACTOR* item[3];
    /* 0x34C */ unchar item_id;
    /* 0x350 */ Trt_Yajirusi_Info oyInfo[2];
    /* 0x3C0 */ float zoom_rate;
    /* 0x3C4 */ float csr_rate_rgba;
    /* 0x3C8 */ unsigned char csr_mode_rgba;
    /* 0x3CC */ float arw_rate_rgba;
    /* 0x3D0 */ float arw_rate_pos;
    /* 0x3D4 */ unsigned char arw_mode_rgba;
    /* 0x3D5 */ unsigned char arw_mode_pos;
    /* 0x3D6 */ short eyesTM;
    /* 0x3D8 */ short eyesID;
    /* 0x3DC */ void* eyesProc;
    /* 0x3E0 */ short now_event;
    /* 0x3E2 */ short next_event;
    /* 0x3E4 */ float x;
    /* 0x3E8 */ float y;
    /* 0x3EC */ float scale;
    /* 0x3F0 */ unint csrr;
    /* 0x3F4 */ unint csrg;
    /* 0x3F8 */ unint csrb;
    /* 0x3FC */ unint csra;
    /* 0x400 */ unsigned char alpha;
    /* 0x402 */ short anm_timer;
    /* 0x404 */ short anm_no;
    /* 0x406 */ unsigned short mes_no;
    /* 0x408 */ unsigned short old_mes_no;
    /* 0x40A */ unsigned short first_mes;
    /* 0x40C */ short eventnum[4];
    /* 0x414 */ short g_action;
    /* 0x416 */ s_xyz atama_ro_ang;
    /* 0x41C */ xyz_t atama_offset;
    /* 0x428 */ short atama_ang_sx;
    /* 0x42A */ short atama_ang_sy;
    /* 0x42C */ unsigned short statf;
}; /* size = 0x0430 */

#endif /* __Z64OVL_Z_EN_TRT__ */
