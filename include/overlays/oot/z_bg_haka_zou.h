#ifndef __Z64OVL_Z_BG_HAKA_ZOU__
#define __Z64OVL_Z_BG_HAKA_ZOU__

#define Z_BG_HAKA_ZOU_ACTOR_NUMBER     0x00BE
#define Z_BG_HAKA_ZOU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HAKA_ZOU_OBJECT_NUMBER    0x0001
#define Z_BG_HAKA_ZOU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_haka_zou_s z_bg_haka_zou_t;
struct z_bg_haka_zou_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ signed char change_bank_ID;
    /* 0x159 */ unsigned char sw_num;
    /* 0x15A */ short timer;
    /* 0x15C */ ClObjPipe ac_pipe;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_BG_HAKA_ZOU__ */
