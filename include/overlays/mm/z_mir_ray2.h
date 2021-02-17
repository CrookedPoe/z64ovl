#ifndef __Z64OVL_Z_MIR_RAY2__
#define __Z64OVL_Z_MIR_RAY2__

#define Z_MIR_RAY2_ACTOR_NUMBER     0x01D0
#define Z_MIR_RAY2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MIR_RAY2_OBJECT_NUMBER    0x0087
#define Z_MIR_RAY2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_mir_ray2_s z_mir_ray2_t;
struct z_mir_ray2_s {
    /* 0x0 */ xyz_t decal;
    /* 0xC */ float mtx[16];
    /* 0x4C */ T_Polygon* poly;
    /* 0x50 */ unsigned char pow;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph at_0;
    /* 0x164 */ ClObjJntSphElem at_0_elem;
    /* 0x1A4 */ unshort flag;
    /* 0x1A6 */ short light_pow;
    /* 0x1A8 */ float shadow_r;
    /* 0x1AC */ Light_list* light_list;
    /* 0x1B0 */ Light_data light_data;
}; /* size = 0x01C0 */

#endif /* __Z64OVL_Z_MIR_RAY2__ */
