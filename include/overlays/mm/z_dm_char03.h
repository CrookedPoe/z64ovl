#ifndef __Z64OVL_Z_DM_CHAR03__
#define __Z64OVL_Z_DM_CHAR03__

#define Z_DM_CHAR03_ACTOR_NUMBER     0x0195
#define Z_DM_CHAR03_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR03_OBJECT_NUMBER    0x01A3
#define Z_DM_CHAR03_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char03_s z_dm_char03_t;
struct z_dm_char03_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ short anime_no;
    /* 0x18E */ unchar draw_sw;
    /* 0x18F */ unsigned char bank;
    /* 0x190 */ xyz_t set_position;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_DM_CHAR03__ */
