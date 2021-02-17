#ifndef __Z64OVL_Z_OBJECT_KANKYO__
#define __Z64OVL_Z_OBJECT_KANKYO__

#define Z_OBJECT_KANKYO_ACTOR_NUMBER     0x0097
#define Z_OBJECT_KANKYO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJECT_KANKYO_OBJECT_NUMBER    0x0001
#define Z_OBJECT_KANKYO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_object_kankyo_s z_object_kankyo_t;
struct z_object_kankyo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ MONONOKE mononoke[64];
    /* 0x163C */ xyz_t eyeold;
    /* 0x1648 */ unchar bank;
    /* 0x1649 */ unchar tenso;
    /* 0x164C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x1660 */

#endif /* __Z64OVL_Z_OBJECT_KANKYO__ */
