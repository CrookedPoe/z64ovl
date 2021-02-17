#ifndef __Z64OVL_Z_MAGIC_WIND__
#define __Z64OVL_Z_MAGIC_WIND__

#define Z_MAGIC_WIND_ACTOR_NUMBER     0x009E
#define Z_MAGIC_WIND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MAGIC_WIND_OBJECT_NUMBER    0x0001
#define Z_MAGIC_WIND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_magic_wind_s z_magic_wind_t;
struct z_magic_wind_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ FcSkeletonInfo fc_skel;
    /* 0x15C */ short timer;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_MAGIC_WIND__ */
