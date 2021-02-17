#ifndef __Z64OVL_Z_EN_MT_TAG__
#define __Z64OVL_Z_EN_MT_TAG__

#define Z_EN_MT_TAG_ACTOR_NUMBER     0x0128
#define Z_EN_MT_TAG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_MT_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_MT_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mt_tag_s z_en_mt_tag_t;
struct z_en_mt_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ACTOR* goron[4];
    /* 0x158 */ unsigned short statf;
    /* 0x15A */ short timer;
    /* 0x15C */ short count;
    /* 0x160 */ int old_anim;
    /* 0x164 */ int re_start;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_EN_MT_TAG__ */
