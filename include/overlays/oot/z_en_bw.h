#ifndef __Z64OVL_Z_EN_BW__
#define __Z64OVL_Z_EN_BW__

#define Z_EN_BW_ACTOR_NUMBER     0x0038
#define Z_EN_BW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BW_OBJECT_NUMBER    0x0025
#define Z_EN_BW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bw_s z_en_bw_t;
struct z_en_bw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[12];
    /* 0x1C8 */ s_xyz joint2[12];
    /* 0x210 */ u8 mode;
    /* 0x211 */ u8 action;
    /* 0x212 */ short mode_timer;
    /* 0x214 */ short mode_timer2;
    /* 0x218 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x21C */ unsigned char env_r;
    /* 0x21D */ unsigned char env_g;
    /* 0x21E */ unsigned char env_b;
    /* 0x21F */ unsigned char env_a;
    /* 0x220 */ unsigned char t_flg;
    /* 0x221 */ unsigned char reaction_buf;
    /* 0x222 */ unsigned char s_flg;
    /* 0x224 */ short hasi_flg;
    /* 0x226 */ short t_ang;
    /* 0x228 */ short t_ang2;
    /* 0x22A */ u8 tex_pos_y;
    /* 0x22B */ u8 timer;
    /* 0x22C */ u8 timer_p;
    /* 0x230 */ float counter0;
    /* 0x234 */ float counter0_add;
    /* 0x238 */ float f_size;
    /* 0x23C */ float move_speed;
    /* 0x240 */ float move_speed_b;
    /* 0x244 */ float bg_sp;
    /* 0x248 */ float parts_anime_time;
    /* 0x24C */ float parts_anime_time_add;
    /* 0x250 */ float parts_anime_sc;
    /* 0x254 */ xyz_t bg_point;
    /* 0x260 */ xyz_t bg_point2;
    /* 0x26C */ xyz_t bg_point_l;
    /* 0x278 */ xyz_t bg_point_r;
    /* 0x284 */ ClObjPipe pipe_pos;
    /* 0x2D0 */ ClObjPipe pipe_pos2;
}; /* size = 0x032C */

#endif /* __Z64OVL_Z_EN_BW__ */
