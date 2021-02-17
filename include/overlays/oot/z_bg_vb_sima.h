#ifndef __Z64OVL_Z_BG_VB_SIMA__
#define __Z64OVL_Z_BG_VB_SIMA__

#define Z_BG_VB_SIMA_ACTOR_NUMBER     0x00AC
#define Z_BG_VB_SIMA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_VB_SIMA_OBJECT_NUMBER    0x009C
#define Z_BG_VB_SIMA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_vb_sima_s z_bg_vb_sima_t;
struct z_bg_vb_sima_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ float fwork[3];
    /* 0x164 */ short work[3];
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_BG_VB_SIMA__ */
