#ifndef __Z64OVL_Z_EN_EX_RUPPY__
#define __Z64OVL_Z_EN_EX_RUPPY__

#define Z_EN_EX_RUPPY_ACTOR_NUMBER     0x0131
#define Z_EN_EX_RUPPY_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_EX_RUPPY_OBJECT_NUMBER    0x0001
#define Z_EN_EX_RUPPY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ex_ruppy_s z_en_ex_ruppy_t;
struct z_en_ex_ruppy_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short change_cont;
    /* 0x142 */ short type_index;
    /* 0x144 */ short display_frag;
    /* 0x146 */ short wait_timer;
    /* 0x148 */ short get_ruppy;
    /* 0x14A */ short my_index;
    /* 0x14C */ short welcome_frag;
    /* 0x150 */ float scale;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_EX_RUPPY__ */
