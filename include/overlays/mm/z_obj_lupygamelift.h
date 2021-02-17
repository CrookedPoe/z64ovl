#ifndef __Z64OVL_Z_OBJ_LUPYGAMELIFT__
#define __Z64OVL_Z_OBJ_LUPYGAMELIFT__

#define Z_OBJ_LUPYGAMELIFT_ACTOR_NUMBER     0x01CD
#define Z_OBJ_LUPYGAMELIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_LUPYGAMELIFT_OBJECT_NUMBER    0x0163
#define Z_OBJ_LUPYGAMELIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_lupygamelift_s z_obj_lupygamelift_t;
struct z_obj_lupygamelift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float aim_speed;
    /* 0x164 */ int path_max;
    /* 0x168 */ int path_no;
    /* 0x16C */ s_xyz* path_pos;
    /* 0x170 */ short mode_timer;
    /* 0x172 */ short event_stop_timer;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_OBJ_LUPYGAMELIFT__ */
