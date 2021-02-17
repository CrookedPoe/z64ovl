#ifndef __Z64OVL_Z_EN_BDFIRE__
#define __Z64OVL_Z_EN_BDFIRE__

#define Z_EN_BDFIRE_ACTOR_NUMBER     0x0000
#define Z_EN_BDFIRE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BDFIRE_OBJECT_NUMBER    0x0019
#define Z_EN_BDFIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_bdfire_s z_en_bdfire_t;
struct z_en_bdfire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ void (*D_process)(/* ECOFF does not store param types */);
    /* 0x144 */ short timer;
    /* 0x146 */ short work[20];
    /* 0x170 */ float fwork[20];
    /* 0x1C0 */ Light_list* light_list;
    /* 0x1C4 */ Light_data light_data;
}; /* size = 0x01E4 */

#endif /* __Z64OVL_Z_EN_BDFIRE__ */
