#ifndef __Z64OVL_Z_OBJ_OSHIHIKI__
#define __Z64OVL_Z_OBJ_OSHIHIKI__

#define Z_OBJ_OSHIHIKI_ACTOR_NUMBER     0x00FF
#define Z_OBJ_OSHIHIKI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_OSHIHIKI_OBJECT_NUMBER    0x0003
#define Z_OBJ_OSHIHIKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_oshihiki_s z_obj_oshihiki_t;
struct z_obj_oshihiki_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned short status;
    /* 0x15A */ short timer;
    /* 0x15C */ float s_th;
    /* 0x160 */ float c_th;
    /* 0x164 */ float spd;
    /* 0x168 */ float pos;
    /* 0x16C */ float powF;
    /* 0x170 */ int pbg_actor_index[5];
    /* 0x184 */ T_Polygon* ground_polygon_info[5];
    /* 0x198 */ float g_posY[5];
    /* 0x1AC */ short g_num;
    /* 0x1AE */ unsigned char stop_flag;
    /* 0x1B0 */ Obj_Oshihiki_actor* under_slip;
    /* 0x1B4 */ float rev_x;
    /* 0x1B8 */ float rev_z;
    /* 0x1BC */ unsigned char* texture;
    /* 0x1C0 */ ColorRGB c;
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_OBJ_OSHIHIKI__ */
