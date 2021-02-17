#ifndef __Z64OVL_Z_EN_FZ__
#define __Z64OVL_Z_EN_FZ__

#define Z_EN_FZ_ACTOR_NUMBER     0x0121
#define Z_EN_FZ_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FZ_OBJECT_NUMBER    0x0114
#define Z_EN_FZ_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_fz_s z_en_fz_t;
struct z_en_fz_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe_info;
    /* 0x18C */ ClObjPipe shilde_pipe_info;
    /* 0x1D8 */ ClObjPipe beam_pipe_info;
    /* 0x224 */ xyz_t initPos;
    /* 0x230 */ short count;
    /* 0x232 */ short timer;
    /* 0x234 */ short waitTM;
    /* 0x236 */ unsigned char bgSW;
    /* 0x237 */ unsigned char attackSW;
    /* 0x238 */ unsigned char crossSW;
    /* 0x239 */ unsigned char shape;
    /* 0x23C */ float grand_pos;
    /* 0x240 */ float depth;
    /* 0x244 */ float maxSpeed;
    /* 0x248 */ unsigned int alpha;
    /* 0x24C */ short revSpeed;
    /* 0x24E */ short maxRevSpeed;
    /* 0x250 */ unsigned char smokeMD;
    /* 0x251 */ unsigned char dispSW;
    /* 0x252 */ unsigned char deathSW;
    /* 0x253 */ unsigned char no_hit_time;
    /* 0x254 */ Fz_Eff_BG_Cross bg_info;
    /* 0x264 */ Fz_Eff eff[40];
}; /* size = 0x0BD4 */

#endif /* __Z64OVL_Z_EN_FZ__ */
