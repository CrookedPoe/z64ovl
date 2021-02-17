#ifndef __Z64OVL_Z_EN_BX__
#define __Z64OVL_Z_EN_BX__

#define Z_EN_BX_ACTOR_NUMBER     0x00DF
#define Z_EN_BX_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BX_OBJECT_NUMBER    0x00D5
#define Z_EN_BX_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bx_s z_en_bx_t;
struct z_en_bx_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short timer;
    /* 0x13E */ short timer2;
    /* 0x140 */ short arg_data2;
    /* 0x144 */ xyz_t shape_pos[4];
    /* 0x174 */ xyz_t shape_sc[4];
    /* 0x1A4 */ s_xyz shape_ang[4];
    /* 0x1BC */ ClObjPipe body_pipe;
    /* 0x208 */ ClObjSwrd sword_pos;
}; /* size = 0x0298 */

#endif /* __Z64OVL_Z_EN_BX__ */
