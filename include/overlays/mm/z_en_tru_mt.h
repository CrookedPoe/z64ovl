#ifndef __Z64OVL_Z_EN_TRU_MT__
#define __Z64OVL_Z_EN_TRU_MT__

#define Z_EN_TRU_MT_ACTOR_NUMBER     0x0214
#define Z_EN_TRU_MT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TRU_MT_OBJECT_NUMBER    0x018E
#define Z_EN_TRU_MT_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tru_mt_s z_en_tru_mt_t;
struct z_en_tru_mt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjSph sph;
    /* 0x1E4 */ s_xyz jnt[27][2];
    /* 0x328 */ unsigned short statf;
    /* 0x32A */ short count;
    /* 0x32C */ short swork;
    /* 0x330 */ float fwork;
    /* 0x334 */ short timer;
    /* 0x336 */ s_xyz atama_ro_ang;
    /* 0x33C */ xyz_t atama_offset;
    /* 0x348 */ short atama_ang_sx;
    /* 0x34A */ short atama_ang_sy;
    /* 0x34C */ short eyecount;
    /* 0x34E */ short eyetimer;
    /* 0x350 */ xyz_t jewelpos;
    /* 0x35C */ xyz_t body_pos;
    /* 0x368 */ Path_Info* path;
    /* 0x36C */ int path_idx;
    /* 0x370 */ xyz_t houki_pos;
    /* 0x37C */ xyz_t mt_pos;
    /* 0x388 */ short cycle;
    /* 0x38A */ short cycle2;
    /* 0x38C */ short swing;
    /* 0x38E */ s_xyz mt_angle;
    /* 0x394 */ short ingate_ang;
    /* 0x398 */ xyz_t ingate_pos;
    /* 0x3A4 */ unsigned char sound_fg;
}; /* size = 0x03A8 */

#endif /* __Z64OVL_Z_EN_TRU_MT__ */
