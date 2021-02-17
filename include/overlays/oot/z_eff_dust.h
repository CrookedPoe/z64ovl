#ifndef __Z64OVL_Z_EFF_DUST__
#define __Z64OVL_Z_EFF_DUST__

#define Z_EFF_DUST_ACTOR_NUMBER     0x0101
#define Z_EFF_DUST_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EFF_DUST_OBJECT_NUMBER    0x0001
#define Z_EFF_DUST_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_eff_dust_s z_eff_dust_t;
struct z_eff_dust_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ float parcent[64];
    /* 0x23C */ xyz_t pos[64];
    /* 0x53C */ unchar now;
    /* 0x53D */ unchar timer;
    /* 0x540 */ xyz_t rate;
    /* 0x54C */ float scale;
    /* 0x550 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x554 */ void (*drawproc)(/* ECOFF does not store param types */);
}; /* size = 0x0568 */

#endif /* __Z64OVL_Z_EFF_DUST__ */
