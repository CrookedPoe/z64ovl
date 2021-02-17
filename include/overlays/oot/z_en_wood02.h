#ifndef __Z64OVL_Z_EN_WOOD02__
#define __Z64OVL_Z_EN_WOOD02__

#define Z_EN_WOOD02_ACTOR_NUMBER     0x0077
#define Z_EN_WOOD02_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WOOD02_OBJECT_NUMBER    0x007C
#define Z_EN_WOOD02_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_wood02_s z_en_wood02_t;
struct z_en_wood02_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short arg_data2;
    /* 0x13E */ unsigned char c_flg[7];
    /* 0x148 */ ClObjPipe pipe_pos;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_WOOD02__ */
