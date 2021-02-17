#ifndef __Z64OVL_Z_TG_SW__
#define __Z64OVL_Z_TG_SW__

#define Z_TG_SW_ACTOR_NUMBER     0x01E7
#define Z_TG_SW_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_TG_SW_OBJECT_NUMBER    0x0001
#define Z_TG_SW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_tg_sw_s z_tg_sw_t;
struct z_tg_sw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_TG_SW__ */
