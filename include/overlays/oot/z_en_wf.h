#ifndef __Z64OVL_Z_EN_WF__
#define __Z64OVL_Z_EN_WF__

#define Z_EN_WF_ACTOR_NUMBER     0x01AF
#define Z_EN_WF_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WF_OBJECT_NUMBER    0x0183
#define Z_EN_WF_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_wf_s z_en_wf_t;
struct z_en_wf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ En_mag_s en_mag;
    /* 0x178 */ SKELETON_INFO skeleton;
    /* 0x1BC */ s_xyz joint1[22];
    /* 0x240 */ s_xyz joint2[22];
    /* 0x2C4 */ int mode;
    /* 0x2C8 */ int action;
    /* 0x2CC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2D0 */ short timer;
    /* 0x2D2 */ short timer0;
    /* 0x2D4 */ short timer1;
    /* 0x2D6 */ unsigned char reaction_buf;
    /* 0x2D8 */ int mode_timer;
    /* 0x2DC */ float spd_wk;
    /* 0x2E0 */ float spd_wk2;
    /* 0x2E4 */ float eye_spd;
    /* 0x2E8 */ short attack_flg;
    /* 0x2EA */ short attack_rslt;
    /* 0x2EC */ short arg_data2;
    /* 0x2EE */ short ang_wk;
    /* 0x2F0 */ short work0;
    /* 0x2F2 */ u8 eye_idx;
    /* 0x2F4 */ ClObjJntSph sph_pos;
    /* 0x314 */ ClObjJntSphElem sph_elem[4];
    /* 0x414 */ ClObjPipe pipe_pos;
    /* 0x460 */ ClObjPipe pipe_pos2;
    /* 0x4AC */ xyz_t r_foot;
    /* 0x4B8 */ xyz_t l_foot;
    /* 0x4C4 */ s_xyz neck_angle;
}; /* size = 0x04DC */

#endif /* __Z64OVL_Z_EN_WF__ */
