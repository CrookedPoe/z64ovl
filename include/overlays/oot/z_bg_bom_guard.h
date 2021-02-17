#ifndef __Z64OVL_Z_BG_BOM_GUARD__
#define __Z64OVL_Z_BG_BOM_GUARD__

#define Z_BG_BOM_GUARD_ACTOR_NUMBER     0x01A5
#define Z_BG_BOM_GUARD_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_BOM_GUARD_OBJECT_NUMBER    0x0178
#define Z_BG_BOM_GUARD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_bom_guard_s z_bg_bom_guard_t;
struct z_bg_bom_guard_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ u8 move_OK;
    /* 0x15C */ xyz_t pos;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_BOM_GUARD__ */
