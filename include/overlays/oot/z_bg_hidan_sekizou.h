#ifndef __Z64OVL_Z_BG_HIDAN_SEKIZOU__
#define __Z64OVL_Z_BG_HIDAN_SEKIZOU__

#define Z_BG_HIDAN_SEKIZOU_ACTOR_NUMBER     0x0045
#define Z_BG_HIDAN_SEKIZOU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_SEKIZOU_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_SEKIZOU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_sekizou_s z_bg_hidan_sekizou_t;
struct z_bg_hidan_sekizou_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer[4];
    /* 0x160 */ short fire_speed;
    /* 0x164 */ ClObjJntSph at_jntsph;
    /* 0x184 */ ClObjJntSphElem sph_elem[6];
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_BG_HIDAN_SEKIZOU__ */
