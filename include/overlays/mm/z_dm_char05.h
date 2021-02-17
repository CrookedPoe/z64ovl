#ifndef __Z64OVL_Z_DM_CHAR05__
#define __Z64OVL_Z_DM_CHAR05__

#define Z_DM_CHAR05_ACTOR_NUMBER     0x0197
#define Z_DM_CHAR05_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR05_OBJECT_NUMBER    0x0213
#define Z_DM_CHAR05_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char05_s z_dm_char05_t;
struct z_dm_char05_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ short anime_no;
    /* 0x18E */ unchar draw_sw;
    /* 0x18F */ unsigned char bank;
    /* 0x190 */ xyz_t set_position;
    /* 0x19C */ unsigned int fog_r;
    /* 0x1A0 */ unsigned int fog_g;
    /* 0x1A4 */ unsigned int fog_b;
    /* 0x1A8 */ unsigned int fog_a;
    /* 0x1AC */ int fog_n;
    /* 0x1B0 */ int fog_f;
    /* 0x1B4 */ unchar mode;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_DM_CHAR05__ */
