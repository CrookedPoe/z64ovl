#ifndef __Z64OVL_Z_EN_DNP__
#define __Z64OVL_Z_EN_DNP__

#define Z_EN_DNP_ACTOR_NUMBER     0x01FC
#define Z_EN_DNP_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNP_OBJECT_NUMBER    0x01D4
#define Z_EN_DNP_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_dnp_s z_en_dnp_t;
struct z_en_dnp_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ xyz_t atamaOfs;
    /* 0x1E4 */ s_xyz atamaRor;
    /* 0x1EA */ s_xyz joint[26][2];
    /* 0x322 */ unsigned short statf;
    /* 0x324 */ unsigned char olddousa;
    /* 0x328 */ long msge_ptr;
    /* 0x32C */ short timer;
    /* 0x32E */ short count;
    /* 0x330 */ short atama_ang_sx;
    /* 0x332 */ short atama_ang_sy;
    /* 0x334 */ short wink_tmr;
    /* 0x336 */ short wink_cnt;
    /* 0x338 */ short work_tmr;
    /* 0x33C */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x340 */ int now_anim;
}; /* size = 0x0344 */

#endif /* __Z64OVL_Z_EN_DNP__ */
