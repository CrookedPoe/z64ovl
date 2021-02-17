#ifndef __Z64OVL_Z_EN_HOLL__
#define __Z64OVL_Z_EN_HOLL__

#include "../../actor/types.h"

#define Z_EN_HOLL_ACTOR_NUMBER     0x0023
#define Z_EN_HOLL_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_EN_HOLL_OBJECT_NUMBER    0x0001
#define Z_EN_HOLL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_holl_s z_en_holl_t;
struct z_en_holl_s {
    z64_actor_t actor;
    int16_t     mask_alpha;
    uint8_t     face;
    uint8_t     now_change_flg;
    void        (*process)(z_en_holl_t*, z64_global_t*);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_HOLL__ */
