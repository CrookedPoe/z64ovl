#ifndef __Z64OVL_Z_EN_AOB_01__
#define __Z64OVL_Z_EN_AOB_01__

#define Z_EN_AOB_01_ACTOR_NUMBER     0x0117
#define Z_EN_AOB_01_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AOB_01_OBJECT_NUMBER    0x00D7
#define Z_EN_AOB_01_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_aob_01_s z_en_aob_01_t;
struct z_en_aob_01_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ Path_Info* path[14];
    /* 0x210 */ unsigned short mesno;
    /* 0x212 */ s_xyz jnt[16][2];
    /* 0x2D2 */ unsigned short statf;
    /* 0x2D4 */ s_xyz anchor_ang;
    /* 0x2DA */ s_xyz atama;
    /* 0x2E0 */ s_xyz koshi;
    /* 0x2E6 */ s_xyz anchor_ang_bak;
    /* 0x2EC */ s_xyz atama_bak;
    /* 0x2F2 */ s_xyz koshi_bak;
    /* 0x2F8 */ short pwt_y[16];
    /* 0x318 */ short pwt_z[16];
    /* 0x338 */ xyz_t shadow_pos[15];
    /* 0x3EC */ short timer;
    /* 0x3EE */ short paci_count;
    /* 0x3F0 */ short paci_timer;
    /* 0x3F4 */ ACTOR* dog;
    /* 0x3F8 */ ACTOR* dog_actor[14];
    /* 0x430 */ short now_camera;
    /* 0x432 */ short my_dog;
    /* 0x434 */ int bet_rupees;
    /* 0x438 */ short change_button;
    /* 0x43C */ int anime_no;
    /* 0x440 */ short debug_timer;
}; /* size = 0x0444 */

#endif /* __Z64OVL_Z_EN_AOB_01__ */
