#ifndef __Z64OVL_Z_EN_FR__
#define __Z64OVL_Z_EN_FR__

#define Z_EN_FR_ACTOR_NUMBER     0x00ED
#define Z_EN_FR_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_FR_OBJECT_NUMBER    0x00E6
#define Z_EN_FR_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_fr_s z_en_fr_t;
struct z_en_fr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[24];
    /* 0x210 */ s_xyz joint2[24];
    /* 0x2A0 */ SKELETON_INFO skeleton_choo;
    /* 0x2E4 */ s_xyz joint1_choo[8];
    /* 0x314 */ s_xyz joint2_choo[8];
    /* 0x344 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x348 */ Light_list* light_list;
    /* 0x34C */ Light_data light_data;
    /* 0x35A */ signed char choo_bank_ID;
    /* 0x35C */ int counter;
    /* 0x360 */ int eye_time;
    /* 0x364 */ void (*eye_proc)(/* ECOFF does not store param types */);
    /* 0x368 */ unsigned char eye_id;
    /* 0x369 */ unsigned char startFG;
    /* 0x36A */ unsigned char waterFG;
    /* 0x36B */ unsigned char old_waterFG;
    /* 0x36C */ unsigned char frogFG;
    /* 0x36D */ unsigned char zoomSW;
    /* 0x36E */ unsigned char zoomFG;
    /* 0x36F */ unsigned char zoomMD;
    /* 0x370 */ unsigned char jump_game_ID;
    /* 0x371 */ u8 chk_ocarina_no;
    /* 0x372 */ unsigned char game_mode;
    /* 0x373 */ unsigned char eat_flag;
    /* 0x374 */ unsigned char carry_flag;
    /* 0x376 */ short timer;
    /* 0x378 */ int carry_number;
    /* 0x37C */ xyz_t st_pos;
    /* 0x388 */ float radius;
    /* 0x38C */ float turn_speed;
    /* 0x390 */ float scale;
    /* 0x394 */ ACTOR* item;
    /* 0x398 */ unsigned char choo_flg;
    /* 0x39A */ short choo_cnt;
    /* 0x39C */ xyz_t choo_pos;
    /* 0x3A8 */ xyz_t light_pos;
}; /* size = 0x03C4 */

#endif /* __Z64OVL_Z_EN_FR__ */
