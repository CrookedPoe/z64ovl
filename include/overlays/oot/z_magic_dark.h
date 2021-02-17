#ifndef __Z64OVL_Z_MAGIC_DARK__
#define __Z64OVL_Z_MAGIC_DARK__

#define Z_MAGIC_DARK_ACTOR_NUMBER     0x00F4
#define Z_MAGIC_DARK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MAGIC_DARK_OBJECT_NUMBER    0x0001
#define Z_MAGIC_DARK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_magic_dark_s z_magic_dark_t;
struct z_magic_dark_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short timer;
    /* 0x13E */ unchar alpha;
    /* 0x140 */ xyz_t pos;
    /* 0x14C */ float scale;
    /* 0x150 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_MAGIC_DARK__ */
