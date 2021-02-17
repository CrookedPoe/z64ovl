#ifndef __Z64OVL_Z_EN_SB__
#define __Z64OVL_Z_EN_SB__

#define Z_EN_SB_ACTOR_NUMBER     0x0064
#define Z_EN_SB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SB_OBJECT_NUMBER    0x008E
#define Z_EN_SB_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_sb_s z_en_sb_t;
struct z_en_sb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[9];
    /* 0x1BE */ s_xyz joint2[9];
    /* 0x1F4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F8 */ ClObjPipe pipe_info;
    /* 0x244 */ short fireTM;
    /* 0x246 */ short animaMD;
    /* 0x248 */ short downFG;
    /* 0x24A */ short waitTM;
    /* 0x24C */ short open_timer;
    /* 0x24E */ short attack_angle;
    /* 0x250 */ short attack_count;
    /* 0x252 */ unsigned char item;
    /* 0x253 */ unsigned char break_flg;
}; /* size = 0x0254 */

#endif /* __Z64OVL_Z_EN_SB__ */
