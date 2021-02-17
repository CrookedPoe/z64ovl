#ifndef __Z64OVL_Z_EN_LOOK_NUTS__
#define __Z64OVL_Z_EN_LOOK_NUTS__

#define Z_EN_LOOK_NUTS_ACTOR_NUMBER     0x017A
#define Z_EN_LOOK_NUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_LOOK_NUTS_OBJECT_NUMBER    0x0135
#define Z_EN_LOOK_NUTS_FLAGS            (UNDEFINED)

typedef struct z_en_look_nuts_s z_en_look_nuts_t;
struct z_en_look_nuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[11];
    /* 0x1CA */ s_xyz joint2[11];
    /* 0x20C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x210 */ Path_Info* path;
    /* 0x214 */ short path_count;
    /* 0x216 */ short eye_cont;
    /* 0x218 */ short eye_timer;
    /* 0x21A */ short wait_timer;
    /* 0x21C */ short stat_mode;
    /* 0x21E */ short save_bit;
    /* 0x220 */ short rell_index;
    /* 0x222 */ short find_frag;
    /* 0x224 */ short kyoro_count;
    /* 0x226 */ short out_index;
    /* 0x228 */ short index;
    /* 0x22C */ xyz_t head_angle;
    /* 0x238 */ xyz_t head_angle_max;
    /* 0x244 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0290 */

#endif /* __Z64OVL_Z_EN_LOOK_NUTS__ */
