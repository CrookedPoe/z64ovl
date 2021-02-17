#ifndef __Z64OVL_Z_EN_HORSE_LINK_CHILD__
#define __Z64OVL_Z_EN_HORSE_LINK_CHILD__

#define Z_EN_HORSE_LINK_CHILD_ACTOR_NUMBER     0x0054
#define Z_EN_HORSE_LINK_CHILD_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_LINK_CHILD_OBJECT_NUMBER    0x007D
#define Z_EN_HORSE_LINK_CHILD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_horse_link_child_s z_en_horse_link_child_t;
struct z_en_horse_link_child_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ EN_HLC_MODE mode;
    /* 0x148 */ EN_HLC_ANIM_TYPE anim_type;
    /* 0x14C */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1DC */ EPONA2 epona2;
    /* 0x1E4 */ unsigned char mepachi_index;
    /* 0x1E8 */ int sound_cnt;
    /* 0x1EC */ ClObjPipe oc_pipe_info;
    /* 0x238 */ ClObjJntSph oc_jntsph_info;
    /* 0x258 */ ClObjJntSphElem sph[1];
    /* 0x298 */ int old_event006;
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_EN_HORSE_LINK_CHILD__ */
