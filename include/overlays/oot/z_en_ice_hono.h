#ifndef __Z64OVL_Z_EN_ICE_HONO__
#define __Z64OVL_Z_EN_ICE_HONO__

#define Z_EN_ICE_HONO_ACTOR_NUMBER     0x00F0
#define Z_EN_ICE_HONO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ICE_HONO_OBJECT_NUMBER    0x0001
#define Z_EN_ICE_HONO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_ice_hono_s z_en_ice_hono_t;
struct z_en_ice_hono_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ short alpha;
    /* 0x142 */ short timer;
    /* 0x144 */ short fi_1;
    /* 0x146 */ short fi_2;
    /* 0x148 */ float scl_max;
    /* 0x14C */ ClObjPipe pipe;
    /* 0x198 */ Light_list* light_list;
    /* 0x19C */ Light_data light_data;
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_EN_ICE_HONO__ */
