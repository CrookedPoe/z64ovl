#ifndef __Z64OVL_Z_EN_KAREBABA__
#define __Z64OVL_Z_EN_KAREBABA__

#define Z_EN_KAREBABA_ACTOR_NUMBER     0x0066
#define Z_EN_KAREBABA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_KAREBABA_OBJECT_NUMBER    0x0031
#define Z_EN_KAREBABA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_karebaba_s z_en_karebaba_t;
struct z_en_karebaba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ s_xyz joint1[8];
    /* 0x1BC */ s_xyz joint2[8];
    /* 0x1EC */ unsigned char damage_eff_kind;
    /* 0x1EE */ short timer;
    /* 0x1F0 */ float damage_eff_alpha;
    /* 0x1F4 */ float damage_eff_scale;
    /* 0x1F8 */ float damage_eff_scale2;
    /* 0x1FC */ xyz_t shape_pos[4];
    /* 0x22C */ T_Polygon* home_polygon_info;
    /* 0x230 */ ClObjPipe atoc_pipe;
    /* 0x27C */ ClObjPipe ac_pipe;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_KAREBABA__ */
