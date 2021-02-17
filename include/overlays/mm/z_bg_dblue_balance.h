#ifndef __Z64OVL_Z_BG_DBLUE_BALANCE__
#define __Z64OVL_Z_BG_DBLUE_BALANCE__

#define Z_BG_DBLUE_BALANCE_ACTOR_NUMBER     0x021B
#define Z_BG_DBLUE_BALANCE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DBLUE_BALANCE_OBJECT_NUMBER    0x0184
#define Z_BG_DBLUE_BALANCE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_dblue_balance_s z_bg_dblue_balance_t;
struct z_bg_dblue_balance_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ACTOR* scale_l_ptr;
    /* 0x160 */ ACTOR* scale_s_ptr;
    /* 0x164 */ ACTOR* prop_ptr;
    /* 0x168 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x16C */ int old_sw;
    /* 0x170 */ int now_sw;
    /* 0x174 */ short slope_aim_pos;
    /* 0x176 */ short slope_aim_spd;
    /* 0x178 */ short slope_now_spd;
    /* 0x17A */ short slope_old_spd;
    /* 0x17C */ signed char slope_bound_counter;
    /* 0x17D */ signed char waterfall_timer;
    /* 0x17E */ signed char event_stop_timer;
    /* 0x17F */ signed char event_flag;
    /* 0x180 */ signed char ride_1_flag;
    /* 0x181 */ signed char ride_2_flag;
    /* 0x182 */ signed char water_bound_flag;
    /* 0x183 */ unsigned char alpha_max;
    /* 0x184 */ short aim_stop_angle;
    /* 0x186 */ signed char brake_flag;
    /* 0x187 */ signed char max_speed_flag;
    /* 0x188 */ DblueBalanceWaterwheelWing wing[8];
    /* 0x228 */ float water_y;
}; /* size = 0x022C */

#endif /* __Z64OVL_Z_BG_DBLUE_BALANCE__ */
