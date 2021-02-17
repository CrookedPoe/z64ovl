#ifndef __Z64OVL_Z_BG_JYA_LIFT__
#define __Z64OVL_Z_BG_JYA_LIFT__

#define Z_BG_JYA_LIFT_ACTOR_NUMBER     0x0157
#define Z_BG_JYA_LIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_LIFT_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_LIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_lift_s z_bg_jya_lift_t;
struct z_bg_jya_lift_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short count;
    /* 0x15A */ unsigned char exist_flag;
    /* 0x15B */ unsigned char old_status;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_JYA_LIFT__ */
