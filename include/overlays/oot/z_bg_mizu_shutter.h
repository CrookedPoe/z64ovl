#ifndef __Z64OVL_Z_BG_MIZU_SHUTTER__
#define __Z64OVL_Z_BG_MIZU_SHUTTER__

#define Z_BG_MIZU_SHUTTER_ACTOR_NUMBER     0x01BB
#define Z_BG_MIZU_SHUTTER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_MIZU_SHUTTER_OBJECT_NUMBER    0x0059
#define Z_BG_MIZU_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mizu_shutter_s z_bg_mizu_shutter_t;
struct z_bg_mizu_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ int timer0;
    /* 0x15C */ int timer1;
    /* 0x160 */ Gfx* shape_modelP;
    /* 0x164 */ float spd;
    /* 0x168 */ xyz_t def_pos;
    /* 0x174 */ xyz_t tgt_pos;
}; /* size = 0x0190 */

#endif /* __Z64OVL_Z_BG_MIZU_SHUTTER__ */
