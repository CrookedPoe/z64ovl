#ifndef __Z64OVL_Z_BG_UMAJUMP__
#define __Z64OVL_Z_BG_UMAJUMP__

#define Z_BG_UMAJUMP_ACTOR_NUMBER     0x0108
#define Z_BG_UMAJUMP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_UMAJUMP_OBJECT_NUMBER    0x0100
#define Z_BG_UMAJUMP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_umajump_s z_bg_umajump_t;
struct z_bg_umajump_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_UMAJUMP__ */
