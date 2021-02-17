#ifndef __Z64OVL_Z_OBJECT_KANKYO__
#define __Z64OVL_Z_OBJECT_KANKYO__

#define Z_OBJECT_KANKYO_ACTOR_NUMBER     0x0051
#define Z_OBJECT_KANKYO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJECT_KANKYO_OBJECT_NUMBER    0x0001
#define Z_OBJECT_KANKYO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_object_kankyo_s z_object_kankyo_t;
struct z_object_kankyo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ float sin_cnt_x;
    /* 0x148 */ float sin_cnt_z;
    /* 0x14C */ TAKUSAN mononoke[128];
    /* 0x114C */ unshort kazu;
    /* 0x114E */ unchar first_rnd_y;
    /* 0x1150 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x1154 */

#endif /* __Z64OVL_Z_OBJECT_KANKYO__ */
