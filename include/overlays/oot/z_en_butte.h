#ifndef __Z64OVL_Z_EN_BUTTE__
#define __Z64OVL_Z_EN_BUTTE__

#define Z_EN_BUTTE_ACTOR_NUMBER     0x001E
#define Z_EN_BUTTE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_BUTTE_OBJECT_NUMBER    0x0002
#define Z_EN_BUTTE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_butte_s z_en_butte_t;
struct z_en_butte_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjJntSph sph;
    /* 0x15C */ ClObjJntSphElem elem;
    /* 0x19C */ SKELETON_INFO skeleton;
    /* 0x1E0 */ s_xyz joint1[8];
    /* 0x210 */ s_xyz joint2[8];
    /* 0x240 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x244 */ short mode_timer;
    /* 0x246 */ unsigned char speed_mode;
    /* 0x247 */ unsigned char search_mode;
    /* 0x248 */ unsigned char disp_flag;
    /* 0x24A */ short at_timer;
    /* 0x24C */ short fi_1;
    /* 0x24E */ short fi_2;
    /* 0x250 */ short fi_x;
    /* 0x254 */ float goal_pos_y;
}; /* size = 0x0268 */

#endif /* __Z64OVL_Z_EN_BUTTE__ */
