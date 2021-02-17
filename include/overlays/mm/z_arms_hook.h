#ifndef __Z64OVL_Z_ARMS_HOOK__
#define __Z64OVL_Z_ARMS_HOOK__

#define Z_ARMS_HOOK_ACTOR_NUMBER     0x003D
#define Z_ARMS_HOOK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ARMS_HOOK_OBJECT_NUMBER    0x0001
#define Z_ARMS_HOOK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_arms_hook_s z_arms_hook_t;
struct z_arms_hook_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjSwrd at_info;
    /* 0x1C4 */ SWORD_POS_S sword_pos;
    /* 0x1E0 */ xyz_t BGcheck_pos;
    /* 0x1EC */ xyz_t old_BGcheck_pos;
    /* 0x1F8 */ ACTOR* carry_actor;
    /* 0x1FC */ xyz_t carry_offset;
    /* 0x208 */ unsigned char character;
    /* 0x209 */ unsigned char pad1;
    /* 0x20A */ short timer;
    /* 0x20C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0210 */

#endif /* __Z64OVL_Z_ARMS_HOOK__ */
