#ifndef __Z64OVL_Z_EN_SYATEKI_ITM__
#define __Z64OVL_Z_EN_SYATEKI_ITM__

#define Z_EN_SYATEKI_ITM_ACTOR_NUMBER     0x00C0
#define Z_EN_SYATEKI_ITM_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_SYATEKI_ITM_OBJECT_NUMBER    0x0001
#define Z_EN_SYATEKI_ITM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_syateki_itm_s z_en_syateki_itm_t;
struct z_en_syateki_itm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x142 */ short wait_timer;
    /* 0x144 */ short game_stat;
    /* 0x146 */ short HIT_count;
    /* 0x148 */ short mode_stat;
    /* 0x14A */ short mode_play_tbl[6];
    /* 0x156 */ short dead_frag[2];
    /* 0x15A */ short max_takahata;
    /* 0x15C */ xyz_t move_pos[2];
    /* 0x174 */ xyz_t srch_pos[2];
    /* 0x18C */ ACTOR* Ruppy_HIT_Actor[10];
    /* 0x1B4 */ ACTOR* Ruppy_Actor[2];
    /* 0x1BC */ ACTOR* Oyaji_actor;
    /* 0x1C0 */ ACTOR* Ruppy_Real_Actor[2];
}; /* size = 0x01D8 */

#endif /* __Z64OVL_Z_EN_SYATEKI_ITM__ */
