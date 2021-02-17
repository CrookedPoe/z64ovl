#ifndef __Z64OVL_Z_BG_HIDAN_RSEKIZOU__
#define __Z64OVL_Z_BG_HIDAN_RSEKIZOU__

#define Z_BG_HIDAN_RSEKIZOU_ACTOR_NUMBER     0x0044
#define Z_BG_HIDAN_RSEKIZOU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_RSEKIZOU_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_RSEKIZOU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_rsekizou_s z_bg_hidan_rsekizou_t;
struct z_bg_hidan_rsekizou_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short fire_speed;
    /* 0x156 */ short txt_num;
    /* 0x158 */ ClObjJntSph at_jntsph;
    /* 0x178 */ ClObjJntSphElem sph_elem[6];
}; /* size = 0x0308 */

#endif /* __Z64OVL_Z_BG_HIDAN_RSEKIZOU__ */
