#ifndef __Z64OVL_Z_EN_BOM__
#define __Z64OVL_Z_EN_BOM__

#define Z_EN_BOM_ACTOR_NUMBER     0x0009
#define Z_EN_BOM_ACTOR_CATEGORY   ACTORCAT_EXPLOSIVE
#define Z_EN_BOM_OBJECT_NUMBER    0x0001
#define Z_EN_BOM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_bom_s z_en_bom_t;
struct z_en_bom_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe acoc_info;
    /* 0x190 */ ClObjJntSph bomb_sph;
    /* 0x1B0 */ ClObjJntSphElem bomb_elem;
    /* 0x1F0 */ short mode_timer;
    /* 0x1F2 */ short flash_spd;
    /* 0x1F4 */ float env_r;
    /* 0x1F8 */ unsigned char oc_flg;
    /* 0x1F9 */ unsigned char size;
    /* 0x1FA */ short spin_angle_x;
    /* 0x1FC */ u8 water_timer;
    /* 0x1FD */ unsigned char pad1;
    /* 0x1FE */ short color_counter;
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_EN_BOM__ */
