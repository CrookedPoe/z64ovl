#ifndef __Z64OVL_Z_EN_DAIKU__
#define __Z64OVL_Z_EN_DAIKU__

#define Z_EN_DAIKU_ACTOR_NUMBER     0x0133
#define Z_EN_DAIKU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DAIKU_OBJECT_NUMBER    0x0122
#define Z_EN_DAIKU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_daiku_s z_en_daiku_t;
struct z_en_daiku_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int escF;
    /* 0x1D4 */ int talk_stat;
    /* 0x1D8 */ int run_time;
    /* 0x1DC */ int path_point;
    /* 0x1E0 */ float max_spd;
    /* 0x1E4 */ int anime_no;
    /* 0x1E8 */ int help_no;
    /* 0x1EC */ int demo_mode;
    /* 0x1F0 */ int demo_timer;
    /* 0x1F4 */ int camera_no;
    /* 0x1F8 */ short tgt_ang_sht;
    /* 0x1FC */ xyz_t eye_tgt;
    /* 0x208 */ xyz_t way_tgt;
    /* 0x214 */ xyz_t eye_now;
    /* 0x220 */ xyz_t way_now;
    /* 0x22C */ int flag;
    /* 0x230 */ int ge2_sw;
    /* 0x234 */ NpcBasicAct npcbasicact;
    /* 0x25C */ s_xyz joint1[17];
    /* 0x2C2 */ s_xyz joint2[17];
    /* 0x328 */ s_xyz def_shp_ang;
    /* 0x330 */ xyz_t def_pos;
}; /* size = 0x034C */

#endif /* __Z64OVL_Z_EN_DAIKU__ */
