#ifndef __Z64OVL_Z_DM_CHAR06__
#define __Z64OVL_Z_DM_CHAR06__

#define Z_DM_CHAR06_ACTOR_NUMBER     0x0198
#define Z_DM_CHAR06_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR06_OBJECT_NUMBER    0x01E6
#define Z_DM_CHAR06_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char06_s z_dm_char06_t;
struct z_dm_char06_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x294 */ xyz_t add_position;
    /* 0x2A0 */ unsigned char alpha;
}; /* size = 0x02A4 */

#endif /* __Z64OVL_Z_DM_CHAR06__ */
