#ifndef __Z64OVL_Z_EN_DOG__
#define __Z64OVL_Z_EN_DOG__

#define Z_EN_DOG_ACTOR_NUMBER     0x019B
#define Z_EN_DOG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DOG_OBJECT_NUMBER    0x016B
#define Z_EN_DOG_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_dog_s z_en_dog_t;
struct z_en_dog_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ Path_Info* path_data;
    /* 0x1D4 */ unsigned char revers_f;
    /* 0x1D6 */ short path_idx;
    /* 0x1D8 */ short neck_angle_y;
    /* 0x1DA */ short neck_angle_x;
    /* 0x1DC */ short timer;
    /* 0x1DE */ short count;
    /* 0x1E0 */ short new_mode;
    /* 0x1E2 */ short old_mode;
    /* 0x1E4 */ s_xyz joint[13][2];
}; /* size = 0x0290 */

#endif /* __Z64OVL_Z_EN_DOG__ */
