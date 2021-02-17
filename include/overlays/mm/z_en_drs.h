#ifndef __Z64OVL_Z_EN_DRS__
#define __Z64OVL_Z_EN_DRS__

#define Z_EN_DRS_ACTOR_NUMBER     0x02A1
#define Z_EN_DRS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_DRS_OBJECT_NUMBER    0x0018
#define Z_EN_DRS_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_drs_s z_en_drs_t;
struct z_en_drs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ s_xyz joint[4][2];
    /* 0x208 */ signed char bank_ID1;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_EN_DRS__ */
