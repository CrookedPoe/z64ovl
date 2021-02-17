#ifndef __Z64OVL_Z_EN_TEST6__
#define __Z64OVL_Z_EN_TEST6__

#define Z_EN_TEST6_ACTOR_NUMBER     0x018C
#define Z_EN_TEST6_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TEST6_OBJECT_NUMBER    0x0001
#define Z_EN_TEST6_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_FIXED | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_test6_s z_en_test6_t;
struct z_en_test6_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ Gfx* gp;
    /* 0x14C */ float pitch;
    /* 0x150 */ float radius;
    /* 0x154 */ float speed;
    /* 0x158 */ float spark;
    /* 0x15C */ float scale;
    /* 0x160 */ float depth;
    /* 0x164 */ Demo_Light demo_light[2];
    /* 0x18C */ DemoCamPlay dcp;
    /* 0x20C */ xyz_t disk_pos[6];
    /* 0x254 */ xyz_t* flash_pos;
    /* 0x258 */ struct {
        /* 0x0 */ xyz_t ctr;
        /* 0xC */ xyz_t eye;
        /* 0x18 */ float fovy;
}; /* size = 0x0288 */

#endif /* __Z64OVL_Z_EN_TEST6__ */
