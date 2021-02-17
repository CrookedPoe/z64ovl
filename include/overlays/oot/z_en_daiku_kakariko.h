#ifndef __Z64OVL_Z_EN_DAIKU_KAKARIKO__
#define __Z64OVL_Z_EN_DAIKU_KAKARIKO__

#define Z_EN_DAIKU_KAKARIKO_ACTOR_NUMBER     0x01BC
#define Z_EN_DAIKU_KAKARIKO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DAIKU_KAKARIKO_OBJECT_NUMBER    0x0122
#define Z_EN_DAIKU_KAKARIKO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_daiku_kakariko_s z_en_daiku_kakariko_t;
struct z_en_daiku_kakariko_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int talk_stat;
    /* 0x1D4 */ int path_point;
    /* 0x1D8 */ float max_spd;
    /* 0x1DC */ int anime_no;
    /* 0x1E0 */ s_xyz* path_pos;
    /* 0x1E4 */ int path_pos_max;
    /* 0x1E8 */ int path_adv;
    /* 0x1EC */ int run_mode;
    /* 0x1F0 */ unsigned short stat;
    /* 0x1F2 */ unsigned short flag;
    /* 0x1F4 */ NpcBasicAct npcbasicact;
    /* 0x21C */ s_xyz joint1[17];
    /* 0x282 */ s_xyz joint2[17];
    /* 0x2E8 */ int work;
    /* 0x2EC */ s_xyz neck_ang_sht_add;
    /* 0x2F2 */ s_xyz neck_ang_sht_add_tgt;
}; /* size = 0x0308 */

#endif /* __Z64OVL_Z_EN_DAIKU_KAKARIKO__ */
