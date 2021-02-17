#ifndef __Z64OVL_Z_EN_GANON_MANT__
#define __Z64OVL_Z_EN_GANON_MANT__

#include "../../actor/types.h"

#define Z_EN_GANON_MANT_ACTOR_NUMBER     0x016F
#define Z_EN_GANON_MANT_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_GANON_MANT_OBJECT_NUMBER    0x0001
#define Z_EN_GANON_MANT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ganon_mant_s z_en_ganon_mant_t;
struct z_en_ganon_mant_s {
    z64_actor_t actor;
    struct {
        vec3f_t base_pos;
        vec3f_t pos[12];
        vec3f_t ang[12];
        vec3f_t spd[12];
        uint8_t shadow_off[12];
    } mant[12];
    float       ground_y;
    float       back;
    float       nami;
    float       wide;
    float       hand_L;
    float       hand_R;
    float       hand_LR;
    float       G;
    float       base_ya;
    float       body_scale;
    vec3f_t     kata_posR;
    vec3f_t     kata_posL;
    vec3f_t     hand_posR;
    vec3f_t     hand_posL;
    uint8_t     break_on;
    uint8_t     calc_flag;
    uint8_t     move_count;
}; /* size = 0x1708 */

#endif /* __Z64OVL_Z_EN_GANON_MANT__ */
