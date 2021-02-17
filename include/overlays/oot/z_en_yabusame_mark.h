#ifndef __Z64OVL_Z_EN_YABUSAME_MARK__
#define __Z64OVL_Z_EN_YABUSAME_MARK__

#define Z_EN_YABUSAME_MARK_ACTOR_NUMBER     0x012F
#define Z_EN_YABUSAME_MARK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_YABUSAME_MARK_OBJECT_NUMBER    0x0001
#define Z_EN_YABUSAME_MARK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_yabusame_mark_s z_en_yabusame_mark_t;
struct z_en_yabusame_mark_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short type_index;
    /* 0x142 */ short check_bit;
    /* 0x144 */ xyz_t pos;
    /* 0x150 */ xyz_t trans_leftup;
    /* 0x15C */ xyz_t trans_leftdn;
    /* 0x168 */ xyz_t trans_rightdn;
    /* 0x174 */ xyz_t trans_rightup;
    /* 0x180 */ ClObjSwrd at_swrd_info;
}; /* size = 0x0210 */

#endif /* __Z64OVL_Z_EN_YABUSAME_MARK__ */
