#ifndef __Z64OVL_Z_DEMO_EFFECT__
#define __Z64OVL_Z_DEMO_EFFECT__

#define Z_DEMO_EFFECT_ACTOR_NUMBER     0x0048
#define Z_DEMO_EFFECT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DEMO_EFFECT_OBJECT_NUMBER    0x0001
#define Z_DEMO_EFFECT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_effect_s z_demo_effect_t;
struct z_demo_effect_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ FcSkeletonInfo fc_skel;
    /* 0x164 */ unchar bank;
    /* 0x165 */ unchar prm[3];
    /* 0x168 */ unchar env[3];
    /* 0x16C */ short count;
    /* 0x170 */ void* next_process;
    /* 0x174 */ void (*drawPro)(/* ECOFF does not store param types */);
    /* 0x178 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_DEMO_EFFECT__ */
