#ifndef __Z64OVL_Z_EN_BOMBF__
#define __Z64OVL_Z_EN_BOMBF__

#define Z_EN_BOMBF_ACTOR_NUMBER     0x002F
#define Z_EN_BOMBF_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BOMBF_OBJECT_NUMBER    0x002A
#define Z_EN_BOMBF_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bombf_s z_en_bombf_t;
struct z_en_bombf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe acoc_info;
    /* 0x190 */ ClObjJntSph bomb_sph;
    /* 0x1B0 */ ClObjJntSphElem bomb_elem;
    /* 0x1F0 */ short mode_timer;
    /* 0x1F4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F8 */ int action;
    /* 0x1FC */ unsigned char oc_flg;
    /* 0x1FE */ short turn_speed;
    /* 0x200 */ float ud_data;
    /* 0x204 */ float counter0;
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_EN_BOMBF__ */
