#ifndef __Z64OVL_Z_BG_JYA_1FLIFT__
#define __Z64OVL_Z_BG_JYA_1FLIFT__

#define Z_BG_JYA_1FLIFT_ACTOR_NUMBER     0x018E
#define Z_BG_JYA_1FLIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_1FLIFT_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_1FLIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_1flift_s z_bg_jya_1flift_t;
struct z_bg_jya_1flift_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjPipe pipe;
    /* 0x1A0 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1A4 */ short count;
    /* 0x1A6 */ unsigned char pos_y_idx;
    /* 0x1A7 */ unsigned char make_flag;
    /* 0x1A8 */ unsigned char old_ride;
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_BG_JYA_1FLIFT__ */
