#ifndef __Z64OVL_Z_EN_MM2__
#define __Z64OVL_Z_EN_MM2__

#define Z_EN_MM2_ACTOR_NUMBER     0x00FE
#define Z_EN_MM2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_MM2_OBJECT_NUMBER    0x0001
#define Z_EN_MM2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mm2_s z_en_mm2_t;
struct z_en_mm2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ int mouth_pat;
    /* 0x1DC */ float max_spd;
    /* 0x1E0 */ s_xyz neck_angle;
    /* 0x1E6 */ s_xyz body_angle;
    /* 0x1EC */ unshort flag;
    /* 0x1EE */ short timer;
    /* 0x1F0 */ int amp_no;
    /* 0x1F4 */ s_xyz joint1[16];
    /* 0x254 */ s_xyz joint2[16];
}; /* size = 0x02B4 */

#endif /* __Z64OVL_Z_EN_MM2__ */
