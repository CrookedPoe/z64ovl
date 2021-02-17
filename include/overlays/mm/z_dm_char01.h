#ifndef __Z64OVL_Z_DM_CHAR01__
#define __Z64OVL_Z_DM_CHAR01__

#define Z_DM_CHAR01_ACTOR_NUMBER     0x0193
#define Z_DM_CHAR01_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR01_OBJECT_NUMBER    0x01A2
#define Z_DM_CHAR01_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_dm_char01_s z_dm_char01_t;
struct z_dm_char01_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A4 */ float sin_x;
    /* 0x1A8 */ float sin_y;
    /* 0x1AC */ short wave_plus[205];
    /* 0x346 */ short dousa;
    /* 0x348 */ float alpha;
    /* 0x34C */ unsigned char pat;
    /* 0x34D */ unsigned char BGdelete_flg;
}; /* size = 0x0350 */

#endif /* __Z64OVL_Z_DM_CHAR01__ */
