#ifndef __Z64OVL_Z_BG_SPOT12_SAKU__
#define __Z64OVL_Z_BG_SPOT12_SAKU__

#define Z_BG_SPOT12_SAKU_ACTOR_NUMBER     0x0191
#define Z_BG_SPOT12_SAKU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT12_SAKU_OBJECT_NUMBER    0x0162
#define Z_BG_SPOT12_SAKU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot12_saku_s z_bg_spot12_saku_t;
struct z_bg_spot12_saku_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_SPOT12_SAKU__ */
