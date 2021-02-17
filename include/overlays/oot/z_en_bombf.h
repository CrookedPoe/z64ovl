#ifndef __Z64OVL_Z_EN_BOMBF__
#define __Z64OVL_Z_EN_BOMBF__

#define Z_EN_BOMBF_ACTOR_NUMBER     0x004C
#define Z_EN_BOMBF_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BOMBF_OBJECT_NUMBER    0x0031
#define Z_EN_BOMBF_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bombf_s z_en_bombf_t;
struct z_en_bombf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe acoc_info;
    /* 0x188 */ ClObjJntSph bomb_sph;
    /* 0x1A8 */ ClObjJntSphElem bomb_elem;
    /* 0x1E8 */ short mode_timer;
    /* 0x1EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F0 */ int action;
    /* 0x1F4 */ unsigned char oc_flg;
    /* 0x1F6 */ short turn_speed;
    /* 0x1F8 */ float ud_data;
    /* 0x1FC */ float counter0;
}; /* size = 0x0210 */

#endif /* __Z64OVL_Z_EN_BOMBF__ */
