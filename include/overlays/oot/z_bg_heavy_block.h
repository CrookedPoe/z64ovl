#ifndef __Z64OVL_Z_BG_HEAVY_BLOCK__
#define __Z64OVL_Z_BG_HEAVY_BLOCK__

#define Z_BG_HEAVY_BLOCK_ACTOR_NUMBER     0x0092
#define Z_BG_HEAVY_BLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HEAVY_BLOCK_OBJECT_NUMBER    0x009A
#define Z_BG_HEAVY_BLOCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_heavy_block_s z_bg_heavy_block_t;
struct z_bg_heavy_block_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ xyz_t offset;
    /* 0x160 */ short timer;
    /* 0x162 */ unshort flag;
    /* 0x164 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_HEAVY_BLOCK__ */
