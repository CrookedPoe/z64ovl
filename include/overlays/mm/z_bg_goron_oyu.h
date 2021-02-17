#ifndef __Z64OVL_Z_BG_GORON_OYU__
#define __Z64OVL_Z_BG_GORON_OYU__

#define Z_BG_GORON_OYU_ACTOR_NUMBER     0x01FE
#define Z_BG_GORON_OYU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_GORON_OYU_OBJECT_NUMBER    0x01D3
#define Z_BG_GORON_OYU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_goron_oyu_s z_bg_goron_oyu_t;
struct z_bg_goron_oyu_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short appear_flag;
    /* 0x162 */ short cycle;
    /* 0x164 */ float height;
    /* 0x168 */ xyz_t water_pos;
    /* 0x174 */ float water_size_x;
    /* 0x178 */ float water_size_z;
    /* 0x17C */ short eventmgr;
    /* 0x17E */ short stat;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_BG_GORON_OYU__ */
