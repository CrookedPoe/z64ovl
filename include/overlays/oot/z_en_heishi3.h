#ifndef __Z64OVL_Z_EN_HEISHI3__
#define __Z64OVL_Z_EN_HEISHI3__

#define Z_EN_HEISHI3_ACTOR_NUMBER     0x0142
#define Z_EN_HEISHI3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HEISHI3_OBJECT_NUMBER    0x0097
#define Z_EN_HEISHI3_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_heishi3_s z_en_heishi3_t;
struct z_en_heishi3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ s_xyz neck_angle;
    /* 0x256 */ s_xyz neck_max_angle;
    /* 0x25C */ s_xyz body_angle;
    /* 0x262 */ short timer;
    /* 0x264 */ short parts_time;
    /* 0x266 */ u8 retry_frag;
    /* 0x268 */ short index;
    /* 0x26C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_HEISHI3__ */
