#ifndef __Z64OVL_Z_EN_FISH__
#define __Z64OVL_Z_EN_FISH__

#define Z_EN_FISH_ACTOR_NUMBER     0x0021
#define Z_EN_FISH_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_FISH_OBJECT_NUMBER    0x0001
#define Z_EN_FISH_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_fish_s z_en_fish_t;
struct z_en_fish_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjJntSph sph;
    /* 0x15C */ ClObjJntSphElem elem;
    /* 0x19C */ SKELETON_INFO skeleton;
    /* 0x1E0 */ s_xyz joint1[7];
    /* 0x20A */ s_xyz joint2[7];
    /* 0x234 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x238 */ short timer;
    /* 0x23A */ short clear_timer;
    /* 0x23C */ short fi_1;
    /* 0x23E */ short fi_2;
    /* 0x240 */ int bgcheck_flag;
}; /* size = 0x0254 */

#endif /* __Z64OVL_Z_EN_FISH__ */
