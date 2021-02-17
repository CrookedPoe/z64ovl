#ifndef __Z64OVL_Z_EN_MINISLIME__
#define __Z64OVL_Z_EN_MINISLIME__

#define Z_EN_MINISLIME_ACTOR_NUMBER     0x00D9
#define Z_EN_MINISLIME_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_MINISLIME_OBJECT_NUMBER    0x0128
#define Z_EN_MINISLIME_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_minislime_s z_en_minislime_t;
struct z_en_minislime_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char alpha;
    /* 0x149 */ unsigned char num;
    /* 0x14A */ short timer;
    /* 0x14C */ short at_wait_time;
    /* 0x150 */ float ice_scale_y;
    /* 0x154 */ xyz_t tmp_pos;
    /* 0x160 */ ClObjPipe all_pipe;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_EN_MINISLIME__ */
