#ifndef __Z64OVL_Z_EN_ZORAEGG__
#define __Z64OVL_Z_EN_ZORAEGG__

#define Z_EN_ZORAEGG_ACTOR_NUMBER     0x01F5
#define Z_EN_ZORAEGG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ZORAEGG_OBJECT_NUMBER    0x01CE
#define Z_EN_ZORAEGG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zoraegg_s z_en_zoraegg_t;
struct z_en_zoraegg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[7];
    /* 0x1B2 */ s_xyz joint2[7];
    /* 0x1DC */ ACTOR* egg;
    /* 0x1E0 */ float egg_scale;
    /* 0x1E4 */ float sound;
    /* 0x1E8 */ short egg_anime_frame;
    /* 0x1EA */ unshort flag;
    /* 0x1EC */ unchar draw_mode;
    /* 0x1ED */ unchar egg_alpha;
    /* 0x1EE */ unchar scale_1;
    /* 0x1EF */ unchar scale_2;
    /* 0x1F0 */ unshort parts;
    /* 0x1F2 */ Eye_Anime eye_anime;
    /* 0x1F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_EN_ZORAEGG__ */
