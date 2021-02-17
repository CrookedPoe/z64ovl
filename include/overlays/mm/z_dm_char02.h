#ifndef __Z64OVL_Z_DM_CHAR02__
#define __Z64OVL_Z_DM_CHAR02__

#define Z_DM_CHAR02_ACTOR_NUMBER     0x0194
#define Z_DM_CHAR02_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR02_OBJECT_NUMBER    0x01BE
#define Z_DM_CHAR02_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char02_s z_dm_char02_t;
struct z_dm_char02_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x294 */ ClObjPipe pipe_info;
    /* 0x2E0 */ short anime_no;
    /* 0x2E4 */ xyz_t statue_pos[1];
    /* 0x2F0 */ unsigned int alpha;
}; /* size = 0x02F4 */

#endif /* __Z64OVL_Z_DM_CHAR02__ */
