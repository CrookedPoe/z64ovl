#ifndef __Z64OVL_Z_BG_IKANA_BLOCK__
#define __Z64OVL_Z_BG_IKANA_BLOCK__

#define Z_BG_IKANA_BLOCK_ACTOR_NUMBER     0x0218
#define Z_BG_IKANA_BLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKANA_BLOCK_OBJECT_NUMBER    0x0003
#define Z_BG_IKANA_BLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ikana_block_s z_bg_ikana_block_t;
struct z_bg_ikana_block_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ EvwAnimeInfo* evw_anime_data;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x164 */ float* slip_pos_ptr;
    /* 0x168 */ float slip_aim_pos;
    /* 0x16C */ float slip_spd;
    /* 0x170 */ float center_y;
    /* 0x174 */ s_xyz old_shape_angle;
    /* 0x17A */ unsigned char power_status;
    /* 0x17B */ signed char power_meter;
    /* 0x17C */ unsigned char action_status;
    /* 0x17D */ signed char mode_timer;
    /* 0x17E */ signed char ev_order_req;
    /* 0x17F */ signed char ev_stop_timer;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_BG_IKANA_BLOCK__ */
