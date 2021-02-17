#ifndef __Z64OVL_Z_PLAYER__
#define __Z64OVL_Z_PLAYER__

#define Z_EN_PLAYER_ACTOR_NUMBER     0x0000
#define Z_EN_PLAYER_ACTOR_CATEGORY   ACTORCAT_PLAYER

/* Item Change Flags */
#define PLAYER_FLAG_CHANGE_TUNIC     (1)
#define PLAYER_FLAG_CHANGE_SHIELD    (1 << 1)
#define PLAYER_FLAG_CHANGE_BOOTS     (1 << 2)
#define PLAYER_FLAG_CHANGE_SWORD     (1 << 3)

/* Limbs */
#define PLAYER_LIMB_ROOT            (0 + 1)
#define PLAYER_LIMB_WAIST           (1 + 1)
#define PLAYER_LIMB_AFFECTOR_LOW    (2 + 1)
#define PLAYER_LIMB_THIGH_RIGHT     (3 + 1)
#define PLAYER_LIMB_SHIN_RIGHT      (4 + 1)
#define PLAYER_LIMB_FOOT_RIGHT      (5 + 1)
#define PLAYER_LIMB_THIGH_LEFT      (6 + 1)
#define PLAYER_LIMB_SHIN_LEFT       (7 + 1)
#define PLAYER_LIMB_FOOT_LEFT       (8 + 1)
#define PLAYER_LIMB_AFFECTOR_HIGH   (9 + 1)
#define PLAYER_LIMB_HEAD            (10 + 1)
#define PLAYER_LIMB_HAT             (11 + 1)
#define PLAYER_LIMB_COLLAR          (12 + 1)
#define PLAYER_LIMB_SHOULDER_LEFT   (13 + 1)
#define PLAYER_LIMB_FOREARM_LEFT    (14 + 1)
#define PLAYER_LIMB_HAND_LEFT       (15 + 1)
#define PLAYER_LIMB_SHOULDER_RIGHT  (16 + 1)
#define PLAYER_LIMB_FOREARM_RIGHT   (17 + 1)
#define PLAYER_LIMB_HAND_RIGHT      (18 + 1)
#define PLAYER_LIMB_SHEATH          (19 + 1)
#define PLAYER_LIMB_TORSO           (20 + 1)

/* Limb Aliases */
#define PLAYER_LIMB_SWORD            PLAYER_LIMB_HAND_LEFT
#define PLAYER_LIMB_NECK             PLAYER_LIMB_HEAD
#define PLAYER_LIMB_CONTROL_LEGS     PLAYER_LIMB_AFFECTOR_LOW
#define PLAYER_LIMB_CONTROL_BODY     PLAYER_LIMB_AFFECTOR_HIGH



enum tunic_index {
    PLAYER_TUNIC_GREEN
    , PLAYER_TUNIC_RED
    , PLAYER_TUNIC_BLUE
    , PLAYER_TUNIC_MAX
};

enum boots_index {
    PLAYER_BOOTS_NORMAL
    , PLAYER_BOOTS_IRON
    , PLAYER_BOOTS_HOVER
    , PLAYER_BOOTS_MAX
};

enum mask_index {
    PLAYER_MASK_NONE
    , PLAYER_MASK_KEATON
    , PLAYER_MASK_SKULL
    , PLAYER_MASK_SPOOKY
    , PLAYER_MASK_BUNNY
    , PLAYER_MASK_GORON
    , PLAYER_MASK_ZORA
    , PLAYER_MASK_GERUDO
    , PLAYER_MASK_TRUTH
    , PLAYER_MASK_MAX
};

enum anime_type {
    PLAYER_ANIME_TYPE_FREE
    , PLAYER_ANIME_TYPE_SHIELD
    , PLAYER_ANIME_TYPE_SHIELD_FREE
    , PLAYER_ANIME_TYPE_LONGSWORD
    , PLAYER_ANIME_TYPE_BOW
    , PLAYER_ANIME_TYPE_BOMB
    , PLAYER_ANIME_TYPE_MAX
};

typedef struct {
    float                       roof_bgcheck_offset_y;
    float                       shape_shadow_size;
    float                       anime_move_scale;
    struct {
        float                   max_high;
        float                   swim_high;
        float                   high_250;
        float                   high_150;
        float                   high_100;
        float                   high_50;
    }                           step_up;
    struct {
        float                   out_surface_y;
        float                   surface_offset_y;
        float                   dive_surface_y;
        float                   deep_end_surface_offset_y;
    }                           water;
    float                       fall_ok_t_ground_high;
    struct {
        float                   init_to_wall_r;
        float                   to_wall_r;
        float                   end_check_y;
        vec3s_t                 endAR_base_translate;
        vec3s_t                 up_base_translate[4];
        vec3s_t                 down_base_translate[4];
        vec3s_t                 side_base_translate[4];
    }                           climb;
    struct {
        uint16_t                voice_age_offset_data;
        uint16_t                SE_age_offset_data;
    }                           sound;
    struct {
        z64_animation_trs_t*    open_chest_cutscene;
        z64_animation_trs_t*    sword_start;
        z64_animation_trs_t*    sword_end;
        struct {
            z64_animation_trs_t* start_a;
            z64_animation_trs_t* start_b;
            z64_animation_trs_t* up[4];
            z64_animation_trs_t* side[2];
            z64_aniamtion_trs_t* end_a[2];
            z64_animation_trs_t* end_b[2];
        }                        climb;
    }                            animation;
} z_player_age_prop_t;

typedef struct {         /* Ability Struct */
    int8_t  tunic;       /* Currently Equipped Tunic */
    int8_t  sword;       /* Currently Equipped Sword, Item ID */
    int8_t  shield;      /* Currently Equipped Shield */
    int8_t  boots;       /* Currently Equipped Boots */
    int8_t  button_id;   /* Currently Accessed Button ID */
    int8_t  item_action; /* Current Ability Action ID (Left Hand?) */
    uint8_t next_action; /* Next Action (when previous is finished) */
    int8_t  boots_old;   /* Boots On Previous Frame (generally the same ID as current) */
    int8_t  item_a_now;  /* Current Ability Action ID (Right Hand?) */
    uint8_t change_flag; /* Ability Change Flag */
} z_player_ability_t;

typedef struct {
    uint8_t       type;               /* */
    uint8_t       next_type;          /* */
    int8_t        item_change_type;   /* */
    uint8_t       anime_type;         /* Sets a group of animations based on an index. */
    struct {
        struct {
            uint8_t left;             /* ID of Item in Left Hand */
            uint8_t right;            /* ID of Item in Right Hand */
        } hand;
        uint8_t     carry;            /* Always 0x12? */
        uint8_t     mask;             /* Currently Equipped Mask ID */
    } item;
    struct {
        struct {
            Gfx**   right;            /* A pointer to a display list pointer. Right Hand. */
            Gfx**   left;             /* A pointer to a display list pointer. Left Hand. */
        } hand;
        Gfx**       carry;            /* A pointer to a display list pointer. */
        Gfx**       waist;            /* A pointer to a display list pointer. Waist. */
    } display_list;
} z_player_shape_t;

typedef struct z_player_s z_player_t, z64_player_t;
struct z_player_s {                                                   /* Link */
    z64_player_t            actor;                                    /* Base Actor */
    z_player_ability_t      ability;                                  /* Ability Struct */
    z_player_shape_t        shape;                                    /* Shape Struct */
    struct {
        uint8_t             flag;                                     /* */
        dma_t               dma;                                      /* */
        OSMesgQueue         mq;                                       /* */
        OSMesg              m;                                        /* */
        char*               segment;                                  /* */
    }                       get_item_shape;                           /* */
    z64_skelanime_t         skelanime;                                /* */
    vec3s_t                 now_joint[24];                            /* */
    vec3s_t                 morf_joint[24];                           /* */
    vec3s_t                 work_joint[24];                           /* */
    struct {
        int16_t             pattern;                                  /* Texture Index */
        int16_t             timer;                                    /* Blink Timer */
    }                       eye_anime;                                /* Eye Animation Substruct */
    struct {
        struct {
            z64_actor_t*    actor;                                    /* */
            pos_rot_t       world;                                    /* */
        }                   left;                                     /* */
        struct {
            z64_actor_t*    actor;                                    /* */
            pos_rot_t       world;                                    /* */
        }                   right;                                    /* */
    }                       catch_hand;                               /* */
    struct {
        struct {
            vec3f_t         pos;                                      /* */
            int16_t         angle_x;                                  /* */
            int16_t         angle_y;                                  /* */
            float           speed_y;                                  /* */
        }                   hat_status[4];                            /* */
    }                       hat;                                      /* */
    struct {
        int8_t              flag;                                     /* */
        int8_t              direction;                                /* */
        int16_t             timer;                                    /* */
        z64_actor_t*        actor;                                    /* */
    }                       door;                                     /* */
    struct {
        int8_t              flag;                                     /* */
        uint16_t            distance_angle_y;                         /* */
        z64_actor_t*        actor;                                    /* */
    }                       carry;                                    /* */
    struct {
        int8_t              direction;                                /* */
        z64_actor_t*        actor;                                    /* */
    }                       ride;                                     /* */
    struct {
        uint8_t             mode;                                     /* Mode */
        uint8_t             old_mode;                                 /* Previous Mode */
        uint8_t             tool_mode;                                /* Tool Cutscene Animation Mode */
        uint8_t             counter;                                  /* Counter */
        z64_actor_t*        target_actor;                             /* Targeted Actor Pointer */
        struct {
            int16_t         start;                                    /* Start Frame */
            int16_t         end;                                      /* End Frame */
        }                   frame;                                    /* */
        struct {
            vec3f_t         start;                                    /* Start Coordinates */
            vec3f_t         end;                                      /* End Coordinates */
        }                   pos;                                      /* Coordinates */
        uint16_t            timer;                                    /* Timer */
        int16_t             work;                                     /* Generic Flag */
    }                       demo_play;                                /* Cutscene Action Substruct */
    struct {
        int16_t             id;                                       /* Camera ID */
        vec3f_t             center;                                   /* Camera Center */
        vec3f_t             eye;                                      /* LookAt Vector */
        vec3f_t             up;                                       /* Up Vector */
        float               fovy;                                     /* Field of View */
    }                       sub_camera;                               /* POV Camera? */
    z64_collider_cylinder_t acoc_info;                                /* Main Body Cylinder Collider */
    z64_collider_quad_t     at_info[2];                               /* Sword Collider */
    z64_collider_quad_t     shield_info;                              /* Shield Collider */
    struct {
        z64_actor_t*        primary_actor;                            /* */
        z64_actor_t*        secondary_actor;                          /* */
        int32_t             target_change_wait;                       /* */
    }                       cam_params;                               /* Camera Parameters */
    int32_t                 blure_effect_index;                       /* EffectBlure Index */
    void                    (*process)(z64_player_t*, z64_global_t*); /* Main State Function */
    z_player_age_prop_t*    age_properties;                           /* Age-Dependent Physics Properties */
    uint32_t                action_flags;                             /* Action/State Flags 1 */
    uint32_t                action_flags_2;                           /* Action/State Flags 2 */
    z64_actor_t*            target_request;                           /* */
    z64_actor_t*            boom;                                     /* */
    z64_actor_t*            navi;                                     /* Navi Actor Instance */
    int16_t                 navi_message;                             /* Navi Message ID */
    uint8_t                 action_flags_3;                           /* Action/State Flags 3 */
    int8_t                  put_item;                                 /* */
    z64_actor_t*            talk;                                     /* */
    float                   talk_distance;                            /* */
    struct {
        z64_actor_t*        actor;                                    /* */
        float               counter;                                  /* */
        float               distance;                                 /* */
    }                       dowsing;                                  /* */
    z64_actor_t*            ocarina;                                  /* */
    int8_t                  inter_anime_counter;                      /* */
    uint8_t                 look_mode;                                /* */
    uint16_t                anime_angle_status;                       /* */
    int16_t                 body_offset_angle_y;                      /* */
    int16_t                 pad1;                                     /* Padding */
    int16_t                 pad2;                                     /* Padding */
    vec3s_t                 neck_angle;                               /* */
    vec3s_t                 body_angle;                               /* */
    int16_t                 global_angle_x;                           /* */
    float                   display_offet_y;                          /* */
    struct {
        z64_skelanime_t     skelanime;                                /* */
        vec3s_t             now_joint[24];                            /* */
        vec3s_t             morf_joint[24];                           /* */
        int                 (*process)(z64_player_t*, z64_global_t*); /* */
        float               add_ratio;                                /* */
        int16_t             counter;                                  /* */
        int8_t              flag;                                     /* */
    }                       upper_body;                               /* */
    uint8_t                 to_free_timer;                            /* */
    float                   action_speedF;                            /* */
    int16_t                 action_angle_y;                           /* */
    int16_t                 parallel_angle_y;                         /* */
    uint16_t                swim_deep_time;                           /* */
    int8_t                  kiru_type;                                /* */
    int8_t                  sword_attack;                             /* */
    struct {
        int8_t              key;                                      /* */
        uint8_t             counter;                                  /* */
    }                       combo;                                    /* */
    struct {
        uint8_t             counter;                                  /* */
        int8_t              stick_dir[4];                             /* */
        int8_t              stick_camera_dir[4];                      /* */
    }                       command;                                  /* */
    int8_t                  flag;                                     /* */
    int16_t                 counter;                                  /* */
    float                   ripple_set_counter;                       /* */
    float                   f_work[2];                                /* */
    int16_t                 s_work;                                   /* */
    int8_t                  get_item_no;                              /* */
    uint8_t                 get_item_counter;                         /* */
    float                   run_anime_morf;                           /* */
    float                   run_anime_frame;                          /* */
    float                   target_LR_ratio;                          /* */
    float                   target_LR_aim_ratio;                      /* */
    float                   horse_offset_y;                           /* */
    int16_t                 target_angle_speed;                       /* */
    int16_t                 turn_angle_speed;                         /* */
    float                   max_speedF;                               /* */
    float                   wall_high;                                /* */
    float                   to_wall_r                                 /* */
    uint8_t                 wall_high_type;                           /* */
    uint8_t                 wall_hit_counter;                         /* */
    uint8_t                 talk_end_timer;                           /* */
    uint8_t                 fog_set_counter;                          /* */
    uint8_t                 mini_damage_timer;                        /* */
    uint8_t                 electric_timer;                           /* */
    uint8_t                 work_buffer;                              /* */
    uint8_t                 landing_timer;                            /* */
    int16_t                 landing_top_y;                            /* */
    int16_t                 landing_high;                             /* */
    int16_t                 ground_angle_x;                           /* */
    int16_t                 ground_angle_z;                           /* */
    int16_t                 walk_ground_angle_x;                      /* */
    uint16_t                sound_ground_code;                        /* */
    struct {
        uint8_t             damage;                                   /* */
        uint8_t             flag;                                     /* */
        int16_t             angle_y;                                  /* */
        float               speedF;                                   /* */
        float               speed_y;                                  /* */
        struct {
            float           speedF;                                   /* */
            int16_t         angle_y;                                  /* */
        }                   environment;                              /* */
    }                       power;                                    /* */
    int16_t                 swim_deep_counter;                        /* */
    z64_quad_pos_t          sword_pos[3];                             /* */
    vec3f_t                 parts_pos[18];                            /* */
    MtxF                    sword_matrix;                             /* */
    MtxF                    shield_matrix;                            /* */
    uint8_t                 fire_set_flag;                            /* */
    uint8_t                 fire_timer[18];                           /* */
    uint8_t                 shoot_timer;                              /* */
    void                    (*d_init)(z64_global_t*, z64_player_t*);  /* Demo Initialize Process */
    int8_t                  invul_frames;                             /* Invincibility Frame Timer*/
    uint8_t                 ground_attribute_counter;                 /* */
    uint8_t                 old_ground_auto_jump_type;                /* */
    uint8_t                 old_ground_attribute;                     /* */
    float                   deku_stick_length;                        /* Deku Stick Length */
    int16_t                 old_stick_angle;                          /* */
    uint16_t                old_sound_ground_code;                    /* */
    int16_t                 scene_change_landing_top_y;               /* */
    int8_t                  down_restart_counter;                     /* */
    uint8_t                 navi_restart_timer;                       /* */
    vec3f_t                 old_waist_pos;                            /* */
}; /* size = 0x0A94 */

#endif /* __Z64OVL_Z_PLAYER__ */