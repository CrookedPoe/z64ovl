#ifndef __Z64OVL_Z_BG_YDAN_MARUTA__
#define __Z64OVL_Z_BG_YDAN_MARUTA__

#define Z_BG_YDAN_MARUTA_ACTOR_NUMBER     0x0051
#define Z_BG_YDAN_MARUTA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_YDAN_MARUTA_OBJECT_NUMBER    0x0036
#define Z_BG_YDAN_MARUTA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ydan_maruta_s z_bg_ydan_maruta_t;
struct z_bg_ydan_maruta_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15A */ short timer;
    /* 0x15C */ ClObjTris atac_tris;
    /* 0x17C */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_BG_YDAN_MARUTA__ */
