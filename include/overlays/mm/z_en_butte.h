#ifndef __Z64OVL_Z_EN_BUTTE__
#define __Z64OVL_Z_EN_BUTTE__

#define Z_EN_BUTTE_ACTOR_NUMBER     0x0015
#define Z_EN_BUTTE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_BUTTE_OBJECT_NUMBER    0x0002
#define Z_EN_BUTTE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_butte_s z_en_butte_t;
struct z_en_butte_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ SKELETON_INFO skeleton;
    /* 0x1E8 */ s_xyz joint1[8];
    /* 0x218 */ s_xyz joint2[8];
    /* 0x248 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x24C */ short mode_timer;
    /* 0x24E */ unsigned char speed_mode;
    /* 0x24F */ unsigned char search_mode;
    /* 0x250 */ unsigned char disp_flag;
    /* 0x252 */ short at_timer;
    /* 0x254 */ short fi_1;
    /* 0x256 */ short fi_2;
    /* 0x258 */ short fi_x;
    /* 0x25C */ float goal_pos_y;
}; /* size = 0x0260 */

#endif /* __Z64OVL_Z_EN_BUTTE__ */
