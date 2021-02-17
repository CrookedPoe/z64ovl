#ifndef __Z64OVL_Z_DEMO_EFFECT__
#define __Z64OVL_Z_DEMO_EFFECT__

#define Z_DEMO_EFFECT_ACTOR_NUMBER     0x008B
#define Z_DEMO_EFFECT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DEMO_EFFECT_OBJECT_NUMBER    0x0001
#define Z_DEMO_EFFECT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_effect_s z_demo_effect_t;
struct z_demo_effect_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ FcSkeletonInfo fc_skel;
    /* 0x15C */ unchar bank;
    /* 0x160 */ void* gfx0;
    /* 0x164 */ void* gfx1;
    /* 0x168 */ unchar prm[3];
    /* 0x16B */ unchar env[3];
    /* 0x16E */ unchar prm2[3];
    /* 0x171 */ unchar env2[3];
    /* 0x174 */ unchar local[3];
    /* 0x178 */ short count;
    /* 0x17A */ short flag;
    /* 0x17C */ short demo_no;
    /* 0x17E */ s_xyz angle;
    /* 0x184 */ void* next_process;
    /* 0x188 */ void (*drawPro)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_DEMO_EFFECT__ */
