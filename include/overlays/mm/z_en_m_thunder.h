#ifndef __Z64OVL_Z_EN_M_THUNDER__
#define __Z64OVL_Z_EN_M_THUNDER__

#define Z_EN_M_THUNDER_ACTOR_NUMBER     0x0035
#define Z_EN_M_THUNDER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_M_THUNDER_OBJECT_NUMBER    0x0001
#define Z_EN_M_THUNDER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_m_thunder_s z_en_m_thunder_t;
struct z_en_m_thunder_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe acoc_info;
    /* 0x190 */ Light_list* light_list;
    /* 0x194 */ Light_data light_data;
    /* 0x1A4 */ float light_power;
    /* 0x1A8 */ float pow;
    /* 0x1AC */ float frame;
    /* 0x1B0 */ float swpow;
    /* 0x1B4 */ float kankyo;
    /* 0x1B8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1BC */ unshort count;
    /* 0x1BE */ unchar model;
    /* 0x1BF */ unchar arg;
    /* 0x1C0 */ unchar swalp;
    /* 0x1C1 */ unchar scl;
    /* 0x1C2 */ unchar magic_cancel;
}; /* size = 0x01C4 */

#endif /* __Z64OVL_Z_EN_M_THUNDER__ */
