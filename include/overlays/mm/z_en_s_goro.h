#ifndef __Z64OVL_Z_EN_S_GORO__
#define __Z64OVL_Z_EN_S_GORO__

#define Z_EN_S_GORO_ACTOR_NUMBER     0x0242
#define Z_EN_S_GORO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_S_GORO_OBJECT_NUMBER    0x00A1
#define Z_EN_S_GORO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_s_goro_s z_en_s_goro_t;
struct z_en_s_goro_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* jg_actor;
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipe_info;
    /* 0x1DC */ unsigned short statf;
    /* 0x1DE */ unsigned short msg_statf;
    /* 0x1E0 */ short pwait_sx[3];
    /* 0x1E6 */ short pwait_sy[3];
    /* 0x1EC */ short wink_count;
    /* 0x1EE */ short wink_timer;
    /* 0x1F0 */ short timer;
    /* 0x1F2 */ short count;
    /* 0x1F4 */ int anm_bank;
    /* 0x1F8 */ s_xyz joint[18][2];
    /* 0x2D0 */ float scl;
    /* 0x2D4 */ short atama_ang_sx;
    /* 0x2D6 */ short atama_ang_sy;
    /* 0x2D8 */ short waist_ang_sx;
    /* 0x2DA */ short waist_ang_sy;
    /* 0x2DC */ xyz_t atama_ofs;
    /* 0x2E8 */ s_xyz atama_ror;
    /* 0x2F0 */ xyz_t waist_ofs;
    /* 0x2FC */ s_xyz waist_ror;
    /* 0x302 */ unsigned char talk_end_fg;
    /* 0x304 */ unshort mes_no;
    /* 0x306 */ short sleep_timer;
    /* 0x308 */ int anime_no;
    /* 0x30C */ short price;
}; /* size = 0x0310 */

#endif /* __Z64OVL_Z_EN_S_GORO__ */
