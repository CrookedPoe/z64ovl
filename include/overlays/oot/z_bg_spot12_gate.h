#ifndef __Z64OVL_Z_BG_SPOT12_GATE__
#define __Z64OVL_Z_BG_SPOT12_GATE__

#define Z_BG_SPOT12_GATE_ACTOR_NUMBER     0x0190
#define Z_BG_SPOT12_GATE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT12_GATE_OBJECT_NUMBER    0x0162
#define Z_BG_SPOT12_GATE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot12_gate_s z_bg_spot12_gate_t;
struct z_bg_spot12_gate_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_SPOT12_GATE__ */
