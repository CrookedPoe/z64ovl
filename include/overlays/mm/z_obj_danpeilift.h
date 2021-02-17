#ifndef __Z64OVL_Z_OBJ_DANPEILIFT__
#define __Z64OVL_Z_OBJ_DANPEILIFT__

#define Z_OBJ_DANPEILIFT_ACTOR_NUMBER     0x029B
#define Z_OBJ_DANPEILIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_DANPEILIFT_OBJECT_NUMBER    0x0273
#define Z_OBJ_DANPEILIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_danpeilift_s z_obj_danpeilift_t;
struct z_obj_danpeilift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float aim_speed;
    /* 0x164 */ int last_idx;
    /* 0x168 */ int now_idx;
    /* 0x16C */ int dir;
    /* 0x170 */ s_xyz* path_pos_0;
    /* 0x174 */ int ride_now_flag;
    /* 0x178 */ int ride_old_flag;
    /* 0x17C */ float sink_y;
    /* 0x180 */ float vib_amplitude;
    /* 0x184 */ short vib_angle;
    /* 0x186 */ short mode_timer;
    /* 0x188 */ short event_stop_timer;
}; /* size = 0x018C */

#endif /* __Z64OVL_Z_OBJ_DANPEILIFT__ */
