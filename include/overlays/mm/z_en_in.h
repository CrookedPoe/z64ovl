#ifndef __Z64OVL_Z_EN_IN__
#define __Z64OVL_Z_EN_IN__

#define Z_EN_IN_ACTOR_NUMBER     0x0067
#define Z_EN_IN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_IN_OBJECT_NUMBER    0x0099
#define Z_EN_IN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_in_s z_en_in_t;
struct z_en_in_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjJntSph all_jntsph;
    /* 0x1AC */ ClObjJntSphElem sph_elem[1];
    /* 0x1EC */ ClObjPipe all_pipe;
    /* 0x238 */ unsigned short mesno;
    /* 0x23A */ unsigned char no_request;
    /* 0x23B */ unsigned char speak_flag;
    /* 0x23C */ unsigned char richf;
    /* 0x23D */ unsigned char ridef;
    /* 0x240 */ Path_Info* path;
    /* 0x244 */ short path_count;
    /* 0x248 */ xyz_t foot_pos[2];
    /* 0x260 */ unsigned char footl_flag;
    /* 0x261 */ unsigned char footr_flag;
    /* 0x262 */ s_xyz jnt[20][2];
    /* 0x352 */ s_xyz anchor_ang;
    /* 0x358 */ s_xyz atama;
    /* 0x35E */ s_xyz koshi;
    /* 0x364 */ s_xyz anchor_ang_bak;
    /* 0x36A */ s_xyz atama_bak;
    /* 0x370 */ s_xyz koshi_bak;
    /* 0x376 */ short pwt_y[20];
    /* 0x39E */ short pwt_z[20];
    /* 0x3C8 */ xyz_t shadow_pos[15];
    /* 0x47C */ short swork;
    /* 0x47E */ short count;
    /* 0x480 */ short timer;
    /* 0x482 */ short paci_count;
    /* 0x484 */ short paci_timer;
    /* 0x486 */ short anime_id;
    /* 0x488 */ short anime_ID;
    /* 0x48A */ unsigned short statf;
    /* 0x48C */ int talk_flag;
    /* 0x490 */ int race_sequence;
    /* 0x494 */ int skelanime_flag;
    /* 0x498 */ xyz_t approach_target;
    /* 0x4A4 */ En_In_Actor* aikata_actor;
    /* 0x4A8 */ int snd_counter;
    /* 0x4AC */ unsigned long status_bit;
    /* 0x4B0 */ int race_result;
    /* 0x4B4 */ xyz_t base_eye;
    /* 0x4C0 */ float aim_trns;
    /* 0x4C4 */ float now_trns;
    /* 0x4C8 */ int old_stat;
}; /* size = 0x04CC */

#endif /* __Z64OVL_Z_EN_IN__ */
