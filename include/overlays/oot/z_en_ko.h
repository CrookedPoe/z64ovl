#ifndef __Z64OVL_Z_EN_KO__
#define __Z64OVL_Z_EN_KO__

#define Z_EN_KO_ACTOR_NUMBER     0x0163
#define Z_EN_KO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KO_OBJECT_NUMBER    0x0001
#define Z_EN_KO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ko_s z_en_ko_t;
struct z_en_ko_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ signed char atama_bank_ID;
    /* 0x185 */ signed char upper_bank_ID;
    /* 0x186 */ signed char lower_bank_ID;
    /* 0x187 */ signed char anime_bank_ID;
    /* 0x188 */ ClObjPipe all_pipe;
    /* 0x1D4 */ Path_Info* path_data;
    /* 0x1D8 */ NpcBasicAct npcbasic;
    /* 0x200 */ unsigned char snd_flag;
    /* 0x202 */ short condition;
    /* 0x204 */ short timer;
    /* 0x206 */ short count;
    /* 0x208 */ float appear_distance;
    /* 0x20C */ float speak_range;
    /* 0x210 */ float alpha;
    /* 0x214 */ s_xyz joint[16][2];
    /* 0x2D4 */ short pw_y[16];
    /* 0x2F4 */ short pw_z[16];
}; /* size = 0x0324 */

#endif /* __Z64OVL_Z_EN_KO__ */
