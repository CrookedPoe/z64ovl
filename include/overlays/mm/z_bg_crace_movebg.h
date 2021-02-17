#ifndef __Z64OVL_Z_BG_CRACE_MOVEBG__
#define __Z64OVL_Z_BG_CRACE_MOVEBG__

#define Z_BG_CRACE_MOVEBG_ACTOR_NUMBER     0x017E
#define Z_BG_CRACE_MOVEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_CRACE_MOVEBG_OBJECT_NUMBER    0x018A
#define Z_BG_CRACE_MOVEBG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_crace_movebg_s z_bg_crace_movebg_t;
struct z_bg_crace_movebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float pos_y_now;
    /* 0x164 */ float pos_y_tgt;
    /* 0x168 */ float spd_y_now;
    /* 0x16C */ float close_spd;
    /* 0x170 */ int stat;
    /* 0x174 */ int timer;
    /* 0x178 */ xyz_t player_rel_pos_cal;
    /* 0x184 */ unsigned char shutter_no;
    /* 0x188 */ xyz_t old_player_waist_pos;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_BG_CRACE_MOVEBG__ */
