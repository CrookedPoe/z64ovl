#ifndef __Z64OVL_Z_EN_SA__
#define __Z64OVL_Z_EN_SA__

#define Z_EN_SA_ACTOR_NUMBER     0x0146
#define Z_EN_SA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SA_OBJECT_NUMBER    0x00BC
#define Z_EN_SA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_sa_s z_en_sa_t;
struct z_en_sa_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char pad_on_cnt;
    /* 0x1F9 */ unsigned char old_meschk;
    /* 0x1FA */ unsigned char chganmct;
    /* 0x1FB */ unsigned char nowanmno;
    /* 0x1FC */ short sndtimer;
    /* 0x1FE */ short timer;
    /* 0x200 */ short count;
    /* 0x202 */ short eye_R;
    /* 0x204 */ short eye_L;
    /* 0x206 */ short mouth;
    /* 0x208 */ short alpha;
    /* 0x20A */ s_xyz ct_angle;
    /* 0x210 */ s_xyz joint[17][2];
}; /* size = 0x02EC */

#endif /* __Z64OVL_Z_EN_SA__ */
