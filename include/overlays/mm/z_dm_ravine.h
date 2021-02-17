#ifndef __Z64OVL_Z_DM_RAVINE__
#define __Z64OVL_Z_DM_RAVINE__

#define Z_DM_RAVINE_ACTOR_NUMBER     0x0148
#define Z_DM_RAVINE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_RAVINE_OBJECT_NUMBER    0x0169
#define Z_DM_RAVINE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_ravine_s z_dm_ravine_t;
struct z_dm_ravine_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char mode;
    /* 0x149 */ unsigned char overrap;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_DM_RAVINE__ */
