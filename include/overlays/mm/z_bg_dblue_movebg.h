#ifndef __Z64OVL_Z_BG_DBLUE_MOVEBG__
#define __Z64OVL_Z_BG_DBLUE_MOVEBG__

#define Z_BG_DBLUE_MOVEBG_ACTOR_NUMBER     0x0174
#define Z_BG_DBLUE_MOVEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DBLUE_MOVEBG_OBJECT_NUMBER    0x0184
#define Z_BG_DBLUE_MOVEBG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_dblue_movebg_s z_bg_dblue_movebg_t;
struct z_bg_dblue_movebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int type;
    /* 0x164 */ Gfx* Oshape_modelP;
    /* 0x168 */ Gfx* Xshape_modelP;
    /* 0x16C */ EvwAnimeInfo* animeinfoP;
    /* 0x170 */ signed char birth_room_ID;
    /* 0x171 */ signed char other_room_ID;
    /* 0x172 */ unsigned short stat;
    /* 0x174 */ unsigned short stat_b;
    /* 0x178 */ int old_sw;
    /* 0x17C */ short sw_no;
    /* 0x17E */ short timer;
    /* 0x180 */ short event_wait_timer;
    /* 0x184 */ float keep_player_distance;
    /* 0x188 */ short work_angle[4];
    /* 0x190 */ xyz_t tip0;
    /* 0x19C */ xyz_t tip1;
    /* 0x1A8 */ xyz_t sound_pos;
    /* 0x1B4 */ short sw_nonuse;
    /* 0x1B6 */ short event_id[2];
    /* 0x1BC */ int arg0;
    /* 0x1C0 */ int arg1;
    /* 0x1C4 */ int sen_arg0;
    /* 0x1C8 */ int sen_arg1;
    /* 0x1CC */ short rot_spd_now;
    /* 0x1CE */ short rot_spd_tgt;
    /* 0x1D0 */ short wait_timer;
    /* 0x1D2 */ short start_event_id;
    /* 0x1D4 */ float sound_per;
    /* 0x1D8 */ short sibuki_alpha[8][2];
    /* 0x1F8 */ float sibuki_scale[8][2];
    /* 0x238 */ xyz_t sibuki_pos[8][2];
    /* 0x2F8 */ ACTOR* hunsui_actor[2];
    /* 0x300 */ unsigned char sibuki_f[8][2];
    /* 0x310 */ xyz_t arrow_pos[8];
}; /* size = 0x0370 */

#endif /* __Z64OVL_Z_BG_DBLUE_MOVEBG__ */
