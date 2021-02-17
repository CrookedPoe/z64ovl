#ifndef __Z64OVL_Z_DEMO_SYOTEN__
#define __Z64OVL_Z_DEMO_SYOTEN__

#define Z_DEMO_SYOTEN_ACTOR_NUMBER     0x0295
#define Z_DEMO_SYOTEN_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_SYOTEN_OBJECT_NUMBER    0x026F
#define Z_DEMO_SYOTEN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_syoten_s z_demo_syoten_t;
struct z_demo_syoten_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ cKF_SkeletonInfo_c kf_si;
    /* 0x174 */ s_xyz joint[51];
    /* 0x2A6 */ s_xyz morph[51];
    /* 0x3D8 */ float alpha;
    /* 0x3DC */ Gfx* model;
    /* 0x3E0 */ void* evw_anime;
    /* 0x3E4 */ unshort flag;
    /* 0x3E6 */ short count;
    /* 0x3E8 */ Path_Info* path_data;
    /* 0x3EC */ int path_now;
    /* 0x3F0 */ unshort part;
    /* 0x3F2 */ unshort dousa;
    /* 0x3F4 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x03F8 */

#endif /* __Z64OVL_Z_DEMO_SYOTEN__ */
