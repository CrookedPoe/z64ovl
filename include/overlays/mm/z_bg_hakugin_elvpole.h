#ifndef __Z64OVL_Z_BG_HAKUGIN_ELVPOLE__
#define __Z64OVL_Z_BG_HAKUGIN_ELVPOLE__

#define Z_BG_HAKUGIN_ELVPOLE_ACTOR_NUMBER     0x01A3
#define Z_BG_HAKUGIN_ELVPOLE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKUGIN_ELVPOLE_OBJECT_NUMBER    0x0190
#define Z_BG_HAKUGIN_ELVPOLE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hakugin_elvpole_s z_bg_hakugin_elvpole_t;
struct z_bg_hakugin_elvpole_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ short yuragi;
    /* 0x15E */ short timer;
    /* 0x160 */ unshort flag;
    /* 0x164 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_HAKUGIN_ELVPOLE__ */
