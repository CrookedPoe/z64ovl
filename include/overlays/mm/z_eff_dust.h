#ifndef __Z64OVL_Z_EFF_DUST__
#define __Z64OVL_Z_EFF_DUST__

#define Z_EFF_DUST_ACTOR_NUMBER     0x007B
#define Z_EFF_DUST_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EFF_DUST_OBJECT_NUMBER    0x0001
#define Z_EFF_DUST_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_eff_dust_s z_eff_dust_t;
struct z_eff_dust_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ float parcent[64];
    /* 0x244 */ xyz_t pos[64];
    /* 0x544 */ unchar now;
    /* 0x545 */ unchar timer;
    /* 0x548 */ xyz_t rate;
    /* 0x554 */ float scale;
    /* 0x558 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x55C */ void (*drawproc)(/* ECOFF does not store param types */);
}; /* size = 0x0560 */

#endif /* __Z64OVL_Z_EFF_DUST__ */
