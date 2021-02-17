#ifndef __Z64OVL_Z_DEMO_SHD__
#define __Z64OVL_Z_DEMO_SHD__

#define Z_DEMO_SHD_ACTOR_NUMBER     0x0119
#define Z_DEMO_SHD_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_SHD_OBJECT_NUMBER    0x0001
#define Z_DEMO_SHD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_shd_s z_demo_shd_t;
struct z_demo_shd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unshort flag;
    /* 0x13E */ unshort scroll;
    /* 0x140 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_DEMO_SHD__ */
