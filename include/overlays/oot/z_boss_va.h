#ifndef __Z64OVL_Z_BOSS_VA__
#define __Z64OVL_Z_BOSS_VA__

#define Z_BOSS_VA_ACTOR_NUMBER     0x00BA
#define Z_BOSS_VA_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_VA_OBJECT_NUMBER    0x008C
#define Z_BOSS_VA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_va_s z_boss_va_t;
struct z_boss_va_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ u8 action;
    /* 0x185 */ u8 s_flg;
    /* 0x186 */ s8 dam_time;
    /* 0x187 */ unsigned char arm_flg;
    /* 0x188 */ int mode_timer;
    /* 0x18C */ short s_time;
    /* 0x190 */ float f_wk0;
    /* 0x194 */ float f_wk1;
    /* 0x198 */ float f_wk2;
    /* 0x19C */ short s_wk0;
    /* 0x19E */ short s_wk1;
    /* 0x1A0 */ short s_wk2;
    /* 0x1A4 */ xyz_t xyz_wk0;
    /* 0x1B0 */ xyz_t xyz_wk1;
    /* 0x1BC */ xyz_t xyz_wk2;
    /* 0x1C8 */ xyz_t xyz_wk3;
    /* 0x1D4 */ s_xyz ang_wk0;
    /* 0x1DA */ s_xyz ang_wk1;
    /* 0x1E0 */ s_xyz ang_wk2;
    /* 0x1E6 */ s_xyz ang_wk3;
    /* 0x1EC */ xyz_t shape_pos[12];
    /* 0x27C */ ClObjPipe pipe_pos;
    /* 0x2C8 */ ClObjJntSph sph_pos;
    /* 0x2E8 */ ClObjJntSphElem sph_elem;
    /* 0x328 */ ClObjSwrd sword_pos;
}; /* size = 0x03B8 */

#endif /* __Z64OVL_Z_BOSS_VA__ */
