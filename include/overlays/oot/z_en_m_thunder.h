#ifndef __Z64OVL_Z_EN_M_THUNDER__
#define __Z64OVL_Z_EN_M_THUNDER__

#define Z_EN_M_THUNDER_ACTOR_NUMBER     0x0057
#define Z_EN_M_THUNDER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_M_THUNDER_OBJECT_NUMBER    0x0001
#define Z_EN_M_THUNDER_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_m_thunder_s z_en_m_thunder_t;
struct z_en_m_thunder_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe acoc_info;
    /* 0x188 */ Light_list* light_list;
    /* 0x18C */ Light_data light_data;
    /* 0x19C */ float light_power;
    /* 0x1A0 */ float pow;
    /* 0x1A4 */ float frame;
    /* 0x1A8 */ float swpow;
    /* 0x1AC */ float kankyo;
    /* 0x1B0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B4 */ unshort count;
    /* 0x1B6 */ unchar model;
    /* 0x1B7 */ unchar arg;
    /* 0x1B8 */ unchar swalp;
    /* 0x1B9 */ unchar scl;
    /* 0x1BA */ unchar magic_cancel;
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_EN_M_THUNDER__ */
