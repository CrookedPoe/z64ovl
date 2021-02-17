#ifndef __Z64OVL_Z_BG_HAKA_CURTAIN__
#define __Z64OVL_Z_BG_HAKA_CURTAIN__

#define Z_BG_HAKA_CURTAIN_ACTOR_NUMBER     0x020D
#define Z_BG_HAKA_CURTAIN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_CURTAIN_OBJECT_NUMBER    0x01E0
#define Z_BG_HAKA_CURTAIN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_haka_curtain_s z_bg_haka_curtain_t;
struct z_bg_haka_curtain_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_HAKA_CURTAIN__ */
