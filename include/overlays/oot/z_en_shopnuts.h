#ifndef __Z64OVL_Z_EN_SHOPNUTS__
#define __Z64OVL_Z_EN_SHOPNUTS__

#define Z_EN_SHOPNUTS_ACTOR_NUMBER     0x0195
#define Z_EN_SHOPNUTS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SHOPNUTS_OBJECT_NUMBER    0x0168
#define Z_EN_SHOPNUTS_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_shopnuts_s z_en_shopnuts_t;
struct z_en_shopnuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ s_xyz joint1[18];
    /* 0x1F2 */ s_xyz joint2[18];
    /* 0x260 */ ClObjPipe acoc_pipe;
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_EN_SHOPNUTS__ */
