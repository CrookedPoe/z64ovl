#ifndef __Z64OVL_Z_EN_KUSA2__
#define __Z64OVL_Z_EN_KUSA2__

#define Z_EN_KUSA2_ACTOR_NUMBER     0x0171
#define Z_EN_KUSA2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KUSA2_OBJECT_NUMBER    0x0002
#define Z_EN_KUSA2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_kusa2_s z_en_kusa2_t;
struct z_en_kusa2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ En_Kusa2_actor* unit_ptr[9];
    /* 0x1B8 */ void* force_tbl_p;
    /* 0x1BC */ short item_counter;
    /* 0x1BE */ signed char away_flag;
    /* 0x1BF */ unsigned char pad_0[1];
    /* 0x1C0 */ En_Kusa2_actor* parent_ptr;
    /* 0x1C4 */ short speed_angle;
    /* 0x1C6 */ short aim_angle_y;
    /* 0x1C8 */ short delete_timer;
    /* 0x1CA */ short jump_timer;
    /* 0x1CC */ short angle_y_speed;
    /* 0x1CE */ signed char swing_idx;
    /* 0x1CF */ unsigned char alpha;
    /* 0x1D0 */ signed char se_timer0;
    /* 0x1D1 */ signed char se_timer1;
    /* 0x1D2 */ unsigned char pad_1[2];
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_EN_KUSA2__ */
