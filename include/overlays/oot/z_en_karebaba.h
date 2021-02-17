#ifndef __Z64OVL_Z_EN_KAREBABA__
#define __Z64OVL_Z_EN_KAREBABA__

#define Z_EN_KAREBABA_ACTOR_NUMBER     0x00C7
#define Z_EN_KAREBABA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_KAREBABA_OBJECT_NUMBER    0x0039
#define Z_EN_KAREBABA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_karebaba_s z_en_karebaba_t;
struct z_en_karebaba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ s_xyz joint1[8];
    /* 0x1B4 */ s_xyz joint2[8];
    /* 0x1E4 */ T_Polygon* home_polygon_info;
    /* 0x1E8 */ ClObjPipe atoc_pipe;
    /* 0x234 */ ClObjPipe ac_pipe;
}; /* size = 0x0290 */

#endif /* __Z64OVL_Z_EN_KAREBABA__ */
