#ifndef __Z64OVL_Z_EN_POH__
#define __Z64OVL_Z_EN_POH__

#define Z_EN_POH_ACTOR_NUMBER     0x01F3
#define Z_EN_POH_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_POH_OBJECT_NUMBER    0x01C3
#define Z_EN_POH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB | ACTORFLAG_NO_QUAKE)

typedef struct z_en_poh_s z_en_poh_t;
struct z_en_poh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char inv_timer;
    /* 0x18D */ unsigned char move_timer;
    /* 0x18E */ short timer;
    /* 0x190 */ short disappear_timer;
    /* 0x192 */ short aim_angle_y;
    /* 0x194 */ rgba_t eye_env;
    /* 0x198 */ rgba_t kantera_env;
    /* 0x19C */ s_xyz joint1[21];
    /* 0x21A */ s_xyz joint2[21];
    /* 0x298 */ float damage_eff_alpha;
    /* 0x29C */ float damage_eff_scale;
    /* 0x2A0 */ xyz_t shape_pos[10];
    /* 0x318 */ Light_list* light_list;
    /* 0x31C */ Light_data light_data;
    /* 0x32C */ ClObjPipe acoc_pipe;
    /* 0x378 */ ClObjJntSph at_jntsph;
    /* 0x398 */ ClObjJntSphElem sph_elem;
    /* 0x3D8 */ MtxF kantera_mtx;
}; /* size = 0x0418 */

#endif /* __Z64OVL_Z_EN_POH__ */
