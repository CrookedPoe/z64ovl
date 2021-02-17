#ifndef __Z64OVL_Z_EN_DNH__
#define __Z64OVL_Z_EN_DNH__

#define Z_EN_DNH_ACTOR_NUMBER     0x0168
#define Z_EN_DNH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNH_OBJECT_NUMBER    0x0224
#define Z_EN_DNH_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_dnh_s z_en_dnh_t;
struct z_en_dnh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ unsigned short statf;
    /* 0x190 */ unsigned char* msge_dat;
    /* 0x194 */ long msge_ptr;
    /* 0x198 */ short count;
    /* 0x19A */ short timer;
    /* 0x19C */ short wink_tmr;
    /* 0x19E */ short wink_cnt;
    /* 0x1A0 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x1A4 */ s_xyz joint[2][2];
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_EN_DNH__ */
