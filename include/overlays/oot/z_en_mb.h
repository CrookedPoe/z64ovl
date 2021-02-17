#ifndef __Z64OVL_Z_EN_MB__
#define __Z64OVL_Z_EN_MB__

#define Z_EN_MB_ACTOR_NUMBER     0x004B
#define Z_EN_MB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_MB_OBJECT_NUMBER    0x0030
#define Z_EN_MB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mb_s z_en_mb_t;
struct z_en_mb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ En_mag_s en_mag;
    /* 0x178 */ unsigned char reaction_buf;
    /* 0x17C */ SKELETON_INFO skeleton;
    /* 0x1C0 */ s_xyz joint1[28];
    /* 0x268 */ s_xyz joint2[28];
    /* 0x310 */ int mode;
    /* 0x314 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x318 */ short timer0;
    /* 0x31A */ short timer;
    /* 0x31C */ short timer2;
    /* 0x31E */ short timer3;
    /* 0x320 */ short aim_angle_y;
    /* 0x322 */ short arm_s_flg;
    /* 0x324 */ short attack_flg;
    /* 0x328 */ xyz_t arm_pos;
    /* 0x334 */ xyz_t trg_pos;
    /* 0x340 */ xyz_t foot_pos;
    /* 0x34C */ s8 trg_idx;
    /* 0x34D */ s8 trg_base;
    /* 0x34E */ s8 trg_dir;
    /* 0x350 */ float move_area;
    /* 0x354 */ float search_area;
    /* 0x358 */ ClObjPipe body_pipe;
    /* 0x3A4 */ ClObjSwrd sword_pos;
    /* 0x424 */ ClObjTris shield_pos;
    /* 0x444 */ ClObjTrisElem shield_elem[2];
}; /* size = 0x050C */

#endif /* __Z64OVL_Z_EN_MB__ */
