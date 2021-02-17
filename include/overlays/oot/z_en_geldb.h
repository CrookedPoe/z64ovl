#ifndef __Z64OVL_Z_EN_GELDB__
#define __Z64OVL_Z_EN_GELDB__

#define Z_EN_GELDB_ACTOR_NUMBER     0x0197
#define Z_EN_GELDB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_GELDB_OBJECT_NUMBER    0x0169
#define Z_EN_GELDB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_geldb_s z_en_geldb_t;
struct z_en_geldb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ En_mag_s en_mag;
    /* 0x178 */ SKELETON_INFO skeleton;
    /* 0x1BC */ s_xyz joint1[24];
    /* 0x24C */ s_xyz joint2[24];
    /* 0x2DC */ int mode;
    /* 0x2E0 */ int action;
    /* 0x2E4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2E8 */ short timer;
    /* 0x2EA */ short timer0;
    /* 0x2EC */ short timer1;
    /* 0x2EE */ unsigned char reaction_buf;
    /* 0x2F0 */ int mode_timer;
    /* 0x2F4 */ float spd_wk;
    /* 0x2F8 */ float spd_wk2;
    /* 0x2FC */ float eye_spd;
    /* 0x300 */ short attack_flg;
    /* 0x302 */ short attack_rslt;
    /* 0x304 */ short arg_data2;
    /* 0x306 */ short ang_wk;
    /* 0x308 */ short work0;
    /* 0x30A */ u8 eye_idx;
    /* 0x30C */ int blure_effect_index;
    /* 0x310 */ ClObjPipe pipe_pos;
    /* 0x35C */ ClObjSwrd sword_pos;
    /* 0x3DC */ ClObjTris shield_pos;
    /* 0x3FC */ ClObjTrisElem shield_elem[2];
    /* 0x4B4 */ xyz_t r_foot;
    /* 0x4C0 */ xyz_t l_foot;
    /* 0x4CC */ s_xyz neck_angle;
}; /* size = 0x04E4 */

#endif /* __Z64OVL_Z_EN_GELDB__ */
