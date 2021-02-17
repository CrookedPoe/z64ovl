#ifndef __Z64OVL_Z_EN_DH__
#define __Z64OVL_Z_EN_DH__

#define Z_EN_DH_ACTOR_NUMBER     0x00A4
#define Z_EN_DH_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DH_OBJECT_NUMBER    0x00A6
#define Z_EN_DH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_dh_s z_en_dh_t;
struct z_en_dh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ u8 work0;
    /* 0x241 */ unsigned char d_type;
    /* 0x242 */ unsigned char d_flg;
    /* 0x244 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x248 */ unsigned char combo_cnt_old;
    /* 0x249 */ unsigned char combo_cnt_trg;
    /* 0x24A */ u8 alpha_cnt;
    /* 0x24B */ u8 mode;
    /* 0x24C */ short mode_timer;
    /* 0x24E */ short timer0;
    /* 0x250 */ ClObjPipe body_pipe;
    /* 0x29C */ ClObjJntSph sph_pos;
    /* 0x2BC */ ClObjJntSphElem sph_elem;
    /* 0x2FC */ xyz_t head_pos;
    /* 0x308 */ float dsc_xz;
    /* 0x30C */ float dsc_y;
    /* 0x310 */ float d_a;
}; /* size = 0x0324 */

#endif /* __Z64OVL_Z_EN_DH__ */
