#ifndef __Z64OVL_Z_END_TITLE__
#define __Z64OVL_Z_END_TITLE__

#define Z_END_TITLE_ACTOR_NUMBER     0x017F
#define Z_END_TITLE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_END_TITLE_OBJECT_NUMBER    0x0001
#define Z_END_TITLE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_end_title_s z_end_title_t;
struct z_end_title_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unchar alpha[3];
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_END_TITLE__ */
