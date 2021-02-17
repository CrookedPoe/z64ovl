#ifndef __Z64OVL_Z_EN_PEEHAT__
#define __Z64OVL_Z_EN_PEEHAT__

#define Z_EN_PEEHAT_ACTOR_NUMBER     0x001D
#define Z_EN_PEEHAT_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PEEHAT_OBJECT_NUMBER    0x0018
#define Z_EN_PEEHAT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_BODY_HIT)

typedef struct z_en_peehat_s z_en_peehat_t;
struct z_en_peehat_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[24];
    /* 0x210 */ s_xyz joint2[24];
    /* 0x2A0 */ int mode;
    /* 0x2A4 */ int action;
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ xyz_t sw_pos[2];
    /* 0x2C4 */ int mode_timer;
    /* 0x2C8 */ float move_area;
    /* 0x2CC */ float search_area;
    /* 0x2D0 */ float counter0;
    /* 0x2D4 */ float parts_anime_time;
    /* 0x2D8 */ float parts_anime_time_add;
    /* 0x2DC */ float parts_anime_sc;
    /* 0x2E0 */ short r_spd;
    /* 0x2E2 */ short r_ang;
    /* 0x2E4 */ short ang_add;
    /* 0x2E6 */ short timer0;
    /* 0x2E8 */ short timer1;
    /* 0x2EA */ short c_count;
    /* 0x2EC */ short dam_time;
    /* 0x2F0 */ ClObjPipe pipe_pos;
    /* 0x33C */ ClObjJntSph sph_pos;
    /* 0x35C */ ClObjJntSphElem sph_elem;
    /* 0x39C */ ClObjSwrd sword_pos;
}; /* size = 0x042C */

#endif /* __Z64OVL_Z_EN_PEEHAT__ */
