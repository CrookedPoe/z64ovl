#ifndef __Z64OVL_Z_OBJ_SPIDERTENT__
#define __Z64OVL_Z_OBJ_SPIDERTENT__

#define Z_OBJ_SPIDERTENT_ACTOR_NUMBER     0x01F4
#define Z_OBJ_SPIDERTENT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_SPIDERTENT_OBJECT_NUMBER    0x01CD
#define Z_OBJ_SPIDERTENT_FLAGS            (ACTORFLAG_SFX_TIMER)

typedef struct z_obj_spidertent_s z_obj_spidertent_t;
struct z_obj_spidertent_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjTris tris;
    /* 0x17C */ ClObjTrisElem tris_elem[6];
    /* 0x3A4 */ xyz_t fire_center;
    /* 0x3B0 */ float fire_r[4];
    /* 0x3C0 */ unsigned char fire_end_flag;
    /* 0x3C1 */ signed char mode_timer;
    /* 0x3C2 */ unsigned char prim_r;
    /* 0x3C3 */ unsigned char prim_g;
    /* 0x3C4 */ unsigned char prim_b;
    /* 0x3C5 */ unsigned char prim_a;
    /* 0x3C6 */ signed char color_counter;
    /* 0x3C7 */ signed char se_timer;
    /* 0x3C8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x03CC */

#endif /* __Z64OVL_Z_OBJ_SPIDERTENT__ */
