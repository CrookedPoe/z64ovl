#ifndef __Z64OVL_Z_DEMO_TRE_LGT__
#define __Z64OVL_Z_DEMO_TRE_LGT__

#define Z_DEMO_TRE_LGT_ACTOR_NUMBER     0x005C
#define Z_DEMO_TRE_LGT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_TRE_LGT_OBJECT_NUMBER    0x000C
#define Z_DEMO_TRE_LGT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_tre_lgt_s z_demo_tre_lgt_t;
struct z_demo_tre_lgt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ FcSkeletonInfo fc_skel;
    /* 0x164 */ int mode;
    /* 0x168 */ unsigned int bl0_alpha;
    /* 0x16C */ unsigned int bl_other_alpha;
    /* 0x170 */ unsigned char status;
    /* 0x174 */ int anim_type;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_DEMO_TRE_LGT__ */
