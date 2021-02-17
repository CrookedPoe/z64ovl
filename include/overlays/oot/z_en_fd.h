#ifndef __Z64OVL_Z_EN_FD__
#define __Z64OVL_Z_EN_FD__

#define Z_EN_FD_ACTOR_NUMBER     0x0099
#define Z_EN_FD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FD_OBJECT_NUMBER    0x009E
#define Z_EN_FD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_fd_s z_en_fd_t;
struct z_en_fd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjJntSph all_jntsph;
    /* 0x1A4 */ ClObjJntSphElem sph_elem[12];
    /* 0x4A4 */ unsigned char set_fw_flag;
    /* 0x4A6 */ short base_angle_y;
    /* 0x4A8 */ short keep_angle_y;
    /* 0x4AA */ short direction;
    /* 0x4AC */ short snd_timer;
    /* 0x4AE */ short timer;
    /* 0x4B0 */ short count;
    /* 0x4B2 */ short dmg_timer;
    /* 0x4B4 */ short hit_timer;
    /* 0x4B8 */ float r;
    /* 0x4BC */ float alpha;
    /* 0x4C0 */ xyz_t fwpos;
    /* 0x4CC */ s_xyz joint[27][2];
    /* 0x610 */ FdEff eff[200];
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe all_pipe;
    /* 0x18C */ float range;
    /* 0x190 */ float scale;
    /* 0x194 */ short count;
    /* 0x196 */ short timer;
    /* 0x198 */ short tex_speed;
}; /* size = 0x31E0 */

#endif /* __Z64OVL_Z_EN_FD__ */
