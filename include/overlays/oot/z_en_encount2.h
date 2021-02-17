#ifndef __Z64OVL_Z_EN_ENCOUNT2__
#define __Z64OVL_Z_EN_ENCOUNT2__

#define Z_EN_ENCOUNT2_ACTOR_NUMBER     0x00B4
#define Z_EN_ENCOUNT2_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ENCOUNT2_OBJECT_NUMBER    0x0092
#define Z_EN_ENCOUNT2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_encount2_s z_en_encount2_t;
struct z_en_encount2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short work[2];
    /* 0x144 */ short wait_time;
    /* 0x146 */ short shoot_time;
    /* 0x148 */ short summon_max;
    /* 0x14A */ short index;
    /* 0x14C */ short komatsu;
    /* 0x14E */ short timer;
    /* 0x150 */ float ambient_max;
    /* 0x154 */ float ambient_work;
    /* 0x158 */ float diffuse_max;
    /* 0x15C */ float diffuse_work;
    /* 0x160 */ float fog_near_max;
    /* 0x164 */ float fog_near_work;
    /* 0x168 */ short frame;
    /* 0x16C */ float persent;
    /* 0x170 */ u64 opening_frag;
    /* 0x178 */ ENCOUNT1_EFF encount1_eff[50];
}; /* size = 0x0A20 */

#endif /* __Z64OVL_Z_EN_ENCOUNT2__ */
