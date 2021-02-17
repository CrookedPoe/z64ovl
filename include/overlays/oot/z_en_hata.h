#ifndef __Z64OVL_Z_EN_HATA__
#define __Z64OVL_Z_EN_HATA__

#define Z_EN_HATA_ACTOR_NUMBER     0x0026
#define Z_EN_HATA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HATA_OBJECT_NUMBER    0x0076
#define Z_EN_HATA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_hata_s z_en_hata_t;
struct z_en_hata_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ ClObjPipe all_pipe;
    /* 0x1E4 */ s_xyz add_joint[21];
    /* 0x262 */ short per;
    /* 0x264 */ short large;
    /* 0x266 */ short small;
    /* 0x268 */ short sin_cnt;
}; /* size = 0x027C */

#endif /* __Z64OVL_Z_EN_HATA__ */
