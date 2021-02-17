#ifndef __Z64OVL_Z_EN_NWC__
#define __Z64OVL_Z_EN_NWC__

#define Z_EN_NWC_ACTOR_NUMBER     0x009D
#define Z_EN_NWC_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NWC_OBJECT_NUMBER    0x00F2
#define Z_EN_NWC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nwc_s z_en_nwc_t;
struct z_en_nwc_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ signed char bank_niw;
    /* 0x249 */ signed char bank_nwc;
    /* 0x24A */ Eye_Anime eye_anime;
    /* 0x250 */ ACTOR* hs;
    /* 0x254 */ short move_timer;
    /* 0x256 */ short work_s[2];
    /* 0x25A */ short move_mode;
    /* 0x25C */ unshort flag;
    /* 0x25E */ short wing_y;
    /* 0x260 */ short wing_z;
    /* 0x262 */ short neck;
    /* 0x264 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0268 */

#endif /* __Z64OVL_Z_EN_NWC__ */
