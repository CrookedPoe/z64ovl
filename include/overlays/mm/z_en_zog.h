#ifndef __Z64OVL_Z_EN_ZOG__
#define __Z64OVL_Z_EN_ZOG__

#include "../../actor/types.h"
#include "../../skelanime/types.h"
#include "../../collision_check/types.h"

#define Z_EN_ZOG_ACTOR_NUMBER     0x0224
#define Z_EN_ZOG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOG_OBJECT_NUMBER    0x0206
#define Z_EN_ZOG_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_zog_s z_en_zog_t;
struct z_en_zog_s {
    z64_actor_t             actor;
    z64_collider_cylinder_t pipe_info;
    z64_skelanime_t         skeleton;
    vec3s_t                 joint1[23];
    vec3s_t                 joint2[23];
    Path_Info*              path_data;
    int32_t                 path_now;
    vec3f_t                 kosi;
    int16_t                 now_mode;
    int16_t                 mode;
    int16_t                 motion;
    int16_t                 now_motion;
    int16_t                 anime;
    int16_t                 dousa;
    int16_t                 puka;
    uint16_t                flag;
    int16_t                 event_list[7];
    int16_t                 call;
    int16_t                 eye;
    int16_t                 mouth;
    int16_t                 eye_timer;
    int16_t                 alpha;
    int16_t                 player_sound_timer;
    void                    (*process)(z_en_zog_t*, z64_global_t*);
}; /* size = 0x032C */

#endif /* __Z64OVL_Z_EN_ZOG__ */
