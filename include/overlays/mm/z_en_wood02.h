#ifndef __Z64OVL_Z_EN_WOOD02__
#define __Z64OVL_Z_EN_WOOD02__

#define Z_EN_WOOD02_ACTOR_NUMBER     0x0041
#define Z_EN_WOOD02_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WOOD02_OBJECT_NUMBER    0x0061
#define Z_EN_WOOD02_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_wood02_s z_en_wood02_t;
struct z_en_wood02_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short arg_data2;
    /* 0x146 */ short cnt;
    /* 0x148 */ short item;
    /* 0x14A */ unsigned char c_flg[8];
    /* 0x154 */ ClObjPipe pipe_pos;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_WOOD02__ */
