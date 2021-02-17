#ifndef __Z64OVL_Z_DM_ZL__
#define __Z64OVL_Z_DM_ZL__

#define Z_DM_ZL_ACTOR_NUMBER     0x0152
#define Z_DM_ZL_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_ZL_OBJECT_NUMBER    0x014B
#define Z_DM_ZL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_dm_zl_s z_dm_zl_t;
struct z_dm_zl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[18];
    /* 0x1F4 */ s_xyz joint2[18];
    /* 0x260 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x264 */ ClObjPipe all_pipe;
    /* 0x2B0 */ short anime_no;
    /* 0x2B2 */ unsigned char eye_l;
    /* 0x2B3 */ unsigned char eye_r;
    /* 0x2B4 */ unsigned char mouth;
    /* 0x2B5 */ unsigned char eye_mode;
    /* 0x2B6 */ unsigned char mou_mode;
    /* 0x2B7 */ unsigned char old_mchk;
    /* 0x2B8 */ short eyetimer;
    /* 0x2BA */ short timer;
    /* 0x2BC */ unsigned char no_request;
    /* 0x2BE */ short event_no00;
    /* 0x2C0 */ short event_no01;
    /* 0x2C2 */ short event_no02;
    /* 0x2C4 */ ACTOR* mestag;
    /* 0x2C8 */ xyz_t eff_pos;
}; /* size = 0x02D4 */

#endif /* __Z64OVL_Z_DM_ZL__ */
