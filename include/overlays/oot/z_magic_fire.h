#ifndef __Z64OVL_Z_MAGIC_FIRE__
#define __Z64OVL_Z_MAGIC_FIRE__

#define Z_MAGIC_FIRE_ACTOR_NUMBER     0x009F
#define Z_MAGIC_FIRE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MAGIC_FIRE_OBJECT_NUMBER    0x0001
#define Z_MAGIC_FIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_magic_fire_s z_magic_fire_t;
struct z_magic_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe at_info;
    /* 0x188 */ float alpha;
    /* 0x18C */ float f_alpha;
    /* 0x190 */ float scaleplus;
    /* 0x194 */ short mode;
    /* 0x196 */ short f_mode;
    /* 0x198 */ short maho_timer;
    /* 0x19A */ short f_maho_timer;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_MAGIC_FIRE__ */
