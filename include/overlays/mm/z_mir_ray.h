#ifndef __Z64OVL_Z_MIR_RAY__
#define __Z64OVL_Z_MIR_RAY__

#define Z_MIR_RAY_ACTOR_NUMBER     0x0062
#define Z_MIR_RAY_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_MIR_RAY_OBJECT_NUMBER    0x0087
#define Z_MIR_RAY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_mir_ray_s z_mir_ray_t;
struct z_mir_ray_s {
    /* 0x0 */ s_xyz ray_start;
    /* 0x6 */ s_xyz ray_end;
    /* 0xC */ short start_wid;
    /* 0xE */ short end_wid;
    /* 0x10 */ float cl_pos_ratio;
    /* 0x14 */ short cl_r;
    /* 0x16 */ short l_power_max;
    /* 0x18 */ float l_pos_ratio;
    /* 0x1C */ ColorRGB l_color;
    /* 0x1F */ unsigned char status;
    /* 0x0 */ xyz_t decal;
    /* 0xC */ float mtx[16];
    /* 0x4C */ T_Polygon* poly;
    /* 0x50 */ unsigned char pow;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph at_0;
    /* 0x164 */ ClObjJntSphElem at_0_elem;
    /* 0x1A4 */ ClObjSwrd at_1;
    /* 0x224 */ float mir_pow;
    /* 0x228 */ xyz_t pos[6];
    /* 0x270 */ float z_revers;
    /* 0x274 */ xyz_t ray_start;
    /* 0x280 */ xyz_t ray_end;
    /* 0x28C */ short start_wid;
    /* 0x28E */ short end_wid;
    /* 0x290 */ short light_power;
    /* 0x294 */ Light_list* light_list;
    /* 0x298 */ Light_data light_data;
    /* 0x2A6 */ unsigned char cancel_flag;
}; /* size = 0x02A8 */

#endif /* __Z64OVL_Z_MIR_RAY__ */
