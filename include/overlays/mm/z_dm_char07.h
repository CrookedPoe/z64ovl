#ifndef __Z64OVL_Z_DM_CHAR07__
#define __Z64OVL_Z_DM_CHAR07__

#define Z_DM_CHAR07_ACTOR_NUMBER     0x0199
#define Z_DM_CHAR07_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR07_OBJECT_NUMBER    0x0212
#define Z_DM_CHAR07_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char07_s z_dm_char07_t;
struct z_dm_char07_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ s_xyz joint1[22];
    /* 0x224 */ s_xyz joint2[22];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ xyz_t add_position;
    /* 0x2B8 */ unsigned char alpha;
    /* 0x2B9 */ unsigned char spot_on_bit;
    /* 0x2BA */ unsigned char bgchk_on;
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_DM_CHAR07__ */
