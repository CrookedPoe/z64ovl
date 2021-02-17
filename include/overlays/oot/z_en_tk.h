#ifndef __Z64OVL_Z_EN_TK__
#define __Z64OVL_Z_EN_TK__

#define Z_EN_TK_ACTOR_NUMBER     0x0085
#define Z_EN_TK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TK_OBJECT_NUMBER    0x0089
#define Z_EN_TK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_tk_s z_en_tk_t;
struct z_en_tk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char dig;
    /* 0x1F9 */ unsigned char itm_01;
    /* 0x1FA */ unsigned char itm_05;
    /* 0x1FB */ unsigned char itm_20;
    /* 0x1FC */ unsigned char itm_50;
    /* 0x200 */ ACTOR* tag_actor;
    /* 0x204 */ int item_no;
    /* 0x208 */ short count;
    /* 0x20A */ short sndtimer;
    /* 0x20C */ short timer;
    /* 0x20E */ short default_neck_angle_y;
    /* 0x210 */ short search_angle_count;
    /* 0x212 */ short eye_count;
    /* 0x214 */ short eye_timer;
    /* 0x216 */ short neck_angle_y;
    /* 0x218 */ short path_indx;
    /* 0x21A */ s_xyz joint[18][2];
    /* 0x2F4 */ xyz_t eff_pos;
    /* 0x300 */ TkEff eff[20];
}; /* size = 0x0770 */

#endif /* __Z64OVL_Z_EN_TK__ */
