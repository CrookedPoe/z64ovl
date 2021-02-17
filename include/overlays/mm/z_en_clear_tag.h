#ifndef __Z64OVL_Z_EN_CLEAR_TAG__
#define __Z64OVL_Z_EN_CLEAR_TAG__

#define Z_EN_CLEAR_TAG_ACTOR_NUMBER     0x00A2
#define Z_EN_CLEAR_TAG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_CLEAR_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_CLEAR_TAG_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_clear_tag_s z_en_clear_tag_t;
struct z_en_clear_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ Aw_Eff aw_eff[103];
    /* 0x2E54 */ u8 move_mode;
    /* 0x2E56 */ short delete_timer;
    /* 0x2E58 */ xyz_t ground_angle;
    /* 0x2E64 */ short camera_no;
    /* 0x2E66 */ u8 R;
    /* 0x2E67 */ u8 G;
    /* 0x2E68 */ u8 B;
    /* 0x2E6C */ xyz_t eye;
    /* 0x2E78 */ xyz_t way;
}; /* size = 0x2E84 */

#endif /* __Z64OVL_Z_EN_CLEAR_TAG__ */
