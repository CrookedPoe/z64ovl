#ifndef __Z64OVL_Z_BG_MORI_IDOMIZU__
#define __Z64OVL_Z_BG_MORI_IDOMIZU__

#define Z_BG_MORI_IDOMIZU_ACTOR_NUMBER     0x00E4
#define Z_BG_MORI_IDOMIZU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_IDOMIZU_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_IDOMIZU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_mori_idomizu_s z_bg_mori_idomizu_t;
struct z_bg_mori_idomizu_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ float goal_posY;
    /* 0x144 */ int old_sw;
    /* 0x148 */ short hassei_flag;
    /* 0x14A */ short demo_timer;
    /* 0x14C */ signed char tex_bank_ID;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_MORI_IDOMIZU__ */
