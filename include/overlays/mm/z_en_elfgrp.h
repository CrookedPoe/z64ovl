#ifndef __Z64OVL_Z_EN_ELFGRP__
#define __Z64OVL_Z_EN_ELFGRP__

#define Z_EN_ELFGRP_ACTOR_NUMBER     0x0153
#define Z_EN_ELFGRP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ELFGRP_OBJECT_NUMBER    0x0001
#define Z_EN_ELFGRP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_elfgrp_s z_en_elfgrp_t;
struct z_en_elfgrp_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short wait_timer;
    /* 0x146 */ unchar event_chk_inf;
    /* 0x147 */ unchar type_index;
    /* 0x148 */ unchar scene_id;
    /* 0x14A */ unshort flag;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EN_ELFGRP__ */
