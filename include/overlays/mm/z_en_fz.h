#ifndef __Z64OVL_Z_EN_FZ__
#define __Z64OVL_Z_EN_FZ__

#define Z_EN_FZ_ACTOR_NUMBER     0x008F
#define Z_EN_FZ_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FZ_OBJECT_NUMBER    0x00E4
#define Z_EN_FZ_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_fz_s z_en_fz_t;
struct z_en_fz_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ ClObjPipe shilde_pipe_info;
    /* 0x1E0 */ ClObjPipe beam_pipe_info;
    /* 0x22C */ Fz_Eff_BG_Cross bg_info;
    /* 0x23C */ Fz_Eff eff[40];
    /* 0xB9C */ Fz_Light_Eff lg_eff;
    /* 0xBA8 */ xyz_t initPos;
    /* 0xBB4 */ float grand_pos;
    /* 0xBB8 */ float depth;
    /* 0xBBC */ float maxSpeed;
    /* 0xBC0 */ unsigned int alpha;
    /* 0xBC4 */ short dead_flag;
    /* 0xBC6 */ short count;
    /* 0xBC8 */ short timer;
    /* 0xBCA */ short waitTM;
    /* 0xBCC */ unsigned char bgSW;
    /* 0xBCD */ unsigned char attackSW;
    /* 0xBCE */ unsigned char crossSW;
    /* 0xBCF */ unsigned char shape;
    /* 0xBD0 */ short revSpeed;
    /* 0xBD2 */ short maxRevSpeed;
    /* 0xBD4 */ short first_at_wait_timer;
    /* 0xBD6 */ unsigned char smokeMD;
    /* 0xBD7 */ unsigned char dispSW;
    /* 0xBD8 */ unsigned char deathSW;
    /* 0xBD9 */ unsigned char no_hit_time;
}; /* size = 0x0BDC */

#endif /* __Z64OVL_Z_EN_FZ__ */
