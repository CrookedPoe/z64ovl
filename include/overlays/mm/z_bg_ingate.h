#ifndef __Z64OVL_Z_BG_INGATE__
#define __Z64OVL_Z_BG_INGATE__

#define Z_BG_INGATE_ACTOR_NUMBER     0x00A7
#define Z_BG_INGATE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_INGATE_OBJECT_NUMBER    0x017F
#define Z_BG_INGATE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ingate_s z_bg_ingate_t;
struct z_bg_ingate_s {
    /* 0x0 */ MoveBG_Actor movBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ unsigned short statf;
    /* 0x164 */ Path_Info* rails;
    /* 0x168 */ short pass_tmr;
    /* 0x16A */ short timer;
    /* 0x16C */ short count;
    /* 0x16E */ short event;
    /* 0x170 */ Nurbs_MvParm nurbs;
}; /* size = 0x0190 */

#endif /* __Z64OVL_Z_BG_INGATE__ */
