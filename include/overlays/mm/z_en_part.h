#ifndef __Z64OVL_Z_EN_PART__
#define __Z64OVL_Z_EN_PART__

#define Z_EN_PART_ACTOR_NUMBER     0x0003
#define Z_EN_PART_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_PART_OBJECT_NUMBER    0x0001
#define Z_EN_PART_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_part_s z_en_part_t;
struct z_en_part_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ u8 mode;
    /* 0x146 */ short mode_timer;
    /* 0x148 */ float angle;
    /* 0x14C */ float angle_add;
    /* 0x150 */ Gfx* shape_part;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_PART__ */
