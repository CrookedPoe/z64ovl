#ifndef __Z64OVL_Z_DM_CHAR00__
#define __Z64OVL_Z_DM_CHAR00__

#define Z_DM_CHAR00_ACTOR_NUMBER     0x0192
#define Z_DM_CHAR00_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_CHAR00_OBJECT_NUMBER    0x01C8
#define Z_DM_CHAR00_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_char00_s z_dm_char00_t;
struct z_dm_char00_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[15];
    /* 0x1E2 */ s_xyz joint2[15];
    /* 0x23C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x240 */ ColorF center_color;
    /* 0x250 */ ColorF side_color;
    /* 0x260 */ unsigned char old_dousa;
    /* 0x261 */ unsigned char anime_no;
    /* 0x262 */ unshort frame_counter;
}; /* size = 0x0264 */

#endif /* __Z64OVL_Z_DM_CHAR00__ */
