#ifndef __Z64OVL_Z_EN_MINIDEATH__
#define __Z64OVL_Z_EN_MINIDEATH__

#define Z_EN_MINIDEATH_ACTOR_NUMBER     0x0044
#define Z_EN_MINIDEATH_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_MINIDEATH_OBJECT_NUMBER    0x0052
#define Z_EN_MINIDEATH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_minideath_s z_en_minideath_t;
struct z_en_minideath_s {
    /* 0x0 */ unsigned char anm_frame;
    /* 0x1 */ unsigned char disp_mode;
    /* 0x4 */ xyz_t pos;
    /* 0x10 */ xyz_t offset;
    /* 0x1C */ s_xyz angle;
    /* 0x22 */ short revival_timer;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char num;
    /* 0x149 */ unsigned char guard_flg;
    /* 0x14A */ short timer;
    /* 0x14C */ short base_angle;
    /* 0x14E */ short at_wait_timer;
    /* 0x150 */ s_xyz aim_angle;
    /* 0x158 */ float base_offset_y;
    /* 0x15C */ ACTOR* search_actor;
    /* 0x160 */ En_Minideath_Bat bat[3];
    /* 0x1CC */ ClObjJntSph all_jntsph;
    /* 0x1EC */ ClObjJntSphElem sph_elem[3];
}; /* size = 0x02AC */

#endif /* __Z64OVL_Z_EN_MINIDEATH__ */
