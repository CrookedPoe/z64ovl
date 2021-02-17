#ifndef __Z64OVL_Z_BG_BREAKWALL__
#define __Z64OVL_Z_BG_BREAKWALL__

#define Z_BG_BREAKWALL_ACTOR_NUMBER     0x0036
#define Z_BG_BREAKWALL_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_BREAKWALL_OBJECT_NUMBER    0x0001
#define Z_BG_BREAKWALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_breakwall_s z_bg_breakwall_t;
struct z_bg_breakwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ signed char change_bank_ID;
    /* 0x15D */ unsigned char sw_no;
    /* 0x15E */ unsigned char work_c0;
    /* 0x15F */ unsigned char pad3;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_BREAKWALL__ */
