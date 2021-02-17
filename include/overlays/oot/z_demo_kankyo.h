#ifndef __Z64OVL_Z_DEMO_KANKYO__
#define __Z64OVL_Z_DEMO_KANKYO__

#define Z_DEMO_KANKYO_ACTOR_NUMBER     0x008C
#define Z_DEMO_KANKYO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DEMO_KANKYO_OBJECT_NUMBER    0x0001
#define Z_DEMO_KANKYO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_kankyo_s z_demo_kankyo_t;
struct z_demo_kankyo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unsigned char bank;
    /* 0x13D */ unsigned char kazu;
    /* 0x13E */ unsigned char timer;
    /* 0x140 */ SFIELD Sfield[30];
    /* 0x5F0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0604 */

#endif /* __Z64OVL_Z_DEMO_KANKYO__ */
