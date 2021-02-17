#ifndef __Z64OVL_Z_BG_IKANA_DHARMA__
#define __Z64OVL_Z_BG_IKANA_DHARMA__

#define Z_BG_IKANA_DHARMA_ACTOR_NUMBER     0x0273
#define Z_BG_IKANA_DHARMA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKANA_DHARMA_OBJECT_NUMBER    0x0203
#define Z_BG_IKANA_DHARMA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ikana_dharma_s z_bg_ikana_dharma_t;
struct z_bg_ikana_dharma_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char mode_timer;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_IKANA_DHARMA__ */
