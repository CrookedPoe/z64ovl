#ifndef __Z64OVL_Z_EN_GS__
#define __Z64OVL_Z_EN_GS__

#define Z_EN_GS_ACTOR_NUMBER     0x01B9
#define Z_EN_GS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GS_OBJECT_NUMBER    0x0188
#define Z_EN_GS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_gs_s z_en_gs_t;
struct z_en_gs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char talk_stat;
    /* 0x18D */ unsigned char oca_flag;
    /* 0x18E */ unsigned char dm_sts;
    /* 0x18F */ unsigned char dm_stp;
    /* 0x190 */ s_xyz dm_rot[3];
    /* 0x1A4 */ xyz_t dm_scl[3];
    /* 0x1C8 */ xyz_t def_pos;
    /* 0x1D4 */ rgba_t prim;
    /* 0x1D8 */ float fwk[6];
    /* 0x1F0 */ unsigned short tm[4];
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_EN_GS__ */
