#ifndef __Z64OVL_Z_EN_WIZ_BROCK__
#define __Z64OVL_Z_EN_WIZ_BROCK__

#define Z_EN_WIZ_BROCK_ACTOR_NUMBER     0x015E
#define Z_EN_WIZ_BROCK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WIZ_BROCK_OBJECT_NUMBER    0x0178
#define Z_EN_WIZ_BROCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_wiz_brock_s z_en_wiz_brock_t;
struct z_en_wiz_brock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A4 */ short clear_count;
    /* 0x1A6 */ short stat_mode;
    /* 0x1A8 */ short index;
    /* 0x1AA */ short type_index;
    /* 0x1AC */ float alpha;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_EN_WIZ_BROCK__ */
