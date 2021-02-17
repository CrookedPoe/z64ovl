#ifndef __Z64OVL_Z_EN_MA4__
#define __Z64OVL_Z_EN_MA4__

#define Z_EN_MA4_ACTOR_NUMBER     0x01A4
#define Z_EN_MA4_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA4_OBJECT_NUMBER    0x00B7
#define Z_EN_MA4_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ma4_s z_en_ma4_t;
struct z_en_ma4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ NpcBasicAct npcbasic;
    /* 0x200 */ s_xyz* path_ptr;
    /* 0x204 */ s_xyz joint1[24];
    /* 0x294 */ s_xyz joint2[24];
    /* 0x324 */ short path_no;
    /* 0x326 */ short path_max;
    /* 0x328 */ short sound_flag;
    /* 0x32A */ short timer;
    /* 0x32C */ short eye_type;
    /* 0x32E */ short eye_indx;
    /* 0x330 */ short mouth_indx;
    /* 0x332 */ short talk_type;
    /* 0x334 */ short talk_flag;
    /* 0x336 */ short game_flag;
    /* 0x338 */ short fusen_hit_count;
    /* 0x33A */ short draw_bow_flag;
    /* 0x33C */ short demo_step;
    /* 0x33E */ unshort old_message_no;
}; /* size = 0x0340 */

#endif /* __Z64OVL_Z_EN_MA4__ */
