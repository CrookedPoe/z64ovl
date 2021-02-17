#ifndef __Z64OVL_GLOBAL_TYPES_INCLUDED__
#define __Z64OVL_GLOBAL_TYPES_INCLUDED__

typedef void* z_player_t;

typedef struct {
    /* 0x00 */ uint32_t start;
    /* 0x04 */ uint32_t end;
    /* 0x08 */
} rom_addr_t;

typedef struct {
    /* 0x00 */ uint32_t size;
    /* 0x04 */ uint8_t* bufp;
    /* 0x08 */ uint8_t* head;
    /* 0x0C */ uint8_t* tail;
    /* 0x10 */
} tha_buf_t, TwoHeadArena;

typedef struct game_alloc_entry_t {
    /* 0x00 */ struct game_alloc_entry_t*   next;
    /* 0x04 */ struct game_alloc_entry_t*   prev;
    /* 0x08 */ uint32_t                     alloc_size;
    /* 0x0C */ uint32_t                     dummy;
    /* 0x10 */
} game_alloc_entry_t, GameAllocEntry;

typedef struct {
    /* 0x00 */ game_alloc_entry_t   head;
    /* 0x10 */ game_alloc_entry_t*  tail;
    /* 0x14 */
} game_alloc_t, GameAlloc;

struct game_state;

typedef void (*game_state_func)(struct game_state* game_state);

typedef struct {
    /* 0x00 */ OSContPad    cur;
    /* 0x06 */ OSContPad    prev;
    /* 0x0C */ OSContPad    press;
    /* 0x12 */ OSContPad    rel;
    /* 0x18 */
} pad_input_t, Input;

typedef struct game_state_t {
    /* 0x00 */ gfx_t*           gfx_context;
    /* 0x04 */ game_state_func  main;
    /* 0x08 */ game_state_func  destroy;
    /* 0x0C */ game_state_func  init;
    /* 0x10 */ uint32_t         size;
    /* 0x14 */ pad_input_t      input[4];
    /* 0x74 */ tha_buf_t        tha;
    /* 0x84 */ game_alloc_t     alloc;
    /* 0x98 */ uint32_t         running;
    /* 0x9C */ uint32_t         frames;
    /* 0xA0 */ uint32_t         unk_A0;
    /* 0xA4 */
} game_state_t;

typedef struct {
    /* 0x00 */ int32_t  flag;
    /* 0x04 */ int32_t  timer;
    /* 0x08 */
} pause_context_t;

typedef struct {
    /* 0x00 */ uint16_t timer;
    /* 0x04 */ vec3f_t  world_position;
    /* 0x10 */ vec3f_t  camera_position;
    /* 0x1C */
} sound_source_t;

typedef struct {
    /* 0x00 */ uint8_t      num;
    /* 0x04 */ rom_addr_t*  data;
    /* 0x08 */
} rom_room_t;

typedef struct {
    /* 0x00 */ uint8_t  num;
    /* 0x04 */ vec3s_t* data;
    /* 0x08 */
} path_info_t;

// This is actually the "Vp" type from libultra
typedef union vp_t {
    struct {
        /* 0x00 */ int16_t  vscale[4];
        /* 0x08 */ int16_t  vtrans[4];
    };
    /* 0x00 */ uint64_t force_structure_alignment;
    /* 0x10 */
} viewport_t;

typedef struct {
    /* 0x000 */ int         VIEW;
    /* 0x004 */ gfx_t*      gfx;
    /* 0x008 */ rectangle_t screen_coordinates;
    /* 0x018 */ float       fovy;
    /* 0x01C */ float       near;
    /* 0x020 */ float       far;
    /* 0x024 */ float       scale;
    /* 0x028 */ vec3f_t     eye;
    /* 0x034 */ vec3f_t     lookat;
    /* 0x040 */ vec3f_t     up;
    /* 0x050 */ viewport_t  vp; /* alignment adds +4 */
    /* 0x060 */ Mtx         projection;
    /* 0x0A0 */ Mtx         viewing;
    /* 0x0E0 */ Mtx*        pprojection;
    /* 0x0E4 */ Mtx*        pviewing;
    struct {
        /* 0x0E8 */ vec3f_t target_rotate;
        /* 0x0F4 */ vec3f_t target_scale;
        /* 0x100 */ float   f;
        /* 0x104 */ vec3f_t rotate;
        /* 0x110 */ vec3f_t scale;
    } stretch;
    /* 0x11C */ uint16_t    normal;
    /* 0x120 */ int32_t     setflag;
    /* 0x124 */ int32_t     againflag;
    /* 0x128 */
} view_t;

typedef struct {
    /* 0x01 */ uint8_t  bgm;
    /* 0x02 */ uint8_t  environment;
    /* 0x03 */ uint8_t  echo_level;
    /* 0x04 */
} sound_context_t;

typedef uint8_t* sram_context_t;

typedef struct skybox_context_s {
    /* 0x000 */ view_t  view;
    /* 0x128 */ char*   skybox_segment[3];
    /* 0x134 */ void*   dp_list;
    /* 0x138 */ Gfx*    room_dl;
    /* 0x13C */ Vtx_t*  room_vtx;
    /* 0x140 */ int16_t skybox_draw_flag;
    /* 0x144 */ vec3f_t rotation;
    /* 0x150 */ vec3f_t eye;
    /* 0x15C */ int16_t angle;
    /* 0x160 */
} skybox_context_t;

/* Character Expansion Buffer  */
typedef struct kanfont_s {
    /* 0x0000 */ uint8_t*       msg_offset;
    /* 0x0004 */ uint8_t*       msg_length;
    /* 0x0008 */ uint8_t        kanfont_buffer[0x3C00];
    /* 0x3C08 */ uint8_t        icon_buffer[128];
    /* 0x3C88 */ int64_t        font_buffer[16 * 320];
    union buffer {
        /* 0xDC88 */ uint16_t   message_buf[16 * 40];
        /* 0xDC88 */ uint8_t    nes_mes_buf[16 * 40];
    } message_buffer;
    /* 0xE188 */
} kanfont_t;

typedef struct {
    /* 0x00 */ uint8_t button;
    /* 0x01 */ uint8_t status;
    /* 0x02 */ uint8_t locate;
    /* 0x03 */
} message_ocarina_info_t;

enum message_box_e {
    MSGBOX_NORMAL = 0,
    MSGBOX_SIGN,
    MSGBOX_NARRATION,
    MSGBOX_OCARINA,
    MSGBOX_MAX
};

typedef struct message_context_s message_context_t;
struct message_context_s {
    /* 0x0000 */ view_t                     view;
    /* 0x0128 */ kanfont_t                  kanfont;            /* Character class */
    /* 0xE2B0 */ char*                      msg_box_segment;    /* Callout segment */
    /* 0xE2B4 */ char*                      texture_segment;    /* Texture segment */
    /* 0xE2B8 */ message_ocarina_info_t*    info;               /* ocarina */
    /* 0xE2BC */ dma_t                      dma;                /* Memory transfer related */
    /* 0xE2DC */ OSMesgQueue                mq;
    /* 0xE2F4 */ OSMesg                     m;
    /* 0xE2F8 */ uint16_t                   msg_no;             /* Currently displayed message No. */
    /* 0xE2FA */ uint16_t                   msg_sel_no;         /* Selection message No. */
    /* 0xE2FC */ uint8_t                    msg_disp_type;      /* Display Type */
    /* 0xE2FE */ uint8_t                    msg_disp_type0;     /* Display balloon Type */
    /* 0xE2FF */ uint8_t                    msg_disp_type1;     /* Display position Type */
    /* 0xE300 */ uint8_t*                   msg_data;           /* Message address */

    /* 0xE304 */ uint8_t                    msg_mode;           /* display */
    union {
        /* 0xE306 */ uint16_t               msg_buff_j[100];    /* Display read buffer */
        /* 0xE306 */ uint8_t                msg_buff_e[200];    /* Display read buffer */
    } msg_buffer;
    /* 0xE3CE */ uint16_t                   read_index;         /* Buffer READ pointer */
    /* 0xE3D0 */ uint16_t                   load_index;         /* Buffer LOAD pointer */
    /* 0xE3D2 */ uint16_t                   load_end_index;     /* Buffer LOAD-END pointer */
    /* 0xE3D4 */ uint16_t                   read_end_index;     /* Buffer READ-END pointer */
    /* 0xE3D6 */ uint16_t                   mash_timer;         /* Fast forward prohibition flag */

    /* 0xE3D8 */ int16_t                    msg_pos_x;          /* Message display position */
    /* 0xE3DA */ int16_t                    msg_pos_y;
    /* 0xE3DC */ int16_t                    msg_r;              /* Display character color */
    /* 0xE3DE */ int16_t                    msg_g;
    /* 0xE3E0 */ int16_t                    msg_b;
    /* 0xE3E2 */ int16_t                    msg_a;

    /* 0xE3E4 */ uint8_t                    sel_mode;           /* Selection mode */
    /* 0xE3E5 */ uint8_t                    sel_index;          /* Choice */
    /* 0xE3E6 */ uint8_t                    item_dp;            /* Item display flag */

    /* 0xE3E7 */ int8_t                     window_counter;     /* Window counter */
    /* 0xE3E8 */ uint16_t                   msg_speed;          /* Message display speed */
    /* 0xE3EA */ uint16_t                   t_speed;            /* original */

    /* 0xE3EC */ uint16_t                   ocarina;            /* Ocarina performance number */
    /* 0xE3EE */ uint16_t                   ocarina_mode;       /* Ocarina mode */
    /* 0xE3F0 */ uint16_t                   ocarina_no;         /* Ocarina automatic performance number */
    /* 0xE3F2 */ uint16_t                   ocarina_chk_no;     /* Check ocarina performance number */
    /* 0xE3F4 */ uint16_t                   sun_song;           /* "Song of the Sun" flag */

    /* 0xE3F6 */ uint16_t                   msg_box;            /* Message board NO. */
    /* 0xE3F8 */ uint8_t                    msg_box_prim;       /* PRIM color */
    /* 0xE3F9 */ uint8_t                    msg_box_shadow;     /* Shadow color */
    /* 0xE3FA */ uint8_t                    msg_box_shift;      /* Shift value */
    /* 0xE3FB */ uint8_t                    msg_box_anime;      /* animation */

    /* 0xE3FC */ int16_t                    msg_box_type;       /* message_box_e */
    /* 0xE3FE */ int16_t                    msg_box_r;          /* Balloon color (RGBA) */
    /* 0xE400 */ int16_t                    msg_box_g;
    /* 0xE402 */ int16_t                    msg_box_b;
    /* 0xE404 */ int16_t                    msg_box_a;
    /* 0xE406 */ int16_t                    msg_box_alpha;      /* Speech balloon alpha */
    /* 0xE408 */ actor_t*                   talk_actor;         /* Actor pointer of the conversation partner */

    // There is no case where you could warp and play sun song or have to confirm both at the same time, yet there are two
    /* 0xE40C */ int16_t                    warp_choice;        /* WARP permission flag (0 = OK, 0 != no) */
    /* 0xE40E */ int16_t                    sunsong_choice;     /* Sun song permission flag (0 = OK, 0 != no) */

    /*0xE410 */ uint8_t                     frame_cfg;
    /*0xE418 */
};

enum interface_restriction_modes {
    INTERFACE_RESTRICT_DISPLAY = 0,    /* Display (usable) */
    INTERFACE_RESTRICT_FADED,          /* Semi-transparent display (cannot be used) */
    INTERFACE_RESTRICT_HIDDEN,         /* Hidden (cannot be used) */
    INTERFACE_RESTRICT_NOWARP,         /* Can be used, but does not accept warp melodies */
    INTERFACE_RESTRICT_MAX
};

typedef struct interface_context_s {
    /* 0x000 */ view_t      view;
    /* 0x128 */ Vtx_t*      parameter_frame_vtx;
    /* 0x12C */ Vtx_t*      heart_vtx;

    /* 0x130 */ char*       parameter_segment;          /* Resident parameter segment */
    /* 0x134 */ char*       do_action_segment;          /* DO action segment */
    /* 0x138 */ char*       icon_item_segment;          /* Icon item segment */
    /* 0x13C */ char*       map_segment;                /* MAP segment */
    /* 0x140 */ char        map_palete[16 * 2];         /* MAP palette */

    /* 0x160 */ dma_t       dma;
    /* 0x180 */ dma_t       dma1;
    /* 0x1A0 */ dma_t       dma2;
    /* 0x1C0 */ OSMesgQueue mq;
    /* 0x1D8 */ OSMesg      m;

    /* 0x1DC */ rectangle_t vw;                         /* SZA-Value (Top, Bottom, Left, Right) */

    /* 0x1EC */ int16_t     do_action_flg;              /* DO action switching flag */
    /* 0x1EE */ uint16_t    do_action;                  /* DO action pointer */
    /* 0x1F0 */ uint16_t    do_action_old;              /* DO action pointer old */
    /* 0x1F4 */ float       do_action_rotate;           /* DO action rotation counter */
    /* 0x1F8 */ int16_t     navi_flag;                  /* Navi flag */
    /* 0x1FA */ int16_t     sp_action_flag;             /* Special (B) action switching flag */
    /* 0x1FC */ int16_t     sp_action;                  /* Special (B) Action pointer */

    /* 0x1FE */ int16_t     health_meter;
    /* 0x200 */ int16_t     now_mode;

    /* 0x202 */ int16_t     active_heart_fg[3];         /* Beating Heart Foreground Color */
    /* 0x208 */ int16_t     active_heart_bg[3];         /* Beating Heart Background Color */
    /* 0x20E */ int16_t     heart_fg_r[2];              /* Heart Foreground Red */
    /* 0x212 */ int16_t     heart_fg_g[2];              /* Heart Foreground Green */
    /* 0x216 */ int16_t     heart_fg_b[2];              /* Heart Foreground Blue */
    /* 0x21A */ int16_t     heart_bg_r[2];              /* Heart Background Red */
    /* 0x21E */ int16_t     heart_bg_g[2];              /* Heart Background Green */
    /* 0x222 */ int16_t     heart_bg_b[2];              /* Heart Background Blue */

    /* 0x226 */ int16_t     active_heart_max;
    /* 0x228 */ int16_t     active_heart_timer;
    /* 0x22A */ int16_t     active_heart_wait;          /* Current throb amount */
    /* 0x22C */ int16_t     active_heart_flag;          /* Throb direction. 1 when increasing, 0 when decreasing */

    /* 0x22E */ int16_t     magic_mp_cost;              /* Magic consumption */
    /* 0x230 */ int16_t     magic_delta;                /* Increase / decrease frame */

    /* 0x232 */ int16_t     rupee_counter[4];			/* Rupee Counter (Used for Rupees and Keys) */
    /* 0x23A */ uint8_t     carrot_counter;             /* Whip counter */

    /* 0x23C */ uint16_t    horseback_archery_score;    /* Yabusame score */
    /* 0x23E */ uint16_t    horseback_archery_arrow;    /* Number of Yabusame */
    /* 0x240 */ uint16_t    yabu_mode;                  /* Yabusame internal state */
    /* 0x242 */ uint16_t    yabu_score;                 /* Yabusame internal score */

    /* 0x244 */ uint16_t    fill_alpha;                 /* Fill Rectangle Alpha value */
    /* 0x246 */ uint16_t    a_alpha;
    /* 0x248 */ uint16_t    b_alpha;
    /* 0x24A */ uint16_t    cl_alpha;
    /* 0x24C */ uint16_t    cd_alpha;
    /* 0x24E */ uint16_t    cr_alpha;
    /* 0x250 */ uint16_t    heart_alpha;
    /* 0x252 */ uint16_t    magic_alpha;
    /* 0x254 */ uint16_t    map_alpha;
    /* 0x256 */ int16_t     start_alpha;

    /* 0x258 */ int16_t     spot_map_no;                /* SPOTMAP NO. */
    /* 0x25A */ int16_t     dungeon_map_no;             /* Dungeon MAP NO. */
    /* 0x25C */ int16_t     room_no;                    /* Currently room No. */
    /* 0x25E */ int16_t     map_palette_no;             /* Currently Room PALETTE No. */

    /* 0x260 */ uint8_t     fishing_rod_equipped;       /* Flags you have */
    /* 0x261 */ uint8_t     marathon_flag;

    /* Button control code */
    struct {
        /* 0x262 */ uint8_t h_gage;     /* Heart, magic gauge, rupee, key */
        /* 0x263 */ uint8_t b_button;   /* B button */
        /* 0x264 */ uint8_t a_button;   /* A button */
        /* 0x265 */ uint8_t c_bottle;   /* Bottle */
        /* 0x266 */ uint8_t c_warasibe; /* Straw */
        /* 0x267 */ uint8_t c_hook;     /* Hook shot */
        /* 0x268 */ uint8_t c_ocarina;  /* Ocarina */
        /* 0x269 */ uint8_t c_warp;     /* Ocarina（warp）*/
        /* 0x26A */ uint8_t c_sunmoon;  /* Ocarina（Song of the sun）*/
        /* 0x26B */ uint8_t m_wind;     /* Magic (wind) */
        /* 0x26C */ uint8_t m_magic;    /* Magic (flame / love) */
        /* 0x26D */ uint8_t another;    /* Other C button */
    } restrictions;

    /* 0x270 */
} interface_context_t;


struct z_global_s {
    /* 0x00000 */ game_state_t          state;
    /* 0x000A4 */ int16_t               scene_id;
    /* 0x000A6 */ uint8_t               scene_config;
    /* 0x000A8 */ int8_t*               keep_segment;
    /* 0x000AC */ int8_t*               exchange_keep_segment;
    /* 0x000B0 */ int8_t*               scene_segment;
    /* 0x000B8 */ view_t                view;                       /* +4 alignment */
    /* 0x001E0 */ camera_t              camera_main;
    /* 0x0034C */ camera_t              camera_sub[3];
    /* 0x00790 */ camera_t*             cameras[4];
    /* 0x007A0 */ int16_t               camera_active;
    /* 0x007A2 */ int16_t               camera_next;
    /* 0x007A4 */ sound_context_t       sound_context;
    /* 0x007A8 */ light_context_t       light_context;
    /* 0x007B8 */ pause_context_t       pause;
    /* 0x007C0 */ bgcheck_context_t     bgcheck;
    /* 0x01C24 */ actor_context_t       actor_context;
    /* 0x01D64 */ cutscene_context_t    cutscene_context;
    /* 0x01DB4 */ sound_source_t        sound_sources[16];
    /* 0x01F74 */ sram_context_t        sram_context;               /* read buffer */
    /* 0x01F78 */ skybox_context_t      skybox_context;
    /* 0x020D8 */ message_context_t     message_context;
    /* 0x104F0 */ interface_context_t   interface_context;
    /* 0x10760 */ //kaleido_context_t     pause_context;
    /* 0x00000 */ //game_over_t           game_over_context;
    /* 0x00000 */ //environment_t         environment_context;
    /* 0x00000 */ //sklani_context_t      animation_context;
    /* 0x00000 */ //object_context_t      object_context;
    /* 0x00000 */ //room_context_t        room_context;
    /* 0x00000 */ //door_context_t        door_context;
    /* 0x00000 */ void                  (*player_init)              (z_player_t* player, global_t* gl, skeleton_t* skeleton);
    /* 0x00000 */ void                  (*player_update)            (z_player_t* player, global_t* gl, pad_input_t* input);
    /* 0x00000 */ int32_t               (*player_has_fish)          (global_t* gl);
    /* 0x00000 */ int32_t               (*player_is_fishing)        (global_t* gl);
    /* 0x00000 */ int32_t               (*player_is_redead_frozen)  (global_t* gl, z_player_t* player);
    /* 0x00000 */ int32_t               (*player_in_cutscene)       (global_t* gl, struct actor_s* actor, int32_t mode);
    /* 0x00000 */ void                  (*player_is_waiting)        (z_player_t player, global_t* gl);
    /* 0x00000 */ int32_t               (*player_is_damaged)        (global_t* gl, int32_t damage);
    /* 0x00000 */ void                  (*player_is_talking)        (global_t* gl, struct actor_s* actor);
    /* 0x00000 */ MtxF                  mf_projection;
    /* 0x00000 */ MtxF                  mf_softsprite;
    /* 0x00000 */ Mtx*                  m_softsprite;
    /* 0x00000 */ uint32_t              gamplay_frame_counter;
    /* 0x00000 */ uint8_t               link_age_on_load;
    /* 0x00000 */ uint8_t               actor_stop_flag;
    /* 0x00000 */ uint8_t               room_current;
    /* 0x00000 */ uint8_t               setup_actors;
    /* 0x00000 */ rom_room_t            room_list;
    /* 0x00000 */ //actor_data_t*         link_actor_entry;
    /* 0x00000 */ //actor_data_t*         actor_data;
    /* 0x00000 */ //camera_data_t*        camera_data;
    /* 0x00000 */ //room_status_t*        room_status;
    /* 0x00000 */ uint16_t              current_entrance;
    /* 0x00000 */ path_info_t           path_list;
    /* 0x00000 */ void*                 elf_message;
    /* 0x00000 */ void*                 special_effect;
    /* 0x00000 */ uint8_t               skybox_id;
    /* 0x00000 */ int8_t                scene_load_flag;
    /* 0x00000 */ int16_t               scene_load_counter;
    /* 0x00000 */ int16_t               bg_fade_counter;
    /* 0x00000 */ uint16_t              next_entrance;
    /* 0x00000 */ MtxF                  dynamic_check_matrix;
    /* 0x00000 */ int8_t                bow_game_flag;
    /* 0x00000 */ int8_t                bombchu_bowling_ammo;
    /* 0x00000 */ uint8_t               transition_wipe;
    /* 0x00000 */ uint8_t               _pad0;
    /* 0x00000 */ //hit_context_t         collision_check;
    /* 0x00000 */ uint16_t              environment_flags[20];
    /* 0x00000 */ //prerend_context_t     prerender_kaleidoscope;
    /* 0x00000 */ //prerend_context_t     prerender_7000polygon;
    /* 0x00000 */ uint8_t               ___pad10[3];
    /* 0x00000 */ uint8_t               z_buffer_flag;
    /* 0x00000 */ //fbdemo_wipe_t         fbdemo_wipe;
    /* 0x00000 */ uint8_t               ___pad11[3];
    /* 0x00000 */ uint8_t               fbdemo_wipe_mode;
    /* 0x00000 */ //fbdemo_fade_t         color_filter;
    /* 0x00000 */ uint8_t               ___pad12[3];
    /* 0x00000 */ uint8_t               pr_vr_switch;
    /* 0x00000 */ void*                 scene_data_status;
    /* 0x00000 */ void*                 dummy;
    /* 0x12518 */
}; /* Size: 0x012518 8-byte aligned. */

struct z2_global_s {
    game_state_t state;
    void* dummy;
}; /* Size: 0x019258 8-byte aligned. */

#endif /* __Z64OVL_GLOBAL_TYPES_INCLUDED__ */