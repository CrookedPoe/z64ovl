#ifndef __Z64OVL_Z_EN_GEG__
#define __Z64OVL_Z_EN_GEG__

#define Z_EN_GEG_ACTOR_NUMBER     0x023A
#define Z_EN_GEG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GEG_OBJECT_NUMBER    0x00A1
#define Z_EN_GEG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_geg_s z_en_geg_t;
struct z_en_geg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ ClObjSph sph;
    /* 0x230 */ unsigned short statf;
    /* 0x232 */ short pwait_sx[3];
    /* 0x238 */ short pwait_sy[3];
    /* 0x23E */ short wink_count;
    /* 0x240 */ short wink_timer;
    /* 0x242 */ short timer;
    /* 0x244 */ short count;
    /* 0x248 */ int anm_bank;
    /* 0x24C */ s_xyz joint[18][2];
    /* 0x324 */ ACTOR search_actor;
    /* 0x468 */ short atama_ang_sx;
    /* 0x46A */ short atama_ang_sy;
    /* 0x46C */ short waist_ang_sx;
    /* 0x46E */ short waist_ang_sy;
    /* 0x470 */ xyz_t atama_ofs;
    /* 0x47C */ s_xyz atama_ror;
    /* 0x484 */ xyz_t waist_ofs;
    /* 0x490 */ s_xyz waist_ror;
    /* 0x496 */ unshort mes_no;
    /* 0x498 */ short now_event;
    /* 0x49A */ short next_event;
    /* 0x49C */ short eventnum[8];
    /* 0x4AC */ int anime_no;
    /* 0x4B0 */ short item_angle;
    /* 0x4B4 */ xyz_t mouth_pos;
    /* 0x4C0 */ xyz_t e_vec[2];
    /* 0x4D8 */ short path_idx;
    /* 0x4DC */ int tire_index;
    /* 0x4E0 */ short mm_timer;
    /* 0x4E4 */ xyz_t target_pos;
}; /* size = 0x04F0 */

#endif /* __Z64OVL_Z_EN_GEG__ */
