#ifndef __Z64OVL_Z_MIR_RAY3__
#define __Z64OVL_Z_MIR_RAY3__

#define Z_MIR_RAY3_ACTOR_NUMBER     0x0230
#define Z_MIR_RAY3_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MIR_RAY3_OBJECT_NUMBER    0x0087
#define Z_MIR_RAY3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_mir_ray3_s z_mir_ray3_t;
struct z_mir_ray3_s {
    /* 0x0 */ xyz_t decal;
    /* 0xC */ float mtx[16];
    /* 0x4C */ T_Polygon* poly;
    /* 0x50 */ unsigned char pow;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjSwrd at_1;
    /* 0x1C4 */ ClObjPipe pipe_info;
    /* 0x210 */ unshort flag;
    /* 0x214 */ float mir_pow;
    /* 0x218 */ xyz_t pos[6];
    /* 0x260 */ float z_revers;
}; /* size = 0x0264 */

#endif /* __Z64OVL_Z_MIR_RAY3__ */
