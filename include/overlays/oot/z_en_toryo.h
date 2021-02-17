#ifndef __Z64OVL_Z_EN_TORYO__
#define __Z64OVL_Z_EN_TORYO__

#define Z_EN_TORYO_ACTOR_NUMBER     0x0132
#define Z_EN_TORYO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TORYO_OBJECT_NUMBER    0x0121
#define Z_EN_TORYO_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_toryo_s z_en_toryo_t;
struct z_en_toryo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int get_item;
    /* 0x1D4 */ int talk_stat;
    /* 0x1D8 */ unsigned short stat;
    /* 0x1DC */ NpcBasicAct npcbasicact;
    /* 0x204 */ s_xyz joint1[17];
    /* 0x26A */ s_xyz joint2[17];
}; /* size = 0x02E0 */

#endif /* __Z64OVL_Z_EN_TORYO__ */
