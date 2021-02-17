#ifndef __Z64OVL_Z_EFC_ERUPC__
#define __Z64OVL_Z_EFC_ERUPC__

#define Z_EFC_ERUPC_ACTOR_NUMBER     0x0176
#define Z_EFC_ERUPC_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFC_ERUPC_OBJECT_NUMBER    0x014D
#define Z_EFC_ERUPC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_efc_erupc_s z_efc_erupc_t;
struct z_efc_erupc_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short frame_1;
    /* 0x13E */ short frame_2;
    /* 0x140 */ short frame_3;
    /* 0x142 */ short hiniko_num;
    /* 0x144 */ short hinoko_accY;
    /* 0x148 */ Boss_Eff boss_eff[100];
    /* 0x18B8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x18CC */

#endif /* __Z64OVL_Z_EFC_ERUPC__ */
