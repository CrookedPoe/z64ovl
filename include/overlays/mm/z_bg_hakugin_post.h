#ifndef __Z64OVL_Z_BG_HAKUGIN_POST__
#define __Z64OVL_Z_BG_HAKUGIN_POST__

#define Z_BG_HAKUGIN_POST_ACTOR_NUMBER     0x018F
#define Z_BG_HAKUGIN_POST_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKUGIN_POST_OBJECT_NUMBER    0x0190
#define Z_BG_HAKUGIN_POST_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_hakugin_post_s z_bg_hakugin_post_t;
struct z_bg_hakugin_post_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float start_height;
    /* 0x164 */ float off_y;
    /* 0x168 */ float on_y;
    /* 0x16C */ float now_y;
    /* 0x170 */ int sw0;
    /* 0x174 */ int sw1;
    /* 0x178 */ signed char no_ac_timer;
    /* 0x179 */ signed char no_bound_se_timer;
    /* 0x17A */ unsigned char pad_0[2];
    /* 0x17C */ void (*event_after_init)(/* ECOFF does not store param types */);
    /* 0x180 */ short event_stop_timer_1;
    /* 0x182 */ short event_stop_timer_2;
    /* 0x184 */ short event_number_1;
    /* 0x186 */ short event_number_2;
}; /* size = 0x0188 */

#endif /* __Z64OVL_Z_BG_HAKUGIN_POST__ */
