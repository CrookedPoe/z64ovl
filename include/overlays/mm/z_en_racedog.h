#ifndef __Z64OVL_Z_EN_RACEDOG__
#define __Z64OVL_Z_EN_RACEDOG__

#define Z_EN_RACEDOG_ACTOR_NUMBER     0x01EE
#define Z_EN_RACEDOG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RACEDOG_OBJECT_NUMBER    0x0132
#define Z_EN_RACEDOG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_racedog_s z_en_racedog_t;
struct z_en_racedog_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x14C */ SKELETON_INFO skeleton;
    /* 0x190 */ ClObjPipe all_pipe;
    /* 0x1DC */ Path_Info* path;
    /* 0x1E0 */ Path_Info* course;
    /* 0x1E4 */ int path_count;
    /* 0x1E8 */ int course_count;
    /* 0x1EC */ s_xyz jnt[13][2];
    /* 0x288 */ short timer;
    /* 0x28A */ short speed_timer;
    /* 0x28C */ short delay_timer;
    /* 0x28E */ short race_flag;
    /* 0x290 */ short dog_no;
    /* 0x292 */ short my_dog;
    /* 0x294 */ short top_dg;
    /* 0x298 */ float speed_up;
    /* 0x29C */ short through;
    /* 0x2A0 */ xyz_t ground;
    /* 0x2AC */ xyz_t ground_angle;
    /* 0x2B8 */ int dog_path;
    /* 0x2BC */ Yajirushi_Info y_info;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_RACEDOG__ */
