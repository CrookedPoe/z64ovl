#ifndef __Z64OVL_Z_BG_JYA_BLOCK__
#define __Z64OVL_Z_BG_JYA_BLOCK__

#define Z_BG_JYA_BLOCK_ACTOR_NUMBER     0x01D5
#define Z_BG_JYA_BLOCK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_JYA_BLOCK_OBJECT_NUMBER    0x0003
#define Z_BG_JYA_BLOCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_block_s z_bg_jya_block_t;
struct z_bg_jya_block_s {
    /* 0x0 */ MoveBG_Actor a;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_JYA_BLOCK__ */
