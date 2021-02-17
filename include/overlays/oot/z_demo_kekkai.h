#ifndef __Z64OVL_Z_DEMO_KEKKAI__
#define __Z64OVL_Z_DEMO_KEKKAI__

#define Z_DEMO_KEKKAI_ACTOR_NUMBER     0x01A7
#define Z_DEMO_KEKKAI_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_KEKKAI_OBJECT_NUMBER    0x0179
#define Z_DEMO_KEKKAI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_kekkai_s z_demo_kekkai_t;
struct z_demo_kekkai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ ClObjPipe pipe_info2;
    /* 0x1D4 */ float alpha;
    /* 0x1D8 */ float scale;
    /* 0x1DC */ float frame;
    /* 0x1E0 */ float f_speed;
    /* 0x1E4 */ unshort timer;
    /* 0x1E6 */ unshort flag;
    /* 0x1E8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_DEMO_KEKKAI__ */
