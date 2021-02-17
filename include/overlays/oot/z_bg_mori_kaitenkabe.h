#ifndef __Z64OVL_Z_BG_MORI_KAITENKABE__
#define __Z64OVL_Z_BG_MORI_KAITENKABE__

#define Z_BG_MORI_KAITENKABE_ACTOR_NUMBER     0x0088
#define Z_BG_MORI_KAITENKABE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_KAITENKABE_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_KAITENKABE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_mori_kaitenkabe_s z_bg_mori_kaitenkabe_t;
struct z_bg_mori_kaitenkabe_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ int count;
    /* 0x15C */ float hoko;
    /* 0x160 */ float aglSpd;
    /* 0x164 */ float aglPos;
    /* 0x168 */ xyz_t player_pos;
    /* 0x174 */ signed char tex_bank_ID;
}; /* size = 0x0188 */

#endif /* __Z64OVL_Z_BG_MORI_KAITENKABE__ */
