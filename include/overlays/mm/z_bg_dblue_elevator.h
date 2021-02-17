#ifndef __Z64OVL_Z_BG_DBLUE_ELEVATOR__
#define __Z64OVL_Z_BG_DBLUE_ELEVATOR__

#define Z_BG_DBLUE_ELEVATOR_ACTOR_NUMBER     0x0222
#define Z_BG_DBLUE_ELEVATOR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DBLUE_ELEVATOR_OBJECT_NUMBER    0x0184
#define Z_BG_DBLUE_ELEVATOR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_dblue_elevator_s z_bg_dblue_elevator_t;
struct z_bg_dblue_elevator_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float spd_param;
    /* 0x164 */ float pos_param;
    /* 0x168 */ signed char walk_dir;
    /* 0x169 */ signed char wait_timer;
    /* 0x16A */ signed char stop_timer;
    /* 0x16B */ signed char water_flag;
    /* 0x16C */ float water_y;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_DBLUE_ELEVATOR__ */
