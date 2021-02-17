#ifndef __Z64OVL_Z_EN_OSSAN__
#define __Z64OVL_Z_EN_OSSAN__

#define Z_EN_OSSAN_ACTOR_NUMBER     0x002A
#define Z_EN_OSSAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OSSAN_OBJECT_NUMBER    0x0001
#define Z_EN_OSSAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ossan_s z_en_ossan_t;
struct z_en_ossan_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipe_info;
    /* 0x1DC */ short timer;
    /* 0x1DE */ signed char change_bank_ID;
    /* 0x1E0 */ short eyesID;
    /* 0x1E2 */ short eyesTM;
    /* 0x1E4 */ void* eyesProc;
    /* 0x1E8 */ ACTOR* item[8];
    /* 0x208 */ int xkey_time;
    /* 0x20C */ int ykey_time;
    /* 0x210 */ unsigned char xtrigFG;
    /* 0x211 */ unsigned char ytrigFG;
    /* 0x214 */ float x;
    /* 0x218 */ float y;
    /* 0x21C */ float scale;
    /* 0x220 */ unint cslr;
    /* 0x224 */ unint cslg;
    /* 0x228 */ unint cslb;
    /* 0x22C */ unint csla;
    /* 0x230 */ float csl_rate_rgba;
    /* 0x234 */ unsigned char csl_mode_rgba;
    /* 0x235 */ unsigned char alpha;
    /* 0x236 */ unchar item_id;
    /* 0x238 */ OSSAN_Yajirusi_Info oyInfo[2];
    /* 0x2A8 */ float arw_rate_rgba;
    /* 0x2AC */ float arw_rate_pos;
    /* 0x2B0 */ unsigned char arw_mode_rgba;
    /* 0x2B1 */ unsigned char arw_mode_pos;
    /* 0x2B4 */ float zoom_rate;
    /* 0x2B8 */ short eventnum[4];
    /* 0x2C0 */ short now_event;
    /* 0x2C2 */ short talk_step;
    /* 0x2C4 */ unshort mes_no;
    /* 0x2C6 */ s_xyz neck_angle;
    /* 0x2CC */ s_xyz body_angle;
    /* 0x2D2 */ short pwt_y[19];
    /* 0x2F8 */ short pwt_z[19];
    /* 0x31E */ s_xyz joint1[19];
    /* 0x390 */ s_xyz joint2[19];
    /* 0x402 */ short anm_no;
    /* 0x404 */ s_xyz ani_neck_ang;
    /* 0x40A */ unsigned short statf;
}; /* size = 0x040C */

#endif /* __Z64OVL_Z_EN_OSSAN__ */
