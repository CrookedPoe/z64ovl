#ifndef __Z64OVL_Z_EN_SCENE_CHANGE__
#define __Z64OVL_Z_EN_SCENE_CHANGE__

#define Z_EN_SCENE_CHANGE_ACTOR_NUMBER     0x0024
#define Z_EN_SCENE_CHANGE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_SCENE_CHANGE_OBJECT_NUMBER    0x0040
#define Z_EN_SCENE_CHANGE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_scene_change_s z_en_scene_change_t;
struct z_en_scene_change_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EN_SCENE_CHANGE__ */
