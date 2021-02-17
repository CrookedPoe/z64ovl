#ifndef __Z64OVL_Z_EN_GUARD_NUTS__
#define __Z64OVL_Z_EN_GUARD_NUTS__

#define Z_EN_GUARD_NUTS_ACTOR_NUMBER     0x01A0
#define Z_EN_GUARD_NUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GUARD_NUTS_OBJECT_NUMBER    0x0135
#define Z_EN_GUARD_NUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_guard_nuts_s z_en_guard_nuts_t;
struct z_en_guard_nuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[11];
    /* 0x1CA */ s_xyz joint2[11];
    /* 0x20C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x210 */ short eye_cont;
    /* 0x212 */ short eye_timer;
    /* 0x214 */ short mes_wait_timer;
    /* 0x218 */ int c_change_flag;
    /* 0x21C */ short stat_mode;
    /* 0x21E */ short index;
    /* 0x220 */ int talk_count;
    /* 0x224 */ u8 angle_flag;
    /* 0x228 */ xyz_t plant_pos;
    /* 0x234 */ s_xyz head_angle;
    /* 0x23A */ s_xyz head_angle_max;
    /* 0x240 */ float end_frame;
    /* 0x244 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0290 */

#endif /* __Z64OVL_Z_EN_GUARD_NUTS__ */
