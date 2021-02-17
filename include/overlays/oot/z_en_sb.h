#ifndef __Z64OVL_Z_EN_SB__
#define __Z64OVL_Z_EN_SB__

#define Z_EN_SB_ACTOR_NUMBER     0x00C5
#define Z_EN_SB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SB_OBJECT_NUMBER    0x00B5
#define Z_EN_SB_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_sb_s z_en_sb_t;
struct z_en_sb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ Break_work break_work;
    /* 0x1E8 */ short fireTM;
    /* 0x1EA */ short animaMD;
    /* 0x1EC */ short downFG;
    /* 0x1EE */ short waitTM;
    /* 0x1F0 */ short attack_angle;
    /* 0x1F2 */ short attack_count;
    /* 0x1F4 */ unsigned char item;
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_EN_SB__ */
