#ifndef __Z64OVL_Z_BOSS_06__
#define __Z64OVL_Z_BOSS_06__

#define Z_BOSS_06_ACTOR_NUMBER     0x012E
#define Z_BOSS_06_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_06_OBJECT_NUMBER    0x0156
#define Z_BOSS_06_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_06_s z_boss_06_t;
struct z_boss_06_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ u8 move_mode;
    /* 0x146 */ short timer[2];
    /* 0x14C */ ClObjPipe pipe_info;
    /* 0x198 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x19C */ float hikari_alpha;
    /* 0x1A0 */ float open_vtx_y;
    /* 0x1A4 */ float open_vtx_z;
    /* 0x1A8 */ float karten_offset_Y;
    /* 0x1AC */ float fee_offset_Y;
    /* 0x1B0 */ xyz_t fire_offs2;
    /* 0x1BC */ xyz_t fire_offs;
    /* 0x1C8 */ u8 fire;
    /* 0x1C9 */ u8 fire_mode;
    /* 0x1CA */ short fire_time;
    /* 0x1CC */ float tex_r_main;
    /* 0x1D0 */ float tex_r_sub;
    /* 0x1D4 */ float tex_r_sub2;
    /* 0x1D8 */ float fire_scale;
    /* 0x1DC */ float pika_scale;
    /* 0x1E0 */ float pika_alpha;
    /* 0x1E4 */ float fee_scale;
    /* 0x1E8 */ xyz_t fee_pos;
    /* 0x1F8 */ long long dammy;
    /* 0x200 */ unsigned char tex[2048];
    /* 0xA00 */ short camera_no;
    /* 0xA04 */ xyz_t eye;
    /* 0xA10 */ xyz_t way;
    /* 0xA1C */ xyz_t way_s;
    /* 0xA28 */ float camera_morf;
    /* 0xA2C */ float rect_al;
}; /* size = 0x0A30 */

#endif /* __Z64OVL_Z_BOSS_06__ */
