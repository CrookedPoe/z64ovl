#ifndef __Z64OVL_Z_EN_MD__
#define __Z64OVL_Z_EN_MD__

#define Z_EN_MD_ACTOR_NUMBER     0x016D
#define Z_EN_MD_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MD_OBJECT_NUMBER    0x00FB
#define Z_EN_MD_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_md_s z_en_md_t;
struct z_en_md_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char pad_on_cnt;
    /* 0x1F9 */ unsigned char old_meschk;
    /* 0x1FA */ unsigned char chganmct;
    /* 0x1FB */ unsigned char nowanmno;
    /* 0x1FC */ short timer;
    /* 0x1FE */ short count;
    /* 0x200 */ short alpha;
    /* 0x202 */ short path_count;
    /* 0x204 */ short pw_wk_y[17];
    /* 0x226 */ short pw_wk_z[17];
    /* 0x248 */ s_xyz joint[17][2];
}; /* size = 0x0324 */

#endif /* __Z64OVL_Z_EN_MD__ */
