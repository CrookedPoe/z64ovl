#ifndef __Z64OVL_Z_DM_CHAR08__
#define __Z64OVL_Z_DM_CHAR08__

#define Z_DM_CHAR08_ACTOR_NUMBER     0x019A
#define Z_DM_CHAR08_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DM_CHAR08_OBJECT_NUMBER    0x0229
#define Z_DM_CHAR08_FLAGS            (ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_dm_char08_s z_dm_char08_t;
struct z_dm_char08_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A4 */ Obj_Yasi_Actor* yasi_act;
    /* 0x1A8 */ Obj_Yasi_Actor* yasi_act2;
    /* 0x1AC */ xyz_t yasi_pos;
    /* 0x1B8 */ xyz_t yasi2_pos;
    /* 0x1C4 */ xyz_t mouth_pos;
    /* 0x1D0 */ xyz_t eye_pos;
    /* 0x1DC */ s_xyz yasi_ang;
    /* 0x1E4 */ float ypos_kihon;
    /* 0x1E8 */ float ypos_add;
    /* 0x1EC */ float sincnt;
    /* 0x1F0 */ float sc_parcent;
    /* 0x1F4 */ short dousa;
    /* 0x1F6 */ short old_dousa;
    /* 0x1F8 */ short eyetimer;
    /* 0x1FA */ short y_sincnt;
    /* 0x1FC */ unsigned short msg_old;
    /* 0x1FE */ unsigned char bublecnt;
    /* 0x1FF */ unsigned char disp_sw;
    /* 0x200 */ unsigned char eye_mode;
    /* 0x201 */ unsigned char eye_type;
    /* 0x202 */ unsigned char anime_no;
    /* 0x203 */ unsigned char anime_no_old;
    /* 0x204 */ unsigned char first_fg;
    /* 0x205 */ unsigned char alpha;
    /* 0x206 */ unsigned char talk_mode;
    /* 0x207 */ unsigned char demotalk_mode;
    /* 0x208 */ unsigned char demotalk_mode2;
    /* 0x209 */ unsigned char bgcheck_fg;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_DM_CHAR08__ */
