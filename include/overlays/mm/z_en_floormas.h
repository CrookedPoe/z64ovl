#ifndef __Z64OVL_Z_EN_FLOORMAS__
#define __Z64OVL_Z_EN_FLOORMAS__

#define Z_EN_FLOORMAS_ACTOR_NUMBER     0x004A
#define Z_EN_FLOORMAS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FLOORMAS_OBJECT_NUMBER    0x0009
#define Z_EN_FLOORMAS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_floormas_s z_en_floormas_t;
struct z_en_floormas_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short work;
    /* 0x192 */ short shape_offset_z;
    /* 0x194 */ short wait_timer;
    /* 0x196 */ s_xyz joint1[25];
    /* 0x22C */ s_xyz joint2[25];
    /* 0x2C4 */ float damage_eff_alpha;
    /* 0x2C8 */ float damage_eff_scale;
    /* 0x2CC */ float damage_eff_scale2;
    /* 0x2D0 */ xyz_t shape_pos[11];
    /* 0x354 */ ClObjPipe all_pipe;
}; /* size = 0x03A0 */

#endif /* __Z64OVL_Z_EN_FLOORMAS__ */
