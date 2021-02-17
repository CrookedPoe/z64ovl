#ifndef __Z64OVL_Z_BG_YDAN_SP__
#define __Z64OVL_Z_BG_YDAN_SP__

#define Z_BG_YDAN_SP_ACTOR_NUMBER     0x000F
#define Z_BG_YDAN_SP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_YDAN_SP_OBJECT_NUMBER    0x0036
#define Z_BG_YDAN_SP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ydan_sp_s z_bg_ydan_sp_t;
struct z_bg_ydan_sp_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x159 */ unsigned char sw_num2;
    /* 0x15A */ short timer;
    /* 0x15C */ float offset_y;
    /* 0x160 */ ClObjTris ac_tris;
    /* 0x180 */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0248 */

#endif /* __Z64OVL_Z_BG_YDAN_SP__ */
