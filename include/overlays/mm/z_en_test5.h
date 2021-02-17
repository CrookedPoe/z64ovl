#ifndef __Z64OVL_Z_EN_TEST5__
#define __Z64OVL_Z_EN_TEST5__

#define Z_EN_TEST5_ACTOR_NUMBER     0x018B
#define Z_EN_TEST5_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TEST5_OBJECT_NUMBER    0x0001
#define Z_EN_TEST5_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_test5_s z_en_test5_t;
struct z_en_test5_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ xyz_t water_pos;
    /* 0x150 */ float water_size_x;
    /* 0x154 */ float water_size_z;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_EN_TEST5__ */
