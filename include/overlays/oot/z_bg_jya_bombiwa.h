#ifndef __Z64OVL_Z_BG_JYA_BOMBIWA__
#define __Z64OVL_Z_BG_JYA_BOMBIWA__

#define Z_BG_JYA_BOMBIWA_ACTOR_NUMBER     0x015B
#define Z_BG_JYA_BOMBIWA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_BOMBIWA_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_BOMBIWA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_bombiwa_s z_bg_jya_bombiwa_t;
struct z_bg_jya_bombiwa_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjJntSph sph;
    /* 0x178 */ ClObjJntSphElem elem;
}; /* size = 0x01C8 */

#endif /* __Z64OVL_Z_BG_JYA_BOMBIWA__ */
