#ifndef __Z64OVL_Z_BG_KIN2_PICTURE__
#define __Z64OVL_Z_BG_KIN2_PICTURE__

#define Z_BG_KIN2_PICTURE_ACTOR_NUMBER     0x0210
#define Z_BG_KIN2_PICTURE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_KIN2_PICTURE_OBJECT_NUMBER    0x01F5
#define Z_BG_KIN2_PICTURE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_kin2_picture_s z_bg_kin2_picture_t;
struct z_bg_kin2_picture_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjTris tris;
    /* 0x17C */ ClObjTrisElem tris_elem[2];
    /* 0x234 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x238 */ short angle_speed_x;
    /* 0x23A */ signed char mode_timer;
    /* 0x23B */ signed char bound_counter;
    /* 0x23C */ short shake_h;
    /* 0x23E */ short shake_v;
    /* 0x240 */ signed char event_stop_flag;
    /* 0x241 */ signed char dust_effect_flag;
    /* 0x242 */ signed char gold_se_timer;
    /* 0x243 */ unsigned char pad_0[1];
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_BG_KIN2_PICTURE__ */
