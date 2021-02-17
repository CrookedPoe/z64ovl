#ifndef __Z64OVL_Z_BG_SPOT11_OASIS__
#define __Z64OVL_Z_BG_SPOT11_OASIS__

#define Z_BG_SPOT11_OASIS_ACTOR_NUMBER     0x01C2
#define Z_BG_SPOT11_OASIS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT11_OASIS_OBJECT_NUMBER    0x016F
#define Z_BG_SPOT11_OASIS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot11_oasis_s z_bg_spot11_oasis_t;
struct z_bg_spot11_oasis_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ unsigned char water_flag;
    /* 0x141 */ unsigned char water_idx;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_BG_SPOT11_OASIS__ */
