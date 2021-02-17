#ifndef __Z64OVL_Z_DM_TAG__
#define __Z64OVL_Z_DM_TAG__

#define Z_DM_TAG_ACTOR_NUMBER     0x02A6
#define Z_DM_TAG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_TAG_OBJECT_NUMBER    0x0001
#define Z_DM_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_dm_tag_s z_dm_tag_t;
struct z_dm_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned short statf;
    /* 0x18E */ unsigned char schedule;
    /* 0x190 */ unsigned char* msge_dat;
    /* 0x194 */ long msge_ptr;
    /* 0x198 */ ACTOR* enmy1;
    /* 0x19C */ ACTOR* enmy2;
    /* 0x1A0 */ short timer;
    /* 0x1A2 */ short count;
    /* 0x1A4 */ short demo_cnt;
    /* 0x1A8 */ int (*evn_proc)(/* ECOFF does not store param types */);
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_DM_TAG__ */
