#ifndef __Z64OVL_Z_EN_DNK__
#define __Z64OVL_Z_EN_DNK__

#define Z_EN_DNK_ACTOR_NUMBER     0x0169
#define Z_EN_DNK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNK_OBJECT_NUMBER    0x0001
#define Z_EN_DNK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_dnk_s z_en_dnk_t;
struct z_en_dnk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipe_inf;
    /* 0x1DC */ s_xyz jnt[11][2];
    /* 0x260 */ Gfx* s[11];
    /* 0x28C */ unsigned short statf;
    /* 0x28E */ signed char bnkID;
    /* 0x290 */ s_xyz atama_ro_ang;
    /* 0x296 */ short atama_ang_sx;
    /* 0x298 */ short atama_ang_sy;
    /* 0x29A */ short count;
    /* 0x29C */ short timer;
    /* 0x29E */ short eye_timer;
    /* 0x2A0 */ short eye_count;
    /* 0x2A2 */ short my_no;
}; /* size = 0x02A4 */

#endif /* __Z64OVL_Z_EN_DNK__ */
