#ifndef __Z64OVL_Z_EN_SW__
#define __Z64OVL_Z_EN_SW__

#define Z_EN_SW_ACTOR_NUMBER     0x0095
#define Z_EN_SW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SW_OBJECT_NUMBER    0x0024
#define Z_EN_SW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_sw_s z_en_sw_t;
struct z_en_sw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjJntSph all_jntsph;
    /* 0x1A4 */ ClObjJntSphElem sph_elem[1];
    /* 0x1E4 */ rgba_t eye_color;
    /* 0x1E8 */ s_xyz joint[30][2];
    /* 0x350 */ unsigned char special_flag;
    /* 0x354 */ xyz_t head_up;
    /* 0x360 */ xyz_t side;
    /* 0x36C */ xyz_t direction;
    /* 0x378 */ short timer;
    /* 0x37A */ short count;
    /* 0x37C */ short acttimer;
    /* 0x37E */ short stptimer;
    /* 0x380 */ short hittimer;
    /* 0x382 */ short dmgtimer;
    /* 0x384 */ short dietimer;
    /* 0x386 */ short found;
    /* 0x388 */ MtxF home_mtx;
    /* 0x3C8 */ MtxF mtx;
    /* 0x408 */ float rot_angle;
    /* 0x40C */ float aim_angle;
    /* 0x410 */ float turn;
    /* 0x414 */ float tang;
    /* 0x418 */ float fang;
    /* 0x41C */ unsigned char debugflag;
    /* 0x420 */ T_Polygon* wall_polygon;
    /* 0x424 */ xyz_t wall_position;
    /* 0x430 */ short sound_timer;
    /* 0x432 */ short wait_timer;
    /* 0x434 */ short target_angle;
    /* 0x438 */ xyz_t target_p;
    /* 0x444 */ xyz_t legR_under_pos;
    /* 0x450 */ xyz_t legR_pos;
    /* 0x45C */ xyz_t legL_under_pos;
    /* 0x468 */ xyz_t legL_pos;
    /* 0x474 */ xyz_t body_pos;
    /* 0x480 */ xyz_t wpos[6];
}; /* size = 0x04D8 */

#endif /* __Z64OVL_Z_EN_SW__ */
