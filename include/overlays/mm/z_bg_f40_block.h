#ifndef __Z64OVL_Z_BG_F40_BLOCK__
#define __Z64OVL_Z_BG_F40_BLOCK__

#define Z_BG_F40_BLOCK_ACTOR_NUMBER     0x0245
#define Z_BG_F40_BLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_F40_BLOCK_OBJECT_NUMBER    0x005C
#define Z_BG_F40_BLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_f40_block_s z_bg_f40_block_t;
struct z_bg_f40_block_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ Path_Info* path_data;
    /* 0x160 */ int path_now;
    /* 0x164 */ int path_next;
    /* 0x168 */ int houkou;
    /* 0x16C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_F40_BLOCK__ */
