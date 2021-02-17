#ifndef __Z64OVL_Z_BG_BREAKWALL__
#define __Z64OVL_Z_BG_BREAKWALL__

#define Z_BG_BREAKWALL_ACTOR_NUMBER     0x0059
#define Z_BG_BREAKWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_BREAKWALL_OBJECT_NUMBER    0x0001
#define Z_BG_BREAKWALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_breakwall_s z_bg_breakwall_t;
struct z_bg_breakwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ Gfx* shape;
    /* 0x158 */ signed char collision_type;
    /* 0x159 */ signed char change_bank_ID;
    /* 0x15A */ signed char counter;
    /* 0x15C */ ClObjSwrd ac_info;
    /* 0x1DC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01F0 */

#endif /* __Z64OVL_Z_BG_BREAKWALL__ */
