#ifndef __Z64OVL_SKELANIME_TYPES_INCLUDED__
#define __Z64OVL_SKELANIME_TYPES_INCLUDED__

// z_rigid_type
typedef enum body_gfx_type {
    NORMAL
    , NORMAL_T /* + Transparent */
    , LOD
    , LOAD_T /* + Transparent */
} Z64OVL_BODY_GFX_TYPE;

typedef struct limb_entry_s {
    vec3s_t translate; /* 1 : 100 */
    uint8_t child_index;
    uint8_t sibling_index;
} limb_entry_t;

typedef struct limb_entry_NORMAL {
    limb_entry_t body;
    Gfx* gfx[1];
} normal_limb_entry_t;

typedef struct limb_entry_NORMAL_T {
    limb_entry_t body;
    Gfx* gfx[2];
} normalt_limb_entry_t;

typedef struct limb_entry_LOD {
    limb_entry_t body;
    Gfx* gfx[2];
} lod_limb_entry_t;

typedef struct limb_entry_LOD_T {
    limb_entry_t body;
    Gfx* gfx[4];
} lodt_limb_entry_t;

typedef struct {
    limb_entry_t** limb_table;
    uint8_t limb_count;
} skeleton_t;

typedef struct {
    skeleton_t model_info;
    uint8_t dlist_count;
} skeleton_mtx_t;

typedef struct animation_s {
    int16_t frame_count;
    int16_t* rot_value;
    int16_t* rot_index;
    int16_t limit;
} animation_t;

typedef struct link_animation_s {
    int16_t frame_count;
    void* seg_offset;
} link_animation_t;

typedef struct link_animation_frame_s {
    vec3s_t root_pos;
    vec3s_t limb_rot[21];
    struct {
        uint8_t mouth : 4;
        uint8_t eyes : 4;
    } face;
} link_animation_frame_t;

// z_skelanime
#define ANIMEMODE_ROTATION      1
#define ANIMEMODE_TRANSLATE     (1 << 1)
#define ANIMEMODE_SCALE         (1 << 2)
#define ANIMEMODE_TEXTURE_ANIME (1 << 3)

/* Limb callback prototypes. */
typedef int32_t (pre_limb_draw)(struct global_t* global, int32_t, Gfx**, vec3f_t*, vec3s_t*, void*);
typedef void (post_limb_draw)(struct global_t* global, int32_t, Gfx**, vec3s_t*, void*);

typedef enum anime_frame_control {
    ANIMECTRL_REPEAT
    , ANIMECTRL_REPEAT_S
    , ANIMECTRL_STOP
    , ANIMECTRL_STOP_S
    , ANIMECTRL_REPEAT2
    , ANIMECTRL_REPEAT2_S
} Z64OVL_ANIME_CONTROL;

typedef struct skelanime_s skelanime_t;
struct skelanime_s {
    uint8_t         limb_count;                  /* Number of Limbs in Object Hierarchy */
    uint8_t         flag;                        /* Flag */
    uint8_t         dlist_count;                 /* Number of Limbs in Object Hierarchy (that use display lists) */
    int8_t          morf_type;                   /* */
    skeleton_t*     skeleton;                    /* RAM Address of Limb Index */
    animation_t*    anim_header;                 /* Currently Loaded Animation */
    float           frame_start;                 /* Initial Animation Frame */
    float           frame_count;                 /* The frame count of the currently loaded animation. */
    float           frame_total;                 /* Total animation frames. */
    float           frame_current;               /* Current animation frame. */
    float           anim_speed;                  /* Speed of Animation Playback */
    vec3s_t*        now_joint;                   /* Limb Drawing Table (Current) */
    vec3s_t*        morf_joint;                  /* Limb Drawing Table (Transition) */
    float           morf_ratio;                  /* */
    float           morf_step;                   /* Current Transition Step */
    int             (*update)(skelanime_t*);     /* Animation Update Function */
    uint8_t         anime_mode;                  /* Animation Mode */
    uint8_t         anime_move_flag;             /* Initialization Flags */
    int16_t         y_rot_prev;                  /* Previous Frame Rotation */
    vec3s_t         pos_prev;                    /* Previous Frame Position */
    vec3s_t         anime_move_base_trans;       /* */
};

#endif /* __Z64OVL_SKELANIME_TYPES_INCLUDED__ */