#ifndef __Z64OVL_Z_DM_TSG__
#define __Z64OVL_Z_DM_TSG__

#define Z_DM_TSG_ACTOR_NUMBER     0x0154
#define Z_DM_TSG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_TSG_OBJECT_NUMBER    0x019F
#define Z_DM_TSG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_dm_tsg_s z_dm_tsg_t;
struct z_dm_tsg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ xyz_t rak_pos[100];
    /* 0x5F8 */ float rak_r[100];
    /* 0x788 */ float y_pos;
    /* 0x78C */ short r_pst[100];
    /* 0x854 */ short r_pst2;
    /* 0x856 */ short r_pst_plus[100];
    /* 0x91E */ unchar disp_sw;
}; /* size = 0x0920 */

#endif /* __Z64OVL_Z_DM_TSG__ */
