#ifndef __Z64OVL_Z_DEMO_SHD__
#define __Z64OVL_Z_DEMO_SHD__

#define Z_DEMO_SHD_ACTOR_NUMBER     0x0089
#define Z_DEMO_SHD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_DEMO_SHD_OBJECT_NUMBER    0x0153
#define Z_DEMO_SHD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_shd_s z_demo_shd_t;
struct z_demo_shd_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe_info;
    /* 0x1A8 */ Vtx work_vtx[81];
    /* 0x6B8 */ Vtx* pointer_vtx;
    /* 0x6BC */ float hei;
    /* 0x6C0 */ float pos[2];
    /* 0x6C8 */ int loc_pos[2];
    /* 0x6D0 */ int vtx_pos[2];
    /* 0x6D8 */ short mode;
    /* 0x6DA */ short timer;
    /* 0x6DC */ float vtx_speed[81];
    /* 0x820 */ float sand_scale;
    /* 0x824 */ xyz_t sand_pos[100];
    /* 0xCD4 */ float sand_speedF[100];
    /* 0xE64 */ float sand_speedY[100];
    /* 0xFF4 */ short sand_angle[100];
    /* 0x10BC */ short sand_add_angle[100];
    /* 0x1184 */ short sand_hosei[100];
    /* 0x124C */ int sand_time;
    /* 0x1250 */ float mtx[16];
    /* 0x1290 */ short angle;
    /* 0x1292 */ short angle2;
    /* 0x1294 */ float yura;
    /* 0x1298 */ int syokusyu_num;
    /* 0x129C */ float syokusyu_trance;
    /* 0x12A0 */ s_xyz syokusyu_angle;
    /* 0x12A8 */ xyz_t syokusyu_pos;
    /* 0x12B4 */ float syokusyu_scale;
    /* 0x12B8 */ float syokusyu_reach;
    /* 0x12BC */ float syokusyu_r_reach;
    /* 0x12C0 */ int load_pos[2];
    /* 0x12C8 */ unint wind_scroll;
    /* 0x12CC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x12D0 */

#endif /* __Z64OVL_Z_DEMO_SHD__ */
