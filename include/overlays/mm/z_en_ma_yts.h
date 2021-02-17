#ifndef __Z64OVL_Z_EN_MA_YTS__
#define __Z64OVL_Z_EN_MA_YTS__

#define Z_EN_MA_YTS_ACTOR_NUMBER     0x021F
#define Z_EN_MA_YTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA_YTS_OBJECT_NUMBER    0x00B7
#define Z_EN_MA_YTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ma_yts_s z_en_ma_yts_t;
struct z_en_ma_yts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ NpcBasicAct npcbasic;
    /* 0x200 */ int anime_no;
    /* 0x204 */ s_xyz joint1[24];
    /* 0x294 */ s_xyz joint2[24];
    /* 0x324 */ short sound_flag;
    /* 0x326 */ short timer;
    /* 0x328 */ short eye_type;
    /* 0x32A */ short eye_indx;
    /* 0x32C */ short eye_point;
    /* 0x32E */ short mouth_indx;
    /* 0x330 */ short talk_type;
    /* 0x332 */ short talk_flag;
    /* 0x334 */ short demo_step;
    /* 0x336 */ short draw_bow_flag;
    /* 0x338 */ unshort old_message_no;
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_EN_MA_YTS__ */
