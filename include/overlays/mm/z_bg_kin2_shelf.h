#ifndef __Z64OVL_Z_BG_KIN2_SHELF__
#define __Z64OVL_Z_BG_KIN2_SHELF__

#define Z_BG_KIN2_SHELF_ACTOR_NUMBER     0x0211
#define Z_BG_KIN2_SHELF_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_KIN2_SHELF_OBJECT_NUMBER    0x01F5
#define Z_BG_KIN2_SHELF_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_kin2_shelf_s z_bg_kin2_shelf_t;
struct z_bg_kin2_shelf_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float slip_s;
    /* 0x164 */ unsigned char power_status;
    /* 0x165 */ signed char power_meter;
    /* 0x166 */ signed char now_tx;
    /* 0x167 */ signed char now_tz;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_KIN2_SHELF__ */
