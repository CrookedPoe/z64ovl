#ifndef __Z64OVL_Z_EN_MM2__
#define __Z64OVL_Z_EN_MM2__

#define Z_EN_MM2_ACTOR_NUMBER     0x01D4
#define Z_EN_MM2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MM2_OBJECT_NUMBER    0x013C
#define Z_EN_MM2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mm2_s z_en_mm2_t;
struct z_en_mm2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int mouth_pat;
    /* 0x1D4 */ float max_spd;
    /* 0x1D8 */ s_xyz neck_angle;
    /* 0x1DE */ s_xyz body_angle;
    /* 0x1E4 */ unshort flag;
    /* 0x1E6 */ short timer;
    /* 0x1E8 */ int amp_no;
    /* 0x1EC */ s_xyz joint1[16];
    /* 0x24C */ s_xyz joint2[16];
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_EN_MM2__ */
