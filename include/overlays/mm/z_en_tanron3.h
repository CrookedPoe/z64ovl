#ifndef __Z64OVL_Z_EN_TANRON3__
#define __Z64OVL_Z_EN_TANRON3__

#define Z_EN_TANRON3_ACTOR_NUMBER     0x023F
#define Z_EN_TANRON3_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_TANRON3_OBJECT_NUMBER    0x015C
#define Z_EN_TANRON3_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tanron3_s z_en_tanron3_t;
struct z_en_tanron3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ short count;
    /* 0x202 */ u8 move_mode;
    /* 0x203 */ u8 move_mode2;
    /* 0x204 */ short timer[3];
    /* 0x20A */ short damage;
    /* 0x20C */ short damage_flash;
    /* 0x210 */ xyz_t target;
    /* 0x21C */ xyz_t base_target;
    /* 0x228 */ xyz_t target_ad;
    /* 0x234 */ short turn_spd;
    /* 0x236 */ short turn_spd_S;
    /* 0x238 */ short turn_spd_P;
    /* 0x23C */ float base_speed;
    /* 0x240 */ float base_speed_ad;
    /* 0x244 */ float water_y;
    /* 0x248 */ short demo_jump_xa;
    /* 0x24A */ short demo_jump_ya;
    /* 0x24C */ short demo_jump_za;
    /* 0x250 */ int anime_count;
    /* 0x254 */ int anime_spd;
    /* 0x258 */ short tail_angle[3];
    /* 0x260 */ ClObjPipe at_pipe_info;
    /* 0x2AC */ ClObjPipe ac_pipe_info;
    /* 0x2F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_TANRON3__ */
