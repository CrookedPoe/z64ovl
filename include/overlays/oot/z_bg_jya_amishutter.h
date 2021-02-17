#ifndef __Z64OVL_Z_BG_JYA_AMISHUTTER__
#define __Z64OVL_Z_BG_JYA_AMISHUTTER__

#define Z_BG_JYA_AMISHUTTER_ACTOR_NUMBER     0x015A
#define Z_BG_JYA_AMISHUTTER_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_AMISHUTTER_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_AMISHUTTER_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_amishutter_s z_bg_jya_amishutter_t;
struct z_bg_jya_amishutter_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_JYA_AMISHUTTER__ */
