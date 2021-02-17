#ifndef __Z64OVL_Z_EN_HATA__
#define __Z64OVL_Z_EN_HATA__

#define Z_EN_HATA_ACTOR_NUMBER     0x001A
#define Z_EN_HATA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HATA_OBJECT_NUMBER    0x005F
#define Z_EN_HATA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_hata_s z_en_hata_t;
struct z_en_hata_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ s_xyz joint[21][2];
    /* 0x29C */ short direction_sx;
    /* 0x29E */ short gravity;
    /* 0x2A0 */ short direction_sy;
    /* 0x2A4 */ xyz_t windpos;
}; /* size = 0x02B0 */

#endif /* __Z64OVL_Z_EN_HATA__ */
