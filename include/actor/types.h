#ifndef __Z64OVL_ACTOR_TYPES_INCLUDED__
#define __Z64OVL_ACTOR_TYPES_INCLUDED__

typedef struct actor_s actor_t;

/* Used for some enemies that break apart into pieces on death. */
typedef struct break_work_s {
    MtxF*     part_base;
    int16_t*  b_id;
    int16_t   part_count;
    uint32_t  shape_base;
    int32_t   mtxfget_flg;
    int32_t   old_joint_no;
} break_work_t;

/* A generic prototype for local actor functions. */
typedef void (actorfunc_t)(actor_t*, global_t*);

/* Actor Categories */
typedef enum actor_cat {
    ACTORCAT_SWITCH,
    ACTORCAT_BG,
    ACTORCAT_PLAYER,
    ACTORCAT_EXPLOSIVE,
    ACTORCAT_NPC,
    ACTORCAT_ENEMY,
    ACTORCAT_PROP,
    ACTORCAT_ITEM,
    ACTORCAT_MISC,
    ACTORCAT_BOSS,
    ACTORCAT_DOOR,
    ACTORCAT_CHEST,
    ACTORCAT_COUNT
} Z64OVL_ACTOR_CATEGORY;

typedef enum target_range {
    ZTGT_RANGE_A,
    ZTGT_RANGE_B,
    ZTGT_RANGE_C,
    ZTGT_RANGE_D,
    ZTGT_RANGE_E,
    ZTGT_RANGE_F,
    ZTGT_RANGE_G,
    ZTGT_RANGE_H,
    ZTGT_RANGE_I,
    ZTGT_RANGE_P,
    ZTGT_RANGE_COUNT
} Z64OVL_Z_TARGET_RANGE;

/* Special Actor Flags */
#define ACTORFLAG_NOP                 (0)                             /* No operations. */
#define ACTORFLAG_CAN_TARGET          (1)                             /* Can be Z-Targeted. */
#define ACTORFLAG_TARGET              ACTORFLAG_CAN_TARGET            /* Can be Z-Targeted; Target is enabled. */
#define ACTORFLAG_FIGHT               ((1 << 2) | ACTORFLAG_TARGET)   /* Target is enabled, plays danger music if using ACTORCAT_ENEMY. */
#define ACTORFLAG_TALK                ((1 << 3) | ACTORFLAG_TARGET)   /* Target is enabled, enable speak command. */
#define ACTORFLAG_ALWAYS_UPDATE       (1 << 4)                        /* Update function always runs, even if the camera isn't focusing on the actor. */
#define ACTORFLAG_ALWAYS_DRAW         (1 << 5)                        /* Draw function always runs, even if the camera isn't focusing on the actor. */
#define ACTORFLAG_NO_CULL_FLAG        (1 << 6)                        /* Outside of culling range. */
#define ACTORFLAG_INVISIBLE           (1 << 7)                        /* Is invisible. */
#define ACTORFLAG_TALKING_NOW         (1 << 8)                        /* Currently speaking. */
#define ACTORFLAG_CAN_HOOKSHOT_GRAB   (1 << 9)                        /* Can be grappled with the hookshot, if collider is set properly. */
#define ACTORFLAG_CAN_HOOKSHOT        (1 << 10)                       /* Can be hookshot to, if collider is set properly. */
#define ACTORFLAG_ZOMBI               (1 << 11)                       /* */
#define ACTORFLAG_NO_QUAKE            (1 << 12)                       /* Not affected by the screen shaking. (i.e. Megaton Hammer Earthquake) */
#define ACTORFLAG_CARRIED_HOOKSHOT    (1 << 13)                       /* Is currently being pulled by the hookshot. */
#define ACTORFLAG_ARROW_CARRY         (1 << 14)                       /* */
#define ACTORFLAG_ARROW_CARRY_NOW     (1 << 15)                       /* */
#define ACTORFLAG_FORCE_TALK          (1 << 16)                       /* Force an unavoidable conversation. */
#define ACTORFLAG_CARRY_ANGLE_SET     (1 << 17)                       /* */
#define ACTORFLAG_ELF_MAIL            ((1 << 18) | ACTORFLAG_TARGET)  /* */
#define ACTORFLAG_SFX_PLAYER          (1 << 19)                       /* Set sound effect type. (Player) */
#define ACTORFLAG_SFX_SYSTEM          (1 << 20)                       /* Set sound effect type. (System) */
#define ACTORFLAG_SFX_FIXED           (1 << 21)                       /* Set sound effect type. (Fixed) */
#define ACTORFLAG_MAP_LIGHT_MODE      (1 << 22)                       /* Terrain Type Lighting Flag */
#define ACTORFLAG_THROW_ONLY          (1 << 23)                       /* When picked up, you can only throw--not drop. */
#define ACTORFLAG_BODY_HIT            (1 << 24)                       /* */
#define ACTORFLAG_OKARINA_NO_STOP     (1 << 25)                       /* */
#define ACTORFLAG_CAN_PRESS_SWITCH    (1 << 26)                       /* Can activate floor switches. */
#define ACTORFLAG_NO_TARGET_LOCK      (1 << 27)                       /* */
#define ACTORFLAG_SFX_TIMER           (1 << 28)                       /* Set sound effect type. (Timer) */

/* BGcheck Flags */
#define ENVIRONMENT_INFO_GROUND       (1)                             /* Landing */
#define ENVIRONMENT_INFO_LANDING      (1 << 1)                        /* Moment Landed */
#define ENVIRONMENT_INFO_GROUND_LEAVE (1 << 2)                        /* Moment Ground Left */
#define ENVIRONMENT_INFO_WALL         (1 << 3)                        /* Wall Collision */
#define ENVIRONMENT_INFO_ROOF         (1 << 4)                        /* Ceiling Collision */
#define ENVIRONMENT_INFO_WATER        (1 << 5)                        /* In Water */
#define ENVIRONMENT_INFO_WATER_DIVE   (1 << 6)                        /* Moment Water Hit */
#define ENVIRONMENT_INFO_GROUND_HIT   (1 << 7)                        /* Floor Collision */
#define ENVIRONMENT_INFO_SANDWICH     (1 << 8)                        /* Caught Between Ceiling & Floor */
#define ENVIRONMENT_INFO_FRONT_WALL   (1 << 9)                        /* (Player Exclusive) */
#define BGCHECK_WALL                  (1)
#define BGCHECK_ROOF                  (1 << 1)
#define BGCHECK_GROUND                (1 << 2)
#define BGCHECK_GROUND_DOWN_SP_SET    (1 << 3)
#define BGCHECK_GROUND_LEAVE_SP_CLR   (1 << 4)
#define BGCHECK_WALL_HIT_CONTINUE     (1 << 5)
#define BGCHECK_WALL_HIT_CONTINUE     (1 << 5)
#define BGCHECK_RIPPLE_NOSET          (1 << 6)
#define BGCHECK_WALL_LINE_CHECK_OFF   (1 << 7)

/* Damage Color / Properties */
#define DMG_COLOR_BLUE                (0x0000)
#define DMG_COLOR_RED                 (0x4000)
#define DMG_COLOR_WHITE               (0x8000)
#define DMG_PROP_OPA                  (0x0000)
#define DMG_PROP_XLU                  (0x2000)

/* Actor Overlay Initialization Variables */
typedef struct actor_init_s {
    int16_t              number;          /* Actor Number */
    uint8_t              category;        /* Actor Category */
    int8_t               room;            /* Room Index (-1 means actor won't despawn on room change.) */
    uint32_t             flags;           /* Special Actor Flags */
    int16_t              object;          /* Object Table Allocation Index */
    int32_t              instance_size;   /* Instance Size */
    void*                constructor;     /* Constructor */
    void*                destructor;      /* Destructor */
    void*                update;          /* Main Function */
    void*                draw;            /* Draw Function */
} actor_init_t;

typedef struct actor_shape {        /* Actor Shape Substruct */
    vec3s_t rotation;                     /* Current Rotation */
    int16_t anime_n;                      /* Animation Count */
    float   offset_y;                     /* Y Axis Correction */
    void*   shadow_draw;                  /* Shadow Draw Function */
    float   shadow_radius;                /* Shadow Radius */
    uint8_t shadow_alpha;                 /* Shadow Alpha Parameter */
    uint8_t foot_is_on_ground;            /* On Ground Flag */
    vec3f_t foot_left;                    /* Left Foot Position */
    vec3f_t foot_right;                   /* Right Foot Position */
} actor_shape_t;

typedef struct collider_status {    /* Collider Status Substruct */
    void*   damage_table;                 /* Battle Table / Damage Information */
    vec3f_t displacement;                 /* Amount to correct velocity by when colliding into a body */
    int16_t radius;                       /* Radius */
    int16_t height;                       /* Height */
    uint8_t Offset;                       /* Offset */
    uint8_t mass;                         /* Mass */
    uint8_t health;                       /* Health */
    uint8_t damage;                       /* Damage Dealt, Decrement Health by this amount. */
    uint8_t damage_effect;                /* Elemental Damage Effect; Stored in a damage chart. */
    uint8_t hitbox_effect;                /* Stores what effect should occur when AT connects with an AC */
    uint8_t hurtbox_effect;               /* Stores what effect should occur when AC is touched by an AT */
} collider_status_t;

struct actor_s {
    int16_t             number;                     /* Actor Number */
    uint8_t             category;                   /* Actor Category */
    int8_t              room;                       /* Room Index (-1 means actor won't despawn on room change.) */
    uint32_t            flags;                      /* Special Actor Flags */
    pos_rot_t           home;                       /* Initial Spawn Parameters; "home" position. */
    int16_t             variable;                   /* Actor Variable */
    int8_t              object_index;               /* Object Table Allocation Index */
    int8_t              target_range_type;          /* Z64OVL_Z_TARGET_RANGE */
#ifdef GAME_MAJORA
    uint16_t            schedule;                   /* Time-Based Event Flag */
    pos_rot_t           world;                      /* Position and Rotation relative to the map or world. */
    int8_t              cutscene;                   /* Referenced on Actor Spawn, courtesy of /zeldaret/mm; Originally arg_data2 */
    int8_t              unk_sfx_flag;               /* Related to actor_sfx */
    pos_rot_t           eye;                        /* Position to Focus Camera on (Z-Target) */
    uint16_t            actor_sfx;                  /* Actor Sound Effect (Relative to Actor Location) */
#elif GAME_OCARINA
    uint16_t            actor_sfx;                  /* Actor Sound Effect (Relative to Actor Location) */
    pos_rot_t           world;                      /* Position and Rotation relative to the map or world. */
    pos_rot_t           eye;                        /* Position to Focus Camera on (Z-Target) */
#endif /* MAJORA */
    float               target_y_offset;            /* The Y offset of the Z-Target Arrow */
    vec3f_t             scale;                      /* Actor Scale */
    vec3f_t             velocity;                   /* Velocity */
    float               speed;                      /* Speed (X and Z axes) */
    float               gravity;                    /* Gravity */
    float               min_vel_y;                  /* Minimum Velocity (Y axis) */
    void*               wall_poly_info;             /* Wall Polygon (Actor is touching) */
    void*               floor_poly_info;            /* Floor Polygon (Actor is over or touching) */
    uint8_t             wall_poly_source;           /* Complex Poly Surface Source */
    uint8_t             floor_poly_source;          /* Complex Poly Surface Source */
    int16_t             wall_yaw;                   /* Rotation Towards Wall (Y) */
    float               ground_y;                   /* Height of Floor */
    float               water_y;                    /* Distance to Water Surface */
    uint16_t            bgcheck_flags;              /* Bitfield Determining Collision State */
    int16_t             rot_towards_link_y;         /* Y rotation to face Player */
    float               dist_from_link_xyz_squared; /* Square Distance From Player (dist_xz^2) + (dist_y^2)  */
    float               dist_from_link_xz;          /* Distance From Player (X and Z axes) */
    float               dist_from_link_y;           /* Distance From Player (Y axis) */
    collider_status_t   collider_info;              /* Collision Check / Collider Status */
    actor_shape_t       shape;                      /* Actor Shape */
    vec3f_t             cam_position;               /* Camera Position */
    float               cam_w;                      /* W component of Camera Position */
    float               cam_uncull_distance;        /* Draw Distance */
    float               cam_uncull_scale;           /* Camera Clipping Scale */
    float               cam_uncull_height;          /* Camera_Clipping Height */
    vec3f_t             world_old;                  /* Coordinates on the previous frame */
    uint8_t             is_targeted;                /* Z-Target Flag */
    uint8_t             target_timer;               /* TODO: Undocumented */
    uint16_t            text_id;                    /* Actor Message ID */
    int16_t             stop_timer;                 /* Used in "ReDead Freeze Attack" */
    uint16_t            damage_color_params;        /* Damage & Freeze Fog Data (Damage Color) -- DMG_COLOR / DMG_PROP */
    uint8_t             damage_color_timer;         /* Damage Color Effect Timer */
    uint8_t             is_drawn;                   /* Determines if Actor Instance should be processed. */
    uint8_t             unk_item_bit;               /* TODO: Undocumented */
    uint8_t             fairy_info;                 /* Fairy Info Message ID, Enemy Message ID */
    struct actor_s*     attached_parent;            /* Interfacing Actor */
    struct actor_s*     attached_child;             /* Actor to Interface With */
    struct actor_s*     prev;                       /* Previous Actor */
    struct actor_s*     next;                       /* Next Actor */
    void*               constructor;                /* Constructor / Initialization Function */
    void*               destructor;                 /* Destructor / Destroy Function */
    void*               update;                     /* Update Function */
    void*               draw;                       /* Draw Function */
    void*               code_entry;                 /* Code Entry / dfltbl Entry */
#if defined(DEBUG_ROM)
    uint8_t         debug_ex[16];              /* Debug Extended Instance Padding */
#endif
};

typedef struct {
    actor_t     actor;
    int32_t     bg_dyna_index;
    float       powerF;
    float       powerY;
    int16_t     power_angle_y;
    uint32_t    func_mask;
    uint8_t     status;
} actor_dynapoly_t;

typedef struct {                                              /* data for z-target info (for motion blur effect) */
    /* 0x00 */ vec3f_t position;
    /* 0x0C */ float radius;
    /* 0x10 */ rgba8_t color;
    /* 0x14 */
} target_context_entry_t, TargetContextEntry;

typedef struct {
    /* 0x00 */ int8_t index;                                             /* current index to use for blur effect */
    /* 0x04 */ target_context_entry_t data[3];
    /* 0x40 */
} target_t;

typedef struct target_context_s {
    /* 0x00 */ vec3f_t navi_position;                                     /* Target location for Navi to target */
    /* 0x0C */ vec3f_t target_position;                                   /* Z-Target target position */
    /* 0x18 */ rgbaf_t navi_inner_color;                                  /* Inner color of Navi (Is not read while targeting) */
    /* 0x28 */ rgbaf_t navi_outer_color;                                  /* Outer color of Navi (Is not read while targeting) */
    /* 0x38 */ actor_t* navi_hover_actor;                             /* Available actor to target (noticed by Navi) */
    /* 0x3C */ actor_t* target_actor;                                 /* Actor currently targeted */
    /* 0x40 */ float move_ratio;                                          /* Navi's ratio between target actors */
    /* 0x44 */ float target_radius;                                       /* Radius of Z-Target reticule */
    /* 0x48 */ int16_t target_timer;                                      /* Animation (related) Timer */
    /* 0x4A */ uint8_t target_actor_cat;                                  /* Targeted actor category */
    /* 0x4B */ uint8_t reticle_rotation;                                  /* Rotation % of z-target reticle. 0 is the exiting state. */
    /* 0x4C */ target_t target;                                       /* Tripple-buffered data for z-target info (for motion blur effect) */
    /* 0x8C */ actor_t* anchor_request_actor;                         /* TODO: More investigation required. */
    /* 0x90 */ actor_t* enemy_bgm_actor;                              /* Actor responsible for starting battle music. */
    /* 0x94 */ actor_t* secondary_actor;                              /* Secondary available actor to target where applicable. (Next to currently targeted actor) */
    /* 0x98 */
} target_context_t, TargetContext;

typedef struct {
    /* 0x00 */ uint32_t swch;                                             /* Switch Flags */
    /* 0x04 */ uint32_t temp_swch;                                        /* Temporary Switch Flags */
    /* 0x08 */ uint32_t sw_c1;		                                         /* Check switch bit (0-31) */
    /* 0x0C */ uint32_t sw_c2;		                                         /* Check switch bit (32-63) */
    /* 0x10 */ uint32_t chest;		                                         /* Chest Flags */
    /* 0x14 */ uint32_t room_clear;                                       /* Clear Flags */
    /* 0x18 */ uint32_t temp_clear;                                       /* Temporary Clear Flags */
    /* 0x1C */ uint32_t collect;                                          /* Collectible Flags */
    /* 0x20 */ uint32_t temp_collect;                                     /* Temporary Collectible Flags */
    /* 0x24 */
} actor_context_flags_t;

typedef struct {
    /* 0x00 */ uint8_t* timg;                                             /* Texture Image */
    /* 0x04 */ int16_t x;                                                 /* X Offset */
    /* 0x06 */ int16_t y;                                                 /* Y Position */
    /* 0x08 */ uint8_t width;                                             /* Texture Image Width */
    /* 0x09 */ uint8_t height;                                            /* Texture Image Height */
    /* 0x0A */ uint8_t timer;                                             /* Current number of frames left to display the texture */
    /* 0x0B */ uint8_t wait_timer;                                        /* Stops timer from counting down, while counting down until 0 */
    /* 0x0C */ int16_t alpha;                                             /* Texture Alpha (IA Texture) When this is set to 0, the struct deinitializes */
    /* 0x0E */ int16_t intensity;                                         /* Texture Intensity (IA Texture)*/
    /* 0x10 */
} titlecard_context_t, TitleCardContext;

typedef struct {
    /* 0x00 */ int32_t num;                                               /* Number of actors loaded (of a particular category) */
    /* 0x04 */ actor_t* actor;                                        /* Pointer to the first actor (of a particular category) */
    /* 0x08 */
} actor_context_entry_t, ActorListEntry;

typedef struct actor_context_s {
    /* 0x000 */ uint8_t enemy_damage_flash_timer;                       /* Screen flashes white when this reaches 0 */
    /* 0x001 */ uint8_t finish_type;                                    /* Related to above */
    /* 0x002 */ uint8_t hammer_quake;                                   /* Window of Opportunity (in frames) to flip over an enemy where applicable.*/
    /* 0x003 */ uint8_t lens_is_active;                                 /* Lens of Truth Flag (Boolean; Toggle) */
    /* 0x004 */ uint8_t _pad;                                           /* Padding */
    /* 0x006 */ int16_t shield_magic_timer;                             /* TODO: More investigation required. */
    /* 0x008 */ uint8_t actor_num;                                      /* Total number of actors */
    /* 0x00C */ actor_context_entry_t actor_category[ACTORCAT_COUNT];   /* Actor list (by category) */
    /* 0x06C */ target_context_t target_context;                        /* Z-Target Context */
    /* 0x104 */ actor_context_flags_t flags;                            /* Flags  */
    /* 0x128 */ titlecard_context_t title_context;                      /* Boss Title Card Context */
    /* 0x138 */ void* elf_message;                                      /* Navi ("Fairy") message data pointer */
    /* 0x13C */ void* absolute_magic_field;
    /* 0x140 */
} actor_context_t;


#endif /* __Z64OVL_ACTOR_TYPES_INCLUDED__ */