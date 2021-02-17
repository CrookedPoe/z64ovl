#ifndef __Z64OVL_Z_BG_JYA_BIGMIRROR__
#define __Z64OVL_Z_BG_JYA_BIGMIRROR__

#define Z_BG_JYA_BIGMIRROR_ACTOR_NUMBER     0x0158
#define Z_BG_JYA_BIGMIRROR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_BIGMIRROR_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_BIGMIRROR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_jya_bigmirror_s z_bg_jya_bigmirror_t;
struct z_bg_jya_bigmirror_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ JBM_Cobra_Info cobra_info[2];
    /* 0x14C */ unsigned char status;
    /* 0x14D */ unsigned char make_flag;
    /* 0x150 */ ACTOR* mir_ray[3];
    /* 0x15C */ int old_mr_bankID;
    /* 0x160 */ float lift_old_pos_y;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_JYA_BIGMIRROR__ */
