#ifndef __Z64OVL_Z_EN_DS2N__
#define __Z64OVL_Z_EN_DS2N__

#define Z_EN_DS2N_ACTOR_NUMBER     0x01C3
#define Z_EN_DS2N_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DS2N_OBJECT_NUMBER    0x01AA
#define Z_EN_DS2N_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ds2n_s z_en_ds2n_t;
struct z_en_ds2n_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ short pwt_y[19];
    /* 0x1FE */ short pwt_z[19];
    /* 0x224 */ s_xyz neck_angle;
    /* 0x22A */ s_xyz body_angle;
    /* 0x230 */ short eyesID;
    /* 0x232 */ short eyesTM;
}; /* size = 0x0234 */

#endif /* __Z64OVL_Z_EN_DS2N__ */
