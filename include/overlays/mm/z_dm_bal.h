#ifndef __Z64OVL_Z_DM_BAL__
#define __Z64OVL_Z_DM_BAL__

#define Z_DM_BAL_ACTOR_NUMBER     0x02A3
#define Z_DM_BAL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DM_BAL_OBJECT_NUMBER    0x0185
#define Z_DM_BAL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_dm_bal_s z_dm_bal_t;
struct z_dm_bal_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ xyz_t bal_scale;
    /* 0x198 */ int eye_indx;
    /* 0x19C */ s_xyz joint1[33];
    /* 0x262 */ s_xyz joint2[33];
    /* 0x328 */ s_xyz neck_angle;
    /* 0x32E */ s_xyz body_angle;
    /* 0x334 */ short eye_timer;
    /* 0x336 */ short eye_type;
    /* 0x338 */ short bal_scale_cycle;
    /* 0x33A */ short bal_timer;
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_DM_BAL__ */
