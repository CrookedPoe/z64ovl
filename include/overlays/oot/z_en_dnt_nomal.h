#ifndef __Z64OVL_Z_EN_DNT_NOMAL__
#define __Z64OVL_Z_EN_DNT_NOMAL__

#define Z_EN_DNT_NOMAL_ACTOR_NUMBER     0x01A3
#define Z_EN_DNT_NOMAL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_DNT_NOMAL_OBJECT_NUMBER    0x0001
#define Z_EN_DNT_NOMAL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_dnt_nomal_s z_en_dnt_nomal_t;
struct z_en_dnt_nomal_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[11];
    /* 0x1C2 */ s_xyz joint2[11];
    /* 0x204 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x208 */ u8 no_HIT;
    /* 0x20C */ xyz_t pos;
    /* 0x218 */ xyz_t trans_leftup;
    /* 0x224 */ xyz_t trans_leftdn;
    /* 0x230 */ xyz_t trans_rightdn;
    /* 0x23C */ xyz_t trans_rightup;
    /* 0x248 */ short demo_timer;
    /* 0x24A */ short wait_timer;
    /* 0x24C */ short timer;
    /* 0x24E */ short sound_timer;
    /* 0x250 */ short eye_timer;
    /* 0x252 */ short parts_time;
    /* 0x254 */ short random_timer;
    /* 0x256 */ short bank;
    /* 0x258 */ short eye_cont;
    /* 0x25A */ short index;
    /* 0x25C */ short HIT_cont;
    /* 0x25E */ short ende_frame;
    /* 0x260 */ short mode;
    /* 0x262 */ short kyorokyoro;
    /* 0x264 */ short mode_action;
    /* 0x266 */ u8 sound_frag;
    /* 0x267 */ u8 shoot_Go;
    /* 0x268 */ u8 jiji_srch_frag;
    /* 0x269 */ signed char change_bank_ID;
    /* 0x26C */ xyz_t shape_pos;
    /* 0x278 */ xyz_t srch_pos;
    /* 0x284 */ ClObjSwrd at_swrd_info;
    /* 0x304 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0360 */

#endif /* __Z64OVL_Z_EN_DNT_NOMAL__ */
