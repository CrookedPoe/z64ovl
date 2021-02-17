#ifndef __Z64OVL_Z_EN_HY__
#define __Z64OVL_Z_EN_HY__

#define Z_EN_HY_ACTOR_NUMBER     0x016E
#define Z_EN_HY_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HY_OBJECT_NUMBER    0x0001
#define Z_EN_HY_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_hy_s z_en_hy_t;
struct z_en_hy_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char type;
    /* 0x185 */ unsigned char revers_f;
    /* 0x186 */ signed char atama_bank_ID;
    /* 0x187 */ signed char upper_bank_ID;
    /* 0x188 */ signed char lower_bank_ID;
    /* 0x189 */ signed char anime_bank_ID;
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ NpcBasicAct npcbasic;
    /* 0x200 */ Path_Info* path_data;
    /* 0x204 */ signed char path_idx;
    /* 0x205 */ signed char snd_flag;
    /* 0x206 */ short path_count;
    /* 0x208 */ short count;
    /* 0x20A */ short timer;
    /* 0x20C */ short pw_y[16];
    /* 0x22C */ short pw_z[16];
    /* 0x24C */ float speak_range;
    /* 0x250 */ int carryitem;
    /* 0x254 */ xyz_t t;
    /* 0x260 */ s_xyz joint[16][2];
    /* 0x320 */ unsigned short eventflag;
}; /* size = 0x0334 */

#endif /* __Z64OVL_Z_EN_HY__ */
