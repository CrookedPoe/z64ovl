#ifndef __Z64OVL_Z_EN_YB__
#define __Z64OVL_Z_EN_YB__

#define Z_EN_YB_ACTOR_NUMBER     0x027A
#define Z_EN_YB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_YB_OBJECT_NUMBER    0x024A
#define Z_EN_YB_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_yb_s z_en_yb_t;
struct z_en_yb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ unchar joint1[280];
    /* 0x2A0 */ unchar joint2[280];
    /* 0x3B8 */ ClObjPipe pipe_info;
    /* 0x404 */ xyz_t kosi;
    /* 0x410 */ unshort flag;
    /* 0x412 */ short anime;
    /* 0x414 */ short alpha;
    /* 0x416 */ short event_list[2];
    /* 0x41A */ short call;
    /* 0x41C */ short timer;
    /* 0x41E */ unsigned char kamen;
    /* 0x420 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0424 */

#endif /* __Z64OVL_Z_EN_YB__ */
