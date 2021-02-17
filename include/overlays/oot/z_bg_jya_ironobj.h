#ifndef __Z64OVL_Z_BG_JYA_IRONOBJ__
#define __Z64OVL_Z_BG_JYA_IRONOBJ__

#define Z_BG_JYA_IRONOBJ_ACTOR_NUMBER     0x0169
#define Z_BG_JYA_IRONOBJ_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_JYA_IRONOBJ_OBJECT_NUMBER    0x016C
#define Z_BG_JYA_IRONOBJ_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_ironobj_s z_bg_jya_ironobj_t;
struct z_bg_jya_ironobj_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjPipe ac;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_BG_JYA_IRONOBJ__ */
