#ifndef __Z64OVL_Z_OBJ_BOAT__
#define __Z64OVL_Z_OBJ_BOAT__

#define Z_OBJ_BOAT_ACTOR_NUMBER     0x022C
#define Z_OBJ_BOAT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_BOAT_OBJECT_NUMBER    0x020E
#define Z_OBJ_BOAT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_boat_s z_obj_boat_t;
struct z_obj_boat_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ unsigned char path;
    /* 0x15D */ signed char direction;
    /* 0x15E */ unsigned char aim_path;
    /* 0x15F */ unsigned char ride;
    /* 0x160 */ short wave_counter;
    /* 0x162 */ unsigned char timer;
    /* 0x163 */ unsigned char path_num;
    /* 0x164 */ s_xyz* path_point;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_OBJ_BOAT__ */
