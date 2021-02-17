#ifndef __Z64OVL_Z_EN_ITEM00__
#define __Z64OVL_Z_EN_ITEM00__

#include "../../actor/types.h"
#include "../../collision_check/types.h"

#define Z_EN_ITEM00_ACTOR_NUMBER     0x0015
#define Z_EN_ITEM00_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_ITEM00_OBJECT_NUMBER    0x0001
#define Z_EN_ITEM00_ACTOR_FLAGS      (ACTORFLAG_NOP)

typedef struct z_en_item00_s z_en_item00_t;
struct z_en_item00_s {
    z64_actor_t             actor
    void                    (*state)(z_en_item00_t*, z64_global_t*);
    int16_t                 arg_data2;
    int16_t                 i_flg;
    int16_t                 init_timer;
    int16_t                 flash_timer;
    int16_t                 flash_flam;
    int16_t                 mode_timer
    float                   trg_scale;
    z64_collider_cylinder_t collider_pos;
}; /* size = 0x1AC */

#endif /* __Z64OVL_Z_EN_ITEM00__ */