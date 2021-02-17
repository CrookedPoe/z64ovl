#ifndef __Z64OVL_Z_EN_BB__
#define __Z64OVL_Z_EN_BB__

#define Z_EN_BB_ACTOR_NUMBER     0x0069
#define Z_EN_BB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BB_OBJECT_NUMBER    0x005D
#define Z_EN_BB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_BODY_HIT)

typedef struct z_en_bb_s z_en_bb_t;
struct z_en_bb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ int mode;
    /* 0x244 */ int action;
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ int bg_flg;
    /* 0x250 */ int mode_timer;
    /* 0x254 */ int mode_timer2;
    /* 0x258 */ short work0;
    /* 0x25A */ short work1;
    /* 0x25C */ short work2;
    /* 0x25E */ short work3;
    /* 0x260 */ short work4;
    /* 0x264 */ float counter0;
    /* 0x268 */ float counter0_add;
    /* 0x26C */ float move_speed;
    /* 0x270 */ float f_work0;
    /* 0x274 */ float f_work1;
    /* 0x278 */ float f_work2;
    /* 0x27C */ float f_work3;
    /* 0x280 */ xyz_t trg_pos;
    /* 0x28C */ unsigned char base;
    /* 0x28D */ unsigned char idx;
    /* 0x28E */ unsigned char prim_b;
    /* 0x28F */ unsigned char prim_a;
    /* 0x290 */ unsigned char env_r;
    /* 0x291 */ unsigned char env_g;
    /* 0x292 */ unsigned char env_b;
    /* 0x294 */ int blure_effect_index;
    /* 0x298 */ short timer;
    /* 0x29A */ unsigned char reaction_buf;
    /* 0x29C */ ClObjJntSph sph_pos;
    /* 0x2BC */ ClObjJntSphElem sph_elem;
    /* 0x2FC */ Break_work break_work;
    /* 0x314 */ ACTOR* mast;
}; /* size = 0x0328 */

#endif /* __Z64OVL_Z_EN_BB__ */
