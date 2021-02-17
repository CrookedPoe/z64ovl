#ifndef __Z64OVL_Z_BG_KEIKOKU_SAKU__
#define __Z64OVL_Z_BG_KEIKOKU_SAKU__

#define Z_BG_KEIKOKU_SAKU_ACTOR_NUMBER     0x016C
#define Z_BG_KEIKOKU_SAKU_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_KEIKOKU_SAKU_OBJECT_NUMBER    0x017E
#define Z_BG_KEIKOKU_SAKU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_keikoku_saku_s z_bg_keikoku_saku_t;
struct z_bg_keikoku_saku_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short save_bit;
    /* 0x162 */ short timer;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_KEIKOKU_SAKU__ */
