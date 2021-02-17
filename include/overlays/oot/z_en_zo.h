#ifndef __Z64OVL_Z_EN_ZO__
#define __Z64OVL_Z_EN_ZO__

#define Z_EN_ZO_ACTOR_NUMBER     0x01CE
#define Z_EN_ZO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZO_OBJECT_NUMBER    0x00FE
#define Z_EN_ZO_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_zo_s z_en_zo_t;
struct z_en_zo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ NpcBasicAct npcbasic;
    /* 0x1AC */ ClObjPipe all_pipe;
    /* 0x1F8 */ unsigned char talk_req;
    /* 0x1FA */ s_xyz joint[20][2];
    /* 0x2EC */ ZoEff eff[15];
    /* 0x634 */ float speakrange;
    /* 0x638 */ float alpha;
    /* 0x63C */ short lookmode;
    /* 0x63E */ short efftimer;
    /* 0x640 */ short wt_timer;
    /* 0x642 */ short timer;
    /* 0x644 */ short count;
    /* 0x646 */ short pw_sy[20];
    /* 0x66E */ short pw_sz[20];
}; /* size = 0x06A8 */

#endif /* __Z64OVL_Z_EN_ZO__ */
