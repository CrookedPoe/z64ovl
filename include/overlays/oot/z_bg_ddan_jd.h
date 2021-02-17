#ifndef __Z64OVL_Z_BG_DDAN_JD__
#define __Z64OVL_Z_BG_DDAN_JD__

#define Z_BG_DDAN_JD_ACTOR_NUMBER     0x0058
#define Z_BG_DDAN_JD_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DDAN_JD_OBJECT_NUMBER    0x002B
#define Z_BG_DDAN_JD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ddan_jd_s z_bg_ddan_jd_t;
struct z_bg_ddan_jd_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char move_level;
    /* 0x159 */ unsigned char move_speed;
    /* 0x15A */ short timer;
    /* 0x15C */ float aim_pos_y;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_DDAN_JD__ */
