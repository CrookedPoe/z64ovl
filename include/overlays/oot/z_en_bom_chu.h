#ifndef __Z64OVL_Z_EN_BOM_CHU__
#define __Z64OVL_Z_EN_BOM_CHU__

#define Z_EN_BOM_CHU_ACTOR_NUMBER     0x00DA
#define Z_EN_BOM_CHU_ACTOR_CATEGORY   ACTORCAT_EXPLOSIVE
#define Z_EN_BOM_CHU_OBJECT_NUMBER    0x0001
#define Z_EN_BOM_CHU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bom_chu_s z_en_bom_chu_t;
struct z_en_bom_chu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x144 */ xyz_t direction;
    /* 0x150 */ xyz_t head_up;
    /* 0x15C */ xyz_t side;
    /* 0x168 */ float offset_x;
    /* 0x16C */ int blure_effect_index[2];
    /* 0x174 */ ClObjJntSph all_jntsph;
    /* 0x194 */ ClObjJntSphElem sph_elem;
}; /* size = 0x01E4 */

#endif /* __Z64OVL_Z_EN_BOM_CHU__ */
