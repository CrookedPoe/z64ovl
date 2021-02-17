#ifndef __Z64OVL_Z_EN_NY__
#define __Z64OVL_Z_EN_NY__

#define Z_EN_NY_ACTOR_NUMBER     0x00EC
#define Z_EN_NY_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_NY_OBJECT_NUMBER    0x00E5
#define Z_EN_NY_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_ny_s z_en_ny_t;
struct z_en_ny_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph_info;
    /* 0x160 */ ClObjJntSphElem sphelem;
    /* 0x1A0 */ Break_work break_work;
    /* 0x1B8 */ short count;
    /* 0x1BA */ short fireTM;
    /* 0x1BC */ short attackFG;
    /* 0x1BE */ short defendFG;
    /* 0x1C0 */ unsigned char item;
    /* 0x1C4 */ int core1_a;
    /* 0x1C8 */ int core2_a;
    /* 0x1CC */ int timer;
    /* 0x1D0 */ float toge_scale;
    /* 0x1D4 */ float speed;
    /* 0x1D8 */ float max_speed;
    /* 0x1DC */ float max_speed_y;
    /* 0x1E0 */ float bg_foot;
    /* 0x1E4 */ float turn_speed;
    /* 0x1E8 */ xyz_t eff_pos[8];
    /* 0x248 */ xyz_t eff_spd[8];
}; /* size = 0x02B8 */

#endif /* __Z64OVL_Z_EN_NY__ */
