#ifndef __Z64OVL_Z_EN_DG__
#define __Z64OVL_Z_EN_DG__

#define Z_EN_DG_ACTOR_NUMBER     0x00E2
#define Z_EN_DG_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DG_OBJECT_NUMBER    0x0132
#define Z_EN_DG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_dg_s z_en_dg_t;
struct z_en_dg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x14C */ SKELETON_INFO skeleton;
    /* 0x190 */ ClObjPipe all_pipe;
    /* 0x1DC */ Path_Info* path;
    /* 0x1E0 */ int path_count;
    /* 0x1E4 */ s_xyz jnt[13][2];
    /* 0x280 */ unsigned short statf;
    /* 0x282 */ short timer;
    /* 0x284 */ short swim_timer;
    /* 0x286 */ short dog_no;
    /* 0x288 */ short my_dog;
    /* 0x28A */ short choose_timer;
    /* 0x28C */ short mask;
    /* 0x28E */ short jmp_timer;
    /* 0x290 */ short stat;
    /* 0x292 */ short bark_timer;
    /* 0x294 */ xyz_t ground_angle;
}; /* size = 0x02A0 */

#endif /* __Z64OVL_Z_EN_DG__ */
