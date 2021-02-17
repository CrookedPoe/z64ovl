#ifndef __Z64OVL_Z_EN_KZ__
#define __Z64OVL_Z_EN_KZ__

#define Z_EN_KZ_ACTOR_NUMBER     0x0164
#define Z_EN_KZ_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KZ_OBJECT_NUMBER    0x00FF
#define Z_EN_KZ_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_kz_s z_en_kz_t;
struct z_en_kz_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char snd_flag;
    /* 0x1F9 */ unsigned char itm_flag;
    /* 0x1FA */ short path_count;
    /* 0x1FC */ short timer;
    /* 0x1FE */ short snd_timer;
    /* 0x200 */ short count;
    /* 0x202 */ short camera_no;
    /* 0x204 */ short active_no;
    /* 0x206 */ s_xyz joint[12][2];
    /* 0x296 */ short pw_wk_y[12];
    /* 0x2AE */ short pw_wk_z[12];
}; /* size = 0x02D8 */

#endif /* __Z64OVL_Z_EN_KZ__ */
