#ifndef __Z64OVL_Z_EN_DNT_DEMO__
#define __Z64OVL_Z_EN_DNT_DEMO__

#define Z_EN_DNT_DEMO_ACTOR_NUMBER     0x01A1
#define Z_EN_DNT_DEMO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_DNT_DEMO_OBJECT_NUMBER    0x0001
#define Z_EN_DNT_DEMO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_dnt_demo_s z_en_dnt_demo_t;
struct z_en_dnt_demo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short wait_count;
    /* 0x142 */ short wait_timer;
    /* 0x144 */ short timer;
    /* 0x146 */ short hani_out;
    /* 0x148 */ short all_mode;
    /* 0x14A */ short all_action;
    /* 0x14C */ short jijii_frag;
    /* 0x14E */ short camera_frag;
    /* 0x150 */ xyz_t nomal_pos[9];
    /* 0x1BC */ xyz_t jiji_pos;
    /* 0x1C8 */ ACTOR* nomal_Actor[9];
    /* 0x1EC */ ACTOR* jiji_Actor;
}; /* size = 0x0200 */

#endif /* __Z64OVL_Z_EN_DNT_DEMO__ */
