#ifndef __Z64OVL_Z_BG_HAKA__
#define __Z64OVL_Z_BG_HAKA__

#define Z_BG_HAKA_ACTOR_NUMBER     0x009D
#define Z_BG_HAKA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_OBJECT_NUMBER    0x00A2
#define Z_BG_HAKA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_s z_bg_haka_t;
struct z_bg_haka_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_HAKA__ */
