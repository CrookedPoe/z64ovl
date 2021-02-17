#ifndef __Z64OVL_Z_BG_SPOT15_RRBOX__
#define __Z64OVL_Z_BG_SPOT15_RRBOX__

#define Z_BG_SPOT15_RRBOX_ACTOR_NUMBER     0x0107
#define Z_BG_SPOT15_RRBOX_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT15_RRBOX_OBJECT_NUMBER    0x00F0
#define Z_BG_SPOT15_RRBOX_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot15_rrbox_s z_bg_spot15_rrbox_t;
struct z_bg_spot15_rrbox_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15C */ float s_th;
    /* 0x160 */ float c_th;
    /* 0x164 */ float spd;
    /* 0x168 */ float pos;
    /* 0x16C */ float powF;
    /* 0x170 */ int pbg_actor_index;
}; /* size = 0x0184 */

#endif /* __Z64OVL_Z_BG_SPOT15_RRBOX__ */
