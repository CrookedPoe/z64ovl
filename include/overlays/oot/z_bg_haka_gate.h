#ifndef __Z64OVL_Z_BG_HAKA_GATE__
#define __Z64OVL_Z_BG_HAKA_GATE__

#define Z_BG_HAKA_GATE_ACTOR_NUMBER     0x00F7
#define Z_BG_HAKA_GATE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HAKA_GATE_OBJECT_NUMBER    0x0069
#define Z_BG_HAKA_GATE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_gate_s z_bg_haka_gate_t;
struct z_bg_haka_gate_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15A */ short timer;
    /* 0x15C */ short work_angle[4];
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_HAKA_GATE__ */
