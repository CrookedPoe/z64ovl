#ifndef __Z64OVL_Z_BG_BDAN_SWITCH__
#define __Z64OVL_Z_BG_BDAN_SWITCH__

#define Z_BG_BDAN_SWITCH_ACTOR_NUMBER     0x00E6
#define Z_BG_BDAN_SWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_BG_BDAN_SWITCH_OBJECT_NUMBER    0x0096
#define Z_BG_BDAN_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_bdan_switch_s z_bg_bdan_switch_t;
struct z_bg_bdan_switch_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjJntSph sph;
    /* 0x178 */ ClObjJntSphElem elem;
    /* 0x1B8 */ float func_scaleY;
    /* 0x1BC */ short scale_count;
    /* 0x1C0 */ float disp_scaleY;
    /* 0x1C4 */ float disp_scaleXZ;
    /* 0x1C8 */ short no_react_timer;
    /* 0x1CA */ short attention_timer;
    /* 0x1CC */ unsigned char old_ac_bit;
}; /* size = 0x01E0 */

#endif /* __Z64OVL_Z_BG_BDAN_SWITCH__ */
