#ifndef __Z64OVL_Z_EN_WF__
#define __Z64OVL_Z_EN_WF__

#define Z_EN_WF_ACTOR_NUMBER     0x00EC
#define Z_EN_WF_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WF_OBJECT_NUMBER    0x0141
#define Z_EN_WF_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_wf_s z_en_wf_t;
struct z_en_wf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x294 */ u8 eye_tex;
    /* 0x295 */ unsigned char hide_flg;
    /* 0x296 */ unsigned char damage_eff_kind;
    /* 0x298 */ short neck_timer;
    /* 0x29A */ short ang_wk;
    /* 0x29C */ short hide_inc_angle;
    /* 0x29E */ short neck_angle;
    /* 0x2A0 */ short timer;
    /* 0x2A2 */ unsigned short se_timer;
    /* 0x2A4 */ float rot_radius;
    /* 0x2A8 */ float escape_distance;
    /* 0x2AC */ float damage_eff_alpha;
    /* 0x2B0 */ float damage_eff_scale;
    /* 0x2B4 */ float damage_eff_scale2;
    /* 0x2B8 */ xyz_t shape_pos[10];
    /* 0x330 */ ClObjJntSph sph_pos;
    /* 0x350 */ ClObjJntSphElem sph_elem[4];
    /* 0x450 */ ClObjPipe pipe_pos;
    /* 0x49C */ ClObjPipe pipe_pos2;
}; /* size = 0x04E8 */

#endif /* __Z64OVL_Z_EN_WF__ */
