#ifndef __Z64OVL_Z_OBJ_OSHIHIKI__
#define __Z64OVL_Z_OBJ_OSHIHIKI__

#define Z_OBJ_OSHIHIKI_ACTOR_NUMBER     0x007A
#define Z_OBJ_OSHIHIKI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_OSHIHIKI_OBJECT_NUMBER    0x0003
#define Z_OBJ_OSHIHIKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_oshihiki_s z_obj_oshihiki_t;
struct z_obj_oshihiki_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x160 */ unsigned short status;
    /* 0x162 */ short timer;
    /* 0x164 */ float s_th;
    /* 0x168 */ float c_th;
    /* 0x16C */ float spd;
    /* 0x170 */ float pos;
    /* 0x174 */ float powF;
    /* 0x178 */ int pbg_actor_index[5];
    /* 0x18C */ T_Polygon* ground_polygon_info[5];
    /* 0x1A0 */ float g_posY[5];
    /* 0x1B4 */ short g_num;
    /* 0x1B6 */ unsigned char stop_flag;
    /* 0x1B8 */ Obj_Oshihiki_actor* under_slip;
    /* 0x1BC */ float rev_x;
    /* 0x1C0 */ float rev_z;
    /* 0x1C4 */ signed char texture_type;
    /* 0x1C5 */ ColorRGB c;
    /* 0x1C8 */ EvwAnimeInfo* evw_anime_data;
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_OBJ_OSHIHIKI__ */
