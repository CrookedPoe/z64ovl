#ifndef __Z64OVL_Z_DEMO_TRE_LGT__
#define __Z64OVL_Z_DEMO_TRE_LGT__

#define Z_DEMO_TRE_LGT_ACTOR_NUMBER     0x00AA
#define Z_DEMO_TRE_LGT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_TRE_LGT_OBJECT_NUMBER    0x000E
#define Z_DEMO_TRE_LGT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_tre_lgt_s z_demo_tre_lgt_t;
struct z_demo_tre_lgt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ FcSkeletonInfo fc_skel;
    /* 0x15C */ int mode;
    /* 0x160 */ unsigned int bl0_alpha;
    /* 0x164 */ unsigned int bl_other_alpha;
    /* 0x168 */ unsigned char status;
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_DEMO_TRE_LGT__ */
