#ifndef __Z64OVL_Z_EN_TEST4__
#define __Z64OVL_Z_EN_TEST4__

#define Z_EN_TEST4_ACTOR_NUMBER     0x015A
#define Z_EN_TEST4_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_EN_TEST4_OBJECT_NUMBER    0x0001
#define Z_EN_TEST4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_test4_s z_en_test4_t;
struct z_en_test4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ signed char check_time_ID;
    /* 0x145 */ unsigned char counter;
    /* 0x146 */ unsigned short old_time;
    /* 0x148 */ unsigned short notice_time;
    /* 0x14A */ unsigned short old_notice_time;
    /* 0x14C */ unsigned char weather_mode;
    /* 0x150 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_TEST4__ */
