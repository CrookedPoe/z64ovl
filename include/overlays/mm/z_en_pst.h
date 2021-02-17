#ifndef __Z64OVL_Z_EN_PST__
#define __Z64OVL_Z_EN_PST__

#define Z_EN_PST_ACTOR_NUMBER     0x01F2
#define Z_EN_PST_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_PST_OBJECT_NUMBER    0x01CB
#define Z_EN_PST_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_en_pst_s z_en_pst_t;
struct z_en_pst_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned char schedule;
    /* 0x1DC */ unsigned char* msge_dat;
    /* 0x1E0 */ long msge_ptr;
    /* 0x1E4 */ s_xyz joint[3][2];
    /* 0x208 */ unsigned short statf;
    /* 0x20A */ short timer;
    /* 0x20C */ short count;
    /* 0x20E */ short demo_cnt;
    /* 0x210 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x214 */ int put_item;
    /* 0x218 */ int get_item;
    /* 0x21C */ int toukan_f;
}; /* size = 0x0220 */

#endif /* __Z64OVL_Z_EN_PST__ */
