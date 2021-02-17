#ifndef __Z64OVL_Z_BG_UMAJUMP__
#define __Z64OVL_Z_BG_UMAJUMP__

#define Z_BG_UMAJUMP_ACTOR_NUMBER     0x007C
#define Z_BG_UMAJUMP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_UMAJUMP_OBJECT_NUMBER    0x0001
#define Z_BG_UMAJUMP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_umajump_s z_bg_umajump_t;
struct z_bg_umajump_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int counter;
    /* 0x164 */ int inanaki_flag;
    /* 0x168 */ ACTOR* horse_actor;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_UMAJUMP__ */
