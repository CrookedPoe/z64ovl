#ifndef __Z64OVL_Z_BG_SPOT01_IDOSOKO__
#define __Z64OVL_Z_BG_SPOT01_IDOSOKO__

#define Z_BG_SPOT01_IDOSOKO_ACTOR_NUMBER     0x0145
#define Z_BG_SPOT01_IDOSOKO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT01_IDOSOKO_OBJECT_NUMBER    0x0180
#define Z_BG_SPOT01_IDOSOKO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot01_idosoko_s z_bg_spot01_idosoko_t;
struct z_bg_spot01_idosoko_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_SPOT01_IDOSOKO__ */
