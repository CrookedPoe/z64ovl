#ifndef __Z64OVL_Z_BOSS_GOMA__
#define __Z64OVL_Z_BOSS_GOMA__

#include "../../actor/types.h"
#include "../../skelanime/types.h"
#include "../../collision_check/types.h"

#define Z_BOSS_GOMA_ACTOR_NUMBER     0x0028
#define Z_BOSS_GOMA_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_GOMA_OBJECT_NUMBER    0x001C
#define Z_BOSS_GOMA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_goma_s z_boss_goma_t;
struct z_boss_goma_s {
    z64_actor_t                actor;
    z64_skelanime_t            skeleton;
    void                       (*process)(z_boss_goma_t*, z64_global_t*);
    int16_t                    work[30];
    int16_t                    demo_mode;
    int16_t                    timer[10];
    int16_t                    aim_angle_y;
    float                      fwork[30];
    vec3f_t                    tail_pos;
    vec3f_t                    tail_base_pos;
    vec3f_t                    r_foot_pos;
    vec3f_t                    l_foot_pos;
    vec3f_t                    demo_camera_eye;
    vec3f_t                    demo_camera_way;
    vec3f_t                    fire_pos[100];
    uint8_t                    skel_disp[100];
    z64_collider_jntsph_t      acoc_jntsph_info;
    z64_collider_jntsph_item_t jntsph_elem[13];
}; /* size = 0x0B1C */

#endif /* __Z64OVL_Z_BOSS_GOMA__ */
