#ifndef __Z64OVL_Z_DM_OPSTAGE__
#define __Z64OVL_Z_DM_OPSTAGE__

#define Z_DM_OPSTAGE_ACTOR_NUMBER     0x0190
#define Z_DM_OPSTAGE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_OPSTAGE_OBJECT_NUMBER    0x0169
#define Z_DM_OPSTAGE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_opstage_s z_dm_opstage_t;
struct z_dm_opstage_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A4 */ xyz_t add_position;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_DM_OPSTAGE__ */
