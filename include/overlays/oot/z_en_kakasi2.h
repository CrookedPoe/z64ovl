#ifndef __Z64OVL_Z_EN_KAKASI2__
#define __Z64OVL_Z_EN_KAKASI2__

#define Z_EN_KAKASI2_ACTOR_NUMBER     0x01C9
#define Z_EN_KAKASI2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KAKASI2_OBJECT_NUMBER    0x0154
#define Z_EN_KAKASI2_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_kakasi2_s z_en_kakasi2_t;
struct z_en_kakasi2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ SKELETON_INFO skeleton;
    /* 0x184 */ short hani_out;
    /* 0x186 */ short save_bit;
    /* 0x188 */ short angle_BAK;
    /* 0x18C */ xyz_t hosei;
    /* 0x198 */ float eye_pos;
    /* 0x19C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01F8 */

#endif /* __Z64OVL_Z_EN_KAKASI2__ */
