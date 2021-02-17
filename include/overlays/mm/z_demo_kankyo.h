#ifndef __Z64OVL_Z_DEMO_KANKYO__
#define __Z64OVL_Z_DEMO_KANKYO__

#define Z_DEMO_KANKYO_ACTOR_NUMBER     0x0049
#define Z_DEMO_KANKYO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_KANKYO_OBJECT_NUMBER    0x0001
#define Z_DEMO_KANKYO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_kankyo_s z_demo_kankyo_t;
struct z_demo_kankyo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ MONONOKE mononoke[64];
    /* 0x1644 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1648 */ int bank;
    /* 0x164C */ unchar draw_sw;
}; /* size = 0x1650 */

#endif /* __Z64OVL_Z_DEMO_KANKYO__ */
