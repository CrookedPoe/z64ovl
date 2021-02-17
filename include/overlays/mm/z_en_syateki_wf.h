#ifndef __Z64OVL_Z_EN_SYATEKI_WF__
#define __Z64OVL_Z_EN_SYATEKI_WF__

#define Z_EN_SYATEKI_WF_ACTOR_NUMBER     0x0141
#define Z_EN_SYATEKI_WF_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SYATEKI_WF_OBJECT_NUMBER    0x0141
#define Z_EN_SYATEKI_WF_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_wf_s z_en_syateki_wf_t;
struct z_en_syateki_wf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ int mode;
    /* 0x294 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x298 */ short alive_flag;
    /* 0x29A */ short timer;
    /* 0x29C */ short wait_timer;
    /* 0x2A0 */ s_xyz* path_ptr;
    /* 0x2A4 */ short path_no;
    /* 0x2A6 */ short path_max;
    /* 0x2A8 */ short aim_angle_y;
    /* 0x2AC */ float eye_spd;
    /* 0x2B0 */ u8 eye_idx;
    /* 0x2B4 */ ClObjPipe pipe_pos;
    /* 0x300 */ ClObjPipe pipe_pos2;
    /* 0x34C */ ClObjJntSph head_jntsph;
    /* 0x36C */ ClObjJntSphElem sph_elem;
    /* 0x3AC */ xyz_t r_foot;
    /* 0x3B8 */ xyz_t l_foot;
    /* 0x3C4 */ s_xyz neck_angle;
}; /* size = 0x03CC */

#endif /* __Z64OVL_Z_EN_SYATEKI_WF__ */
