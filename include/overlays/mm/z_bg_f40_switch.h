#ifndef __Z64OVL_Z_BG_F40_SWITCH__
#define __Z64OVL_Z_BG_F40_SWITCH__

#define Z_BG_F40_SWITCH_ACTOR_NUMBER     0x0246
#define Z_BG_F40_SWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_BG_F40_SWITCH_OBJECT_NUMBER    0x0222
#define Z_BG_F40_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_f40_switch_s z_bg_f40_switch_t;
struct z_bg_f40_switch_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ short timer;
    /* 0x15E */ signed char now_ride_flag;
    /* 0x15F */ signed char old_ride_flag;
    /* 0x160 */ signed char ev_flag;
    /* 0x164 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_F40_SWITCH__ */
