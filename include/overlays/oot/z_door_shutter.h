#ifndef __Z64OVL_Z_DOOR_SHUTTER__
#define __Z64OVL_Z_DOOR_SHUTTER__

#include "../../actor/types.h"

#define Z_DOOR_SHUTTER_ACTOR_NUMBER     0x002E
#define Z_DOOR_SHUTTER_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_DOOR_SHUTTER_OBJECT_NUMBER    0x0001
#define Z_DOOR_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_door_shutter_s z_door_shutter_t;
struct z_door_shutter_s {
    z64_actor_dynapoly_t moveBG;
    int16_t              work[3];
    uint8_t              type;
    uint8_t              status_type;
    uint8_t              shape_type;
    int8_t               change_bank_ID;
    int8_t               key_timer;
    int8_t               timer;
    float                yari_ratio;
    void                 (*process)(z_door_shutter_t*, z64_global_t*);
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_DOOR_SHUTTER__ */
