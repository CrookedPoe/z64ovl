#ifndef __Z64OVL_Z_OBJ_OCARINALIFT__
#define __Z64OVL_Z_OBJ_OCARINALIFT__

#define Z_OBJ_OCARINALIFT_ACTOR_NUMBER     0x01AA
#define Z_OBJ_OCARINALIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_OCARINALIFT_OBJECT_NUMBER    0x0163
#define Z_OBJ_OCARINALIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_ocarinalift_s z_obj_ocarinalift_t;
struct z_obj_ocarinalift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float aim_speed;
    /* 0x164 */ int last_idx;
    /* 0x168 */ int now_idx;
    /* 0x16C */ int dir;
    /* 0x170 */ s_xyz* path_pos_0;
    /* 0x174 */ short mode_timer;
    /* 0x176 */ short event_stop_timer;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_OBJ_OCARINALIFT__ */
