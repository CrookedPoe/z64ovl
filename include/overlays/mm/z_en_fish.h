#ifndef __Z64OVL_Z_EN_FISH__
#define __Z64OVL_Z_EN_FISH__

#define Z_EN_FISH_ACTOR_NUMBER     0x0017
#define Z_EN_FISH_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_FISH_OBJECT_NUMBER    0x0001
#define Z_EN_FISH_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_fish_s z_en_fish_t;
struct z_en_fish_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ SKELETON_INFO skeleton;
    /* 0x1E8 */ s_xyz joint1[7];
    /* 0x212 */ s_xyz joint2[7];
    /* 0x23C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x240 */ short timer;
    /* 0x242 */ short clear_timer;
    /* 0x244 */ short fi_1;
    /* 0x246 */ short fi_2;
    /* 0x248 */ int bgcheck_flag;
    /* 0x24C */ float anime_speed_add;
    /* 0x250 */ xyz_t scale_base;
    /* 0x25C */ float scale_mult;
    /* 0x260 */ float home_scale_mult;
    /* 0x264 */ short turn_speed_1;
    /* 0x266 */ short turn_speed_2;
    /* 0x268 */ s_xyz aim_angle;
    /* 0x26E */ s_xyz angle_speed;
    /* 0x274 */ short beaver_angle_y;
    /* 0x276 */ signed char beaver_timer;
    /* 0x277 */ unsigned char labo_flag;
    /* 0x278 */ signed char size_type;
    /* 0x279 */ signed char water_in_timer;
    /* 0x27A */ unsigned char pad__1[2];
}; /* size = 0x027C */

#endif /* __Z64OVL_Z_EN_FISH__ */
