#ifndef __Z64OVL_Z_BG_MORI_ELEVATOR__
#define __Z64OVL_Z_BG_MORI_ELEVATOR__

#define Z_BG_MORI_ELEVATOR_ACTOR_NUMBER     0x0087
#define Z_BG_MORI_ELEVATOR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_ELEVATOR_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_ELEVATOR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mori_elevator_s z_bg_mori_elevator_t;
struct z_bg_mori_elevator_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ float goal_posY;
    /* 0x15C */ int old_poh_save_bit;
    /* 0x160 */ unsigned char old_status;
    /* 0x161 */ signed char tex_bank_ID;
    /* 0x162 */ short ct_state;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_MORI_ELEVATOR__ */
