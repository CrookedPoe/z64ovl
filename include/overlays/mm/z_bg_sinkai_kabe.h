#ifndef __Z64OVL_Z_BG_SINKAI_KABE__
#define __Z64OVL_Z_BG_SINKAI_KABE__

#define Z_BG_SINKAI_KABE_ACTOR_NUMBER     0x020C
#define Z_BG_SINKAI_KABE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_SINKAI_KABE_OBJECT_NUMBER    0x01F4
#define Z_BG_SINKAI_KABE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_sinkai_kabe_s z_bg_sinkai_kabe_t;
struct z_bg_sinkai_kabe_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ACTOR* utubo_actor;
    /* 0x164 */ short Event_now[4];
    /* 0x16C */ int index;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_SINKAI_KABE__ */
