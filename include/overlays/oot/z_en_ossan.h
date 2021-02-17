#ifndef __Z64OVL_Z_EN_OSSAN__
#define __Z64OVL_Z_EN_OSSAN__

#define Z_EN_OSSAN_ACTOR_NUMBER     0x003D
#define Z_EN_OSSAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OSSAN_OBJECT_NUMBER    0x0001
#define Z_EN_OSSAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ossan_s z_en_ossan_t;
struct z_en_ossan_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ void (*subProc)(/* ECOFF does not store param types */);
    /* 0x188 */ ClObjPipe pipe_info;
    /* 0x1D4 */ short counter;
    /* 0x1D6 */ short timer;
    /* 0x1D8 */ signed char change_bank_ID;
    /* 0x1D9 */ signed char sub1_bank_ID;
    /* 0x1DA */ signed char sub2_bank_ID;
    /* 0x1DB */ unsigned char exit_flag;
    /* 0x1DC */ unsigned char os_eyeID;
    /* 0x1DE */ short neck_ang_y;
    /* 0x1E0 */ short objct_neck_ang_y;
    /* 0x1E2 */ short eyesID;
    /* 0x1E4 */ short eyesTM;
    /* 0x1E8 */ void* eyesProc;
    /* 0x1EC */ short talk_mode;
    /* 0x1EE */ short old_talk_mode;
    /* 0x1F0 */ ACTOR* item[8];
    /* 0x210 */ ACTOR* tana;
    /* 0x214 */ int xkey_time;
    /* 0x218 */ int ykey_time;
    /* 0x21C */ unsigned char xtrigFG;
    /* 0x21D */ unsigned char ytrigFG;
    /* 0x220 */ float x;
    /* 0x224 */ float y;
    /* 0x228 */ float scale;
    /* 0x22C */ unint cslr;
    /* 0x230 */ unint cslg;
    /* 0x234 */ unint cslb;
    /* 0x238 */ unint csla;
    /* 0x23C */ float csl_rate_rgba;
    /* 0x240 */ unsigned char csl_mode_rgba;
    /* 0x241 */ unsigned char alpha;
    /* 0x242 */ unchar item_id;
    /* 0x244 */ OSSAN_Yajirusi_Info oyInfo[2];
    /* 0x2B4 */ float arw_rate_rgba;
    /* 0x2B8 */ float arw_rate_pos;
    /* 0x2BC */ unsigned char arw_mode_rgba;
    /* 0x2BD */ unsigned char arw_mode_pos;
    /* 0x2C0 */ float zoom_rate;
    /* 0x2C4 */ float camera_angle;
}; /* size = 0x02D8 */

#endif /* __Z64OVL_Z_EN_OSSAN__ */
