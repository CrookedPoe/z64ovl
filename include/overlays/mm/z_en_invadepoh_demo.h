#ifndef __Z64OVL_Z_EN_INVADEPOH_DEMO__
#define __Z64OVL_Z_EN_INVADEPOH_DEMO__

#define Z_EN_INVADEPOH_DEMO_ACTOR_NUMBER     0x029A
#define Z_EN_INVADEPOH_DEMO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_INVADEPOH_DEMO_OBJECT_NUMBER    0x0001
#define Z_EN_INVADEPOH_DEMO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_invadepoh_demo_s z_en_invadepoh_demo_t;
struct z_en_invadepoh_demo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ int type;
    /* 0x14C */ float speed;
    /* 0x150 */ int dno;
    /* 0x154 */ int demo_mode;
    /* 0x158 */ int rail_id;
    /* 0x15C */ int rail_index;
    /* 0x160 */ int bankID;
    /* 0x164 */ unsigned long status;
    /* 0x168 */ int arg0;
    /* 0x16C */ short ang_pos;
    /* 0x170 */ SKELETON_INFO skeleton;
    /* 0x1B4 */ s_xyz joint1[23];
    /* 0x23E */ s_xyz joint2[23];
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_INVADEPOH_DEMO__ */
