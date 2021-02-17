#ifndef __Z64OVL_Z_BG_HAKA_TRAP__
#define __Z64OVL_Z_BG_HAKA_TRAP__

#define Z_BG_HAKA_TRAP_ACTOR_NUMBER     0x00BC
#define Z_BG_HAKA_TRAP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_TRAP_OBJECT_NUMBER    0x0069
#define Z_BG_HAKA_TRAP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_trap_s z_bg_haka_trap_t;
struct z_bg_haka_trap_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char timer;
    /* 0x159 */ unsigned char se_flg;
    /* 0x15A */ short aim_pos_y;
    /* 0x15C */ xyz_t sound_pos;
    /* 0x168 */ ClObjPipe at_pipe;
    /* 0x1B4 */ ClObjTris ac_tris;
    /* 0x1D4 */ ClObjTrisElem tris_elem[2];
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_BG_HAKA_TRAP__ */
