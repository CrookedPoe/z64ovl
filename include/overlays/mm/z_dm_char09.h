#ifndef __Z64OVL_Z_DM_CHAR09__
#define __Z64OVL_Z_DM_CHAR09__

#define Z_DM_CHAR09_ACTOR_NUMBER     0x019B
#define Z_DM_CHAR09_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR09_OBJECT_NUMBER    0x01EB
#define Z_DM_CHAR09_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char09_s z_dm_char09_t;
struct z_dm_char09_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ xyz_t fly_pos;
    /* 0x210 */ float aim_speed;
    /* 0x214 */ int path_num;
    /* 0x218 */ int last_idx;
    /* 0x21C */ int now_idx;
    /* 0x220 */ int dir;
    /* 0x224 */ s_xyz* path_pos_0;
    /* 0x228 */ short x_sin_work;
    /* 0x22A */ short y_sin_work;
    /* 0x22C */ short z_sin_work;
    /* 0x22E */ unchar disp_sw;
    /* 0x22F */ unchar old_dousa;
}; /* size = 0x0230 */

#endif /* __Z64OVL_Z_DM_CHAR09__ */
