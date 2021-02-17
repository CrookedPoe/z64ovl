#ifndef __Z64OVL_Z_EN_MA_YTO__
#define __Z64OVL_Z_EN_MA_YTO__

#define Z_EN_MA_YTO_ACTOR_NUMBER     0x0220
#define Z_EN_MA_YTO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA_YTO_OBJECT_NUMBER    0x00A7
#define Z_EN_MA_YTO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ma_yto_s z_en_ma_yto_t;
struct z_en_ma_yto_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe cl_pipe;
    /* 0x1D8 */ NpcBasicAct npcbasic;
    /* 0x200 */ int anime_no;
    /* 0x204 */ int talk_type;
    /* 0x208 */ s_xyz joint1[22];
    /* 0x28C */ s_xyz joint2[22];
    /* 0x310 */ short talk_flag;
    /* 0x312 */ short proc_timer;
    /* 0x314 */ short proc_step;
    /* 0x316 */ short eye_type;
    /* 0x318 */ short mouth_indx;
    /* 0x31A */ short eye_indx;
    /* 0x31C */ short eye_timer;
    /* 0x31E */ short eye_point;
    /* 0x320 */ short down_flag;
    /* 0x322 */ unshort old_message_no;
}; /* size = 0x0324 */

#endif /* __Z64OVL_Z_EN_MA_YTO__ */
