#ifndef __Z64OVL_Z_ARMS_HOOK__
#define __Z64OVL_Z_ARMS_HOOK__

#include "../../actor/types.h"
#include "../../collision_check/types.h"

#define Z_ARMS_HOOK_ACTOR_NUMBER     0x0066
#define Z_ARMS_HOOK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ARMS_HOOK_OBJECT_NUMBER    0x0014
#define Z_ARMS_HOOK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_arms_hook_s z_arms_hook_t;
struct z_arms_hook_s {
    z64_actor_t         actor;
    z64_collider_quad_t at_info;
    z64_quad_pos_t      sword_pos;
    vec3f_t             BGcheck_pos;
    vec3f_t             old_BGcheck_pos;
    z64_actor_t*        carry_actor;
    vec3f_t             carry_offset;
    int16_t             timer;
    void                (*state)(z_arms_hook_t*, z64_global_t*);
}; /* size = 0x0218 */

#endif /* __Z64OVL_Z_ARMS_HOOK__ */
