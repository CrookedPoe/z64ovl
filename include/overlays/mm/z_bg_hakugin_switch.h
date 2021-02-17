#ifndef __Z64OVL_Z_BG_HAKUGIN_SWITCH__
#define __Z64OVL_Z_BG_HAKUGIN_SWITCH__

#define Z_BG_HAKUGIN_SWITCH_ACTOR_NUMBER     0x01E4
#define Z_BG_HAKUGIN_SWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_BG_HAKUGIN_SWITCH_OBJECT_NUMBER    0x01C7
#define Z_BG_HAKUGIN_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hakugin_switch_s z_bg_hakugin_switch_t;
struct z_bg_hakugin_switch_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ Gfx* shape;
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B0 */ short mode_timer;
    /* 0x1B2 */ signed char no_form_se_timer;
    /* 0x1B3 */ unsigned char pad_0[1];
    /* 0x1B4 */ void (*event_after_init)(/* ECOFF does not store param types */);
    /* 0x1B8 */ short ev_num_down;
    /* 0x1BA */ short ev_num_up;
    /* 0x1BC */ short to_ev_num;
    /* 0x1BE */ signed char to_sw_flag;
    /* 0x1BF */ signed char event_stop_timer;
    /* 0x1C0 */ signed char now_up_flag;
    /* 0x1C1 */ unsigned char pad_1[1];
    /* 0x1C4 */ float offset_spd;
    /* 0x1C8 */ float scale_y_inv;
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_BG_HAKUGIN_SWITCH__ */
