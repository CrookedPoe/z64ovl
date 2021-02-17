#ifndef __Z64OVL_Z_EN_TEST__
#define __Z64OVL_Z_EN_TEST__

#include "../../actor/types.h"
#include "../../skelanime/types.h"
#include "../../collision_check/types.h"

#define Z_EN_TEST_ACTOR_NUMBER     0x0002
#define Z_EN_TEST_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TEST_OBJECT_NUMBER    0x0032
#define Z_EN_TEST_ACTOR_FLAGS      (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

enum z_en_test_mode_e {
    EN_TEST_MODE_BEFORE_DROP
    , EN_TEST_MODE_DROP
    , EN_TEST_MODE_REV
    , EN_TEST_MODE_NOBI
    , EN_TEST_MODE_JUMP_MOVE
    , EN_TEST_MODE_FRONT_DOWN
    , EN_TEST_MODE_BACK_DOWN
    , EN_TEST_MODE_BREAK
    , EN_TEST_MODE_FRONT_DAMAGE
    , EN_TEST_MODE_BACK_DAMAGE
    , EN_TEST_MODE_WAIT
    , EN_TEST_MODE_PARALYZE
    , EN_TEST_MODE_LANDING
    , EN_TEST_MODE_FORWARD
    , EN_TEST_MODE_SEARCH_ROT
    , EN_TEST_MODE_MOVE_TO_PLAYER_FRONT
    , EN_TEST_MODE_KIRU
    , EN_TEST_MODE_KIRU2
    , EN_TEST_MODE_KIRU_END
    , EN_TEST_MODE_HIRUMU
    , EN_TEST_MODE_BACK_JUMP
    , EN_TEST_MODE_DEFEND_IN
    , EN_TEST_MODE_DEFEND_OUT
    , EN_TEST_MODE_JUMP_ATTACK
    , EN_TEST_MODE_SIDE_STEP
    , EN_TEST_MODE_LAST_INDEX
};

typedef struct z_en_test_s z_en_test_t;
struct z_en_test_s {                                               /* Stalfos */
    vec3s_t                 En_Mag[10];                            /* En_Mag */
    z64_skelanime_t         skelanime;                             /* Main Skeleton */
    vec3s_t                 now_joint_a[61];                       /* limbDrawTable A */
    vec3s_t                 morf_joint_a[61];                      /* transitionTbl A */
    z64_skelanime_t         skelanime_upper;                       /* Upper Body */
    vec3s_t                 now_joint_b[61];                       /* limbDrawTable B */
    vec3s_t                 morf_joint_b[61];                      /* transitionTbl B */
    uint8_t                 mode;                                  /* Action State */
    void                    (*state)(z_en_test_t*, z64_global_t*); /* Main Process */
    vec3s_t                 neck_angle;                            /* Head Rotation */
    vec3s_t                 neck_angle_speed;                      /* Head Turning Speed */
    uint8_t                 combo_cnt_old;                         /* Old Combo Count */
    uint8_t                 combo_cnt_trg;                         /* Combo Count (Trigger?) */
    uint8_t                 gard_sw;                               /* Guard Flag? */
    int16_t                 timer;                                 /* Timer */
    uint8_t                 damage_fx;                             /* Damage Special FX */
    int32_t                 last_drop_speed;                       /* Falling Speed (Dropping to floor) */
    int32_t                 mode_timer;                            /* Action State Timer */
    float                   spd_wk;                                /* Walk Speed? */
    z64_break_work_t        break_work;                            /* Used when breaking apart. */
    int8_t                  attack_flag;                           /* Is Attacking? */
    int32_t                 blure_index;                           /* EffectBlure Index */
    z64_collider_cylinder_t body_collider;                         /* Body Collider Cylinder */
    z64_collider_quad_t     sword_collider;                        /* Sword Collider Quad */
    z64_collider_cylinder_t shield_collider;                       /* Shield Collider Cylinder */
}; /* size = 0x928 */

#endif /* __Z64OVL_Z_EN_TEST__ */