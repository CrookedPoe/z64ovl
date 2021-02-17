#ifndef __Z64OVL_Z_EN_BOM__
#define __Z64OVL_Z_EN_BOM__

#include "../../actor/types.h"
#include "../../collision_check/types.h"

#define Z_EN_BOM_ACTOR_NUMBER     0x0010
#define Z_EN_BOM_ACTOR_CATEGORY   ACTORCAT_EXPLOSIVE
#define Z_EN_BOM_OBJECT_NUMBER    0x0001
#define Z_EN_BOM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_bom_s z_en_bom_t;
struct z_en_bom_s {                                              /* Bomb */
z64_actor_t                actor;                                /* Base Actor*/
z64_collider_cylinder_t    acoc_info;                            /* Cylinder Collider Structure */
z64_collider_jntsph_t      bomb_sph;                             /* Sphere Collider Structure */
z64_collider_jntsph_item_t bomb_elem;                            /* Sphere Collider Elements */
int16_t                    mode_timer;                           /* Bomb Timer */
int16_t                    flash_spd;                            /* Flash Speed */
float                      env_r;                                /* Environment Color Red Intensity */
uint8_t                    oc_flg;                               /* Bumpbox Collided? */
void                       (*state)(z_en_bom_t*, z64_global_t*); /* Main State Process */
}; /* size = 0x0208 */

#endif /* __Z64OVL_Z_EN_BOM__ */
