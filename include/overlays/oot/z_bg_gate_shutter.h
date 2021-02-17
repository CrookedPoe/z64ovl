#ifndef __Z64OVL_Z_BG_GATE_SHUTTER__
#define __Z64OVL_Z_BG_GATE_SHUTTER__

#define Z_BG_GATE_SHUTTER_ACTOR_NUMBER     0x0100
#define Z_BG_GATE_SHUTTER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_GATE_SHUTTER_OBJECT_NUMBER    0x0181
#define Z_BG_GATE_SHUTTER_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_gate_shutter_s z_bg_gate_shutter_t;
struct z_bg_gate_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short move_OK;
    /* 0x15C */ xyz_t kari_pos;
    /* 0x168 */ short timer;
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_BG_GATE_SHUTTER__ */
