#ifndef __Z64OVL_Z_EN_BOM_CHU__
#define __Z64OVL_Z_EN_BOM_CHU__

#define Z_EN_BOM_CHU_ACTOR_NUMBER     0x006A
#define Z_EN_BOM_CHU_ACTOR_CATEGORY   ACTORCAT_EXPLOSIVE
#define Z_EN_BOM_CHU_OBJECT_NUMBER    0x0001
#define Z_EN_BOM_CHU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bom_chu_s z_en_bom_chu_t;
struct z_en_bom_chu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char timer_flg;
    /* 0x149 */ unsigned char blure_flg;
    /* 0x14A */ short timer;
    /* 0x14C */ xyz_t direction;
    /* 0x158 */ xyz_t head_up;
    /* 0x164 */ xyz_t side;
    /* 0x170 */ float offset_x;
    /* 0x174 */ float key_input_x;
    /* 0x178 */ float key_input_y;
    /* 0x17C */ float old_speedF;
    /* 0x180 */ int blure_effect_index[2];
    /* 0x188 */ ClObjSph all_sph;
}; /* size = 0x01E0 */

#endif /* __Z64OVL_Z_EN_BOM_CHU__ */
