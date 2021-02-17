#ifndef __Z64OVL_Z_BG_HIDAN_ROCK__
#define __Z64OVL_Z_BG_HIDAN_ROCK__

#define Z_BG_HIDAN_ROCK_ACTOR_NUMBER     0x0043
#define Z_BG_HIDAN_ROCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_ROCK_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_ROCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_rock_s z_bg_hidan_rock_t;
struct z_bg_hidan_rock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char obj_type;
    /* 0x159 */ unsigned char player_ride_flg;
    /* 0x15A */ short timer;
    /* 0x15C */ float fire_scale_y;
    /* 0x160 */ xyz_t sound_pos;
    /* 0x16C */ ClObjPipe at_pipe;
}; /* size = 0x01C8 */

#endif /* __Z64OVL_Z_BG_HIDAN_ROCK__ */
