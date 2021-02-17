#ifndef __Z64OVL_Z_EN_GB2__
#define __Z64OVL_Z_EN_GB2__

#define Z_EN_GB2_ACTOR_NUMBER     0x01DE
#define Z_EN_GB2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GB2_OBJECT_NUMBER    0x0144
#define Z_EN_GB2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_gb2_s z_en_gb2_t;
struct z_en_gb2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[12];
    /* 0x1D0 */ s_xyz joint2[12];
    /* 0x218 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x21C */ ClObjPipe pipe_info;
    /* 0x268 */ ACTOR* twin;
    /* 0x26C */ unsigned short statf;
    /* 0x26E */ unsigned short mes_no;
    /* 0x270 */ s_xyz neck_angle;
    /* 0x276 */ s_xyz body_angle;
    /* 0x27C */ short enemy_name;
    /* 0x27E */ short enemy_arg;
    /* 0x280 */ short enemy_idx;
    /* 0x282 */ short eventmgr[3];
    /* 0x288 */ short price;
    /* 0x28A */ unsigned char shape_alpha;
    /* 0x28C */ int now_mask;
    /* 0x290 */ short now_event;
}; /* size = 0x0294 */

#endif /* __Z64OVL_Z_EN_GB2__ */
