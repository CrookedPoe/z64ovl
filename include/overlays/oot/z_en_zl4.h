#ifndef __Z64OVL_Z_EN_ZL4__
#define __Z64OVL_Z_EN_ZL4__

#define Z_EN_ZL4_ACTOR_NUMBER     0x01D3
#define Z_EN_ZL4_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZL4_OBJECT_NUMBER    0x0191
#define Z_EN_ZL4_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zl4_s z_en_zl4_t;
struct z_en_zl4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char subcount;
    /* 0x1F9 */ unsigned char scene_no;
    /* 0x1FA */ unsigned char eye_l;
    /* 0x1FB */ unsigned char eye_r;
    /* 0x1FC */ unsigned char mouth;
    /* 0x1FD */ unsigned char eye_mode;
    /* 0x1FE */ unsigned char mou_mode;
    /* 0x1FF */ unsigned char old_mchk;
    /* 0x200 */ short eyetimer;
    /* 0x202 */ short timer;
    /* 0x204 */ short camcount;
    /* 0x206 */ short count;
    /* 0x208 */ s_xyz joint[18][2];
}; /* size = 0x02F0 */

#endif /* __Z64OVL_Z_EN_ZL4__ */
