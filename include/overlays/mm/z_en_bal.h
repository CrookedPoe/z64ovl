#ifndef __Z64OVL_Z_EN_BAL__
#define __Z64OVL_Z_EN_BAL__

#define Z_EN_BAL_ACTOR_NUMBER     0x0176
#define Z_EN_BAL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BAL_OBJECT_NUMBER    0x0185
#define Z_EN_BAL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bal_s z_en_bal_t;
struct z_en_bal_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjJntSph bal_jntsph;
    /* 0x1B0 */ ClObjJntSphElem sph_elem;
    /* 0x1F0 */ xyz_t bal_scale;
    /* 0x1FC */ int eye_indx;
    /* 0x200 */ s_xyz joint1[33];
    /* 0x2C6 */ s_xyz joint2[33];
    /* 0x38C */ s_xyz neck_angle;
    /* 0x392 */ s_xyz west_angle;
    /* 0x398 */ short eye_timer;
    /* 0x39A */ short eye_type;
    /* 0x39C */ short pl_search_flag;
    /* 0x39E */ short bal_scale_cycle;
    /* 0x3A0 */ short old_message_no;
    /* 0x3A2 */ short talk_check;
    /* 0x3A4 */ short bal_mode;
    /* 0x3A6 */ short anime_count;
    /* 0x3A8 */ short wait_timer;
    /* 0x3AA */ short proc_step;
    /* 0x3AC */ short sell_map_type;
    /* 0x3AE */ short area_type;
    /* 0x3B0 */ short fly_soon_flag;
    /* 0x3B2 */ unsigned char speaking_flag;
}; /* size = 0x03B4 */

#endif /* __Z64OVL_Z_EN_BAL__ */
