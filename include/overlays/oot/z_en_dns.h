#ifndef __Z64OVL_Z_EN_DNS__
#define __Z64OVL_Z_EN_DNS__

#define Z_EN_DNS_ACTOR_NUMBER     0x011A
#define Z_EN_DNS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_DNS_OBJECT_NUMBER    0x0168
#define Z_EN_DNS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_dns_s z_en_dns_t;
struct z_en_dns_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[18];
    /* 0x1EC */ s_xyz joint2[18];
    /* 0x258 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x25C */ ClObjPipe pipe_info;
    /* 0x2A8 */ short count;
    /* 0x2AA */ unsigned char amode;
    /* 0x2AB */ unsigned char crossSW;
    /* 0x2AC */ unsigned char bgcrsFG;
    /* 0x2AD */ unsigned char heartFG;
    /* 0x2B0 */ Dns_itemInfo* item;
    /* 0x2B4 */ float yuka_pos;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_DNS__ */
