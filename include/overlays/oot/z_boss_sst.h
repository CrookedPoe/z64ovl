#ifndef __Z64OVL_Z_BOSS_SST__
#define __Z64OVL_Z_BOSS_SST__

#define Z_BOSS_SST_ACTOR_NUMBER     0x00E9
#define Z_BOSS_SST_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_SST_OBJECT_NUMBER    0x00E2
#define Z_BOSS_SST_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_boss_sst_s z_boss_sst_t;
struct z_boss_sst_s {
    /* 0x0 */ xyz_t pos;
    /* 0xC */ xyz_t vec;
    /* 0x18 */ s_xyz angle;
    /* 0x1E */ unsigned short scale1000;
    /* 0x20 */ short timer;
    /* 0x22 */ short work_data;
    /* 0x24 */ unsigned char prim_a;
    /* 0x0 */ xyz_t blure_pos;
    /* 0xC */ s_xyz blure_angle;
    /* 0x14 */ float blure_shape_offset_z;
    /* 0x18 */ short blure_shape_angle_y;
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ signed char hand_sign;
    /* 0x185 */ signed char end_flg;
    /* 0x186 */ unsigned char eff_type;
    /* 0x188 */ short timer;
    /* 0x18A */ short inc_angle_y;
    /* 0x18C */ short max_inc_angle_y;
    /* 0x18E */ short shape_offset_z;
    /* 0x190 */ short shape_angle_y;
    /* 0x192 */ s_xyz aim_angle;
    /* 0x198 */ s_xyz joint1[45];
    /* 0x2A6 */ s_xyz joint2[45];
    /* 0x3B4 */ float work_length;
    /* 0x3B8 */ xyz_t work_pos;
    /* 0x3C4 */ ClObjJntSph all_jntsph;
    /* 0x3E4 */ ClObjJntSphElem sph_elem[11];
    /* 0x6A4 */ ClObjPipe all_pipe;
    /* 0x6F0 */ Boss_Sst_Eff eff_work[18];
    /* 0x9C0 */ short hand_blure_num;
    /* 0x9C2 */ short hand_blure_cnt;
    /* 0x9C4 */ Boss_Sst_Blure hand_blure[7];
}; /* size = 0x0A98 */

#endif /* __Z64OVL_Z_BOSS_SST__ */
