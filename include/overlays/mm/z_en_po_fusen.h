#ifndef __Z64OVL_Z_EN_PO_FUSEN__
#define __Z64OVL_Z_EN_PO_FUSEN__

#define Z_EN_PO_FUSEN_ACTOR_NUMBER     0x01A6
#define Z_EN_PO_FUSEN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_PO_FUSEN_OBJECT_NUMBER    0x019B
#define Z_EN_PO_FUSEN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_po_fusen_s z_en_po_fusen_t;
struct z_en_po_fusen_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjSph acoc_sph;
    /* 0x1E4 */ s_xyz joint1[10];
    /* 0x220 */ s_xyz joint2[10];
    /* 0x25C */ short scale_cycle;
    /* 0x25E */ short scale_cycle2;
    /* 0x260 */ short angle_speed;
    /* 0x262 */ short arm_angle_max;
    /* 0x264 */ short arm_angle[4];
    /* 0x26C */ short ramp_angle;
    /* 0x26E */ short ramp_cycle;
    /* 0x270 */ short demo_wait_timer;
}; /* size = 0x0274 */

#endif /* __Z64OVL_Z_EN_PO_FUSEN__ */
