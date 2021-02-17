#ifndef __Z64OVL_Z_EN_NWC__
#define __Z64OVL_Z_EN_NWC__

#define Z_EN_NWC_ACTOR_NUMBER     0x0135
#define Z_EN_NWC_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NWC_OBJECT_NUMBER    0x0124
#define Z_EN_NWC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_nwc_s z_en_nwc_t;
struct z_en_nwc_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjJntSph acoc_info;
    /* 0x15C */ unsigned char object_num;
    /* 0x15D */ unsigned char pad1;
    /* 0x15E */ unsigned char pad2;
    /* 0x15F */ unsigned char pad3;
    /* 0x160 */ Piyo_Object object[16];
    /* 0x720 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0734 */

#endif /* __Z64OVL_Z_EN_NWC__ */
