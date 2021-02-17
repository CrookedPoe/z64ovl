#ifndef __Z64OVL_Z_EN_MARUTA__
#define __Z64OVL_Z_EN_MARUTA__

#define Z_EN_MARUTA_ACTOR_NUMBER     0x01F8
#define Z_EN_MARUTA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_MARUTA_OBJECT_NUMBER    0x01D1
#define Z_EN_MARUTA_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_maruta_s z_en_maruta_t;
struct z_en_maruta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ xyz_t unit_axis;
    /* 0x1A0 */ xyz_t* bgcheck_base_pos;
    /* 0x1A4 */ xyz_t bgcheck_pos[8];
    /* 0x204 */ xyz_t rot_center;
    /* 0x210 */ int draw_type;
    /* 0x214 */ int bg_check_buff;
    /* 0x218 */ short rot_angle;
    /* 0x21A */ short rot_speed;
    /* 0x21C */ short ground_hit_count;
    /* 0x21E */ short proc_timer;
    /* 0x220 */ short return_flag;
}; /* size = 0x0224 */

#endif /* __Z64OVL_Z_EN_MARUTA__ */
