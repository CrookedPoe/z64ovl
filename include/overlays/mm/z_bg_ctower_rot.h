#ifndef __Z64OVL_Z_BG_CTOWER_ROT__
#define __Z64OVL_Z_BG_CTOWER_ROT__

#define Z_BG_CTOWER_ROT_ACTOR_NUMBER     0x0061
#define Z_BG_CTOWER_ROT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_CTOWER_ROT_OBJECT_NUMBER    0x0088
#define Z_BG_CTOWER_ROT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ctower_rot_s z_bg_ctower_rot_t;
struct z_bg_ctower_rot_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float aim_distance;
    /* 0x164 */ float move_distance;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_CTOWER_ROT__ */
