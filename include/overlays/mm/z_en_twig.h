#ifndef __Z64OVL_Z_EN_TWIG__
#define __Z64OVL_Z_EN_TWIG__

#define Z_EN_TWIG_ACTOR_NUMBER     0x01A5
#define Z_EN_TWIG_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_TWIG_OBJECT_NUMBER    0x0199
#define Z_EN_TWIG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_twig_s z_en_twig_t;
struct z_en_twig_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int type;
    /* 0x164 */ int arg0;
    /* 0x168 */ int arg1;
    /* 0x16C */ unsigned int stat;
    /* 0x170 */ float wkf00;
    /* 0x174 */ float wkf01;
    /* 0x178 */ unsigned short wkus0;
    /* 0x17A */ unsigned short wkus1;
    /* 0x17C */ short rel_player_dst_z_sign_old;
    /* 0x180 */ xyz_t old_player_waist_pos;
}; /* size = 0x018C */

#endif /* __Z64OVL_Z_EN_TWIG__ */
