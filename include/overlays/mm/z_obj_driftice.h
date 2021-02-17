#ifndef __Z64OVL_Z_OBJ_DRIFTICE__
#define __Z64OVL_Z_OBJ_DRIFTICE__

#define Z_OBJ_DRIFTICE_ACTOR_NUMBER     0x0179
#define Z_OBJ_DRIFTICE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_DRIFTICE_OBJECT_NUMBER    0x0187
#define Z_OBJ_DRIFTICE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_driftice_s z_obj_driftice_t;
struct z_obj_driftice_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int last_idx;
    /* 0x164 */ int now_idx;
    /* 0x168 */ int dir;
    /* 0x16C */ s_xyz* path_pos_0;
    /* 0x170 */ DrifticeSwing swing;
    /* 0x23C */ float aim_speed;
    /* 0x240 */ float scale_inv;
    /* 0x244 */ short rot_speed;
    /* 0x248 */ int ride_timer;
    /* 0x24C */ int timer;
}; /* size = 0x0250 */

#endif /* __Z64OVL_Z_OBJ_DRIFTICE__ */
