#ifndef __Z64OVL_Z_BG_MIZU_UZU__
#define __Z64OVL_Z_BG_MIZU_UZU__

#define Z_BG_MIZU_UZU_ACTOR_NUMBER     0x00D4
#define Z_BG_MIZU_UZU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_MIZU_UZU_OBJECT_NUMBER    0x0059
#define Z_BG_MIZU_UZU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_mizu_uzu_s z_bg_mizu_uzu_t;
struct z_bg_mizu_uzu_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_MIZU_UZU__ */
