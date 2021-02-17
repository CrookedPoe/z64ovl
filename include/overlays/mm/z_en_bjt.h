#ifndef __Z64OVL_Z_EN_BJT__
#define __Z64OVL_Z_EN_BJT__

#define Z_EN_BJT_ACTOR_NUMBER     0x027D
#define Z_EN_BJT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BJT_OBJECT_NUMBER    0x024F
#define Z_EN_BJT_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_bjt_s z_en_bjt_t;
struct z_en_bjt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned char schedule;
    /* 0x1DC */ long msge_ptr;
    /* 0x1E0 */ s_xyz joint[7][2];
    /* 0x234 */ unsigned short statf;
    /* 0x236 */ unsigned short msgno;
    /* 0x238 */ float base_frm;
    /* 0x23C */ float ypos_ofs;
    /* 0x240 */ short demo_cnt;
    /* 0x242 */ short timer;
    /* 0x244 */ short count;
    /* 0x248 */ int sound;
    /* 0x24C */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x250 */ int now_anim;
    /* 0x254 */ int old_anim;
    /* 0x258 */ int put_item;
}; /* size = 0x025C */

#endif /* __Z64OVL_Z_EN_BJT__ */
