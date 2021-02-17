#ifndef __Z64OVL_Z_OBJ_TOKEI_TOBIRA__
#define __Z64OVL_Z_OBJ_TOKEI_TOBIRA__

#define Z_OBJ_TOKEI_TOBIRA_ACTOR_NUMBER     0x01A2
#define Z_OBJ_TOKEI_TOBIRA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_TOKEI_TOBIRA_OBJECT_NUMBER    0x0197
#define Z_OBJ_TOKEI_TOBIRA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_tokei_tobira_s z_obj_tokei_tobira_t;
struct z_obj_tokei_tobira_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*event_proc)(/* ECOFF does not store param types */);
    /* 0x160 */ float angle_speed_y;
    /* 0x164 */ float angle_y;
    /* 0x168 */ int touch_flag;
    /* 0x16C */ int se_timer;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_OBJ_TOKEI_TOBIRA__ */
