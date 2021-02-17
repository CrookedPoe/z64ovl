#ifndef __Z64OVL_Z_OBJ_BOYO__
#define __Z64OVL_Z_OBJ_BOYO__

#define Z_OBJ_BOYO_ACTOR_NUMBER     0x0106
#define Z_OBJ_BOYO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BOYO_OBJECT_NUMBER    0x014F
#define Z_OBJ_BOYO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_boyo_s z_obj_boyo_t;
struct z_obj_boyo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ EvwAnimeInfo* evw_anime_data;
    /* 0x194 */ short vib_power;
    /* 0x196 */ short vib_power_sub;
    /* 0x198 */ float vib_power_init_inv_f;
    /* 0x19C */ float vib_h_amplitude;
    /* 0x1A0 */ float vib_v_amplitude;
    /* 0x1A4 */ short vib_h_angle_shift;
    /* 0x1A6 */ short vib_v_angle_shift;
    /* 0x1A8 */ short vib_angle;
    /* 0x1AA */ short vib_angle_speed;
    /* 0x1AC */ short vib_angle_accel;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_OBJ_BOYO__ */
