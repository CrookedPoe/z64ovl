#ifndef __Z64OVL_Z_ITEM_B_HEART__
#define __Z64OVL_Z_ITEM_B_HEART__

#define Z_ITEM_B_HEART_ACTOR_NUMBER     0x003A
#define Z_ITEM_B_HEART_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_ITEM_B_HEART_OBJECT_NUMBER    0x0096
#define Z_ITEM_B_HEART_FLAGS            (ACTORFLAG_NOP)

typedef struct z_item_b_heart_s z_item_b_heart_t;
struct z_item_b_heart_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ float fwork[5];
    /* 0x158 */ short work[5];
    /* 0x164 */ float scale;
    /* 0x168 */ float main_scale;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_ITEM_B_HEART__ */
