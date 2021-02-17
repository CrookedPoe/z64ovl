#ifndef __Z64OVL_Z_EN_FU_MATO__
#define __Z64OVL_Z_EN_FU_MATO__

#define Z_EN_FU_MATO_ACTOR_NUMBER     0x01B3
#define Z_EN_FU_MATO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_FU_MATO_OBJECT_NUMBER    0x01A1
#define Z_EN_FU_MATO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fu_mato_s z_en_fu_mato_t;
struct z_en_fu_mato_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjSph all_sph;
    /* 0x1B8 */ Fu_Mato_Parts parts[6];
    /* 0x2F0 */ int path_no;
    /* 0x2F4 */ int path_max;
    /* 0x2F8 */ s_xyz* path_pos;
    /* 0x2FC */ s_xyz angle_speed;
    /* 0x302 */ short alive_flag;
    /* 0x304 */ short break_timer;
    /* 0x306 */ short stop_timer;
    /* 0x308 */ short break_parts;
    /* 0x30A */ short vanish_flag;
}; /* size = 0x030C */

#endif /* __Z64OVL_Z_EN_FU_MATO__ */
