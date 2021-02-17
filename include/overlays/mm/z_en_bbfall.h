#ifndef __Z64OVL_Z_EN_BBFALL__
#define __Z64OVL_Z_EN_BBFALL__

#define Z_EN_BBFALL_ACTOR_NUMBER     0x003C
#define Z_EN_BBFALL_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BBFALL_OBJECT_NUMBER    0x0051
#define Z_EN_BBFALL_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_bbfall_s z_en_bbfall_t;
struct z_en_bbfall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ unsigned char fire_alpha;
    /* 0x24D */ unsigned char bg_flg;
    /* 0x24E */ signed char break_flg;
    /* 0x24F */ unsigned char damage_eff_kind;
    /* 0x250 */ short timer;
    /* 0x254 */ float fire_scale_y;
    /* 0x258 */ float fire_scale_x;
    /* 0x25C */ float damage_eff_alpha;
    /* 0x260 */ float damage_eff_scale;
    /* 0x264 */ float damage_eff_scale2;
    /* 0x268 */ xyz_t fire_pos[6];
    /* 0x2B0 */ xyz_t shape_pos[5];
    /* 0x2EC */ xyz_t shape_vec[5];
    /* 0x328 */ Gfx* shape;
    /* 0x32C */ ClObjSph all_sph;
    /* 0x384 */ ClObjJntSph all_jntsph;
    /* 0x3A4 */ ClObjJntSphElem sph_elem[3];
}; /* size = 0x0464 */

#endif /* __Z64OVL_Z_EN_BBFALL__ */
