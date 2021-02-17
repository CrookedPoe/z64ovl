#ifndef __Z64OVL_Z_BG_DDAN_KD__
#define __Z64OVL_Z_BG_DDAN_KD__

#define Z_BG_DDAN_KD_ACTOR_NUMBER     0x005C
#define Z_BG_DDAN_KD_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DDAN_KD_OBJECT_NUMBER    0x002B
#define Z_BG_DDAN_KD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ddan_kd_s z_bg_ddan_kd_t;
struct z_bg_ddan_kd_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ ACTOR* blast1;
    /* 0x158 */ short mode_timer;
    /* 0x15C */ xyz_t blast_pos;
    /* 0x168 */ ClObjPipe pipe_pos;
    /* 0x1B4 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01C8 */

#endif /* __Z64OVL_Z_BG_DDAN_KD__ */
