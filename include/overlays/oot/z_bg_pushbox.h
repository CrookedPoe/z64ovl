#ifndef __Z64OVL_Z_BG_PUSHBOX__
#define __Z64OVL_Z_BG_PUSHBOX__

#define Z_BG_PUSHBOX_ACTOR_NUMBER     0x002C
#define Z_BG_PUSHBOX_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_PUSHBOX_OBJECT_NUMBER    0x0003
#define Z_BG_PUSHBOX_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_pushbox_s z_bg_pushbox_t;
struct z_bg_pushbox_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_PUSHBOX__ */
