#ifndef __Z64OVL_Z_EN_PART__
#define __Z64OVL_Z_EN_PART__

#define Z_EN_PART_ACTOR_NUMBER     0x0007
#define Z_EN_PART_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_PART_OBJECT_NUMBER    0x0001
#define Z_EN_PART_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_part_s z_en_part_t;
struct z_en_part_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ u8 mode;
    /* 0x13E */ short mode_timer;
    /* 0x140 */ unsigned int shape_part;
    /* 0x144 */ float angle;
    /* 0x148 */ float angle_add;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_EN_PART__ */
