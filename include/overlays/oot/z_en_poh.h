#ifndef __Z64OVL_Z_EN_POH__
#define __Z64OVL_Z_EN_POH__

#define Z_EN_POH_ACTOR_NUMBER     0x000D
#define Z_EN_POH_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_POH_OBJECT_NUMBER    0x0001
#define Z_EN_POH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_QUAKE)

typedef struct z_en_poh_s z_en_poh_t;
struct z_en_poh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char inv_timer;
    /* 0x185 */ unsigned char move_timer;
    /* 0x186 */ signed char change_bank_ID;
    /* 0x187 */ unsigned char anm_type;
    /* 0x188 */ short timer;
    /* 0x18A */ short disappear_timer;
    /* 0x18C */ short aim_angle_y;
    /* 0x18E */ s_xyz joint1[21];
    /* 0x20C */ s_xyz joint2[21];
    /* 0x28A */ rgba_t eye_env;
    /* 0x28E */ rgba_t kantera_env;
    /* 0x294 */ Poh_Status* poh_status;
    /* 0x298 */ Light_list* light_list;
    /* 0x29C */ Light_data light_data;
    /* 0x2AC */ ClObjPipe acoc_pipe;
    /* 0x2F8 */ ClObjJntSph at_jntsph;
    /* 0x318 */ ClObjJntSphElem sph_elem;
    /* 0x358 */ MtxF kantera_mtx;
}; /* size = 0x03A8 */

#endif /* __Z64OVL_Z_EN_POH__ */
