#ifndef __Z64OVL_CAMERA_INCLUDED__
#define __Z64OVL_CAMERA_INCLUDED__

typedef struct {
    /* 0x000 */ int8_t params[80];
    /* 0x050 */ vec3f_t focus;
    /* 0x05C */ vec3f_t translation;
    /* 0x068 */ vec3f_t up;
    /* 0x074 */ vec3f_t base_translation;
    /* 0x080 */ vec3f_t gap;
    /* 0x08C */ struct global_t* global_context;
    /* 0x090 */ actor_t* parent_actor;
    /* 0x094 */ vec3f_t parent_position;
    /* 0x0A0 */ vec3s_t parent_rotation;
    /* 0x0A8 */ actor_t* target_actor;
    /* 0x0AC */ vec3f_t target_position;
    /* 0x0B8 */ vec3s_t target_rotation;
    /* 0x0C0 */ float damp_r;
    /* 0x0C4 */ float damp_v;
    /* 0x0C8 */ float damp_h;
    /* 0x0CC */ float damp_ch;
    /* 0x0D0 */ float damp_cp;
    /* 0x0D4 */ float damp_fv;
    /* 0x0D8 */ float speed;
    /* 0x0DC */ float dist;
    /* 0x0E0 */ float speed_factor;
    /* 0x0E4 */ vec3f_t trajectory;
    /* 0x0F0 */ vec3f_t velocity;
    /* 0x0FC */ float fovy;
    /* 0x100 */ float shift_ratio;
    /* 0x104 */ float floor_height;
    /* 0x108 */ vec3f_t floor_normal;
    /* 0x114 */ float water_height;
    /* 0x118 */ vec3f_t water_normal;
    /* 0x124 */ void* p0;
    /* 0x128 */ void* p1;
    /* 0x12C */ uint16_t n0;
    /* 0x12E */ uint16_t n1;
    /* 0x130 */ uint16_t uid;
    /* 0x132 */ uint16_t __pad0;
    /* 0x134 */ vec3s_t _dir;
    /* 0x13A */ vec3s_t dir;
    /* 0x140 */ int16_t status;
    /* 0x142 */ int16_t setting;
    /* 0x144 */ int16_t mode;
    /* 0x146 */ int16_t ai;
    /* 0x148 */ int16_t id;
    /* 0x14A */ int16_t chgflg;
    /* 0x14C */ int16_t idflg;
    /* 0x14E */ int16_t kill;
    /* 0x150 */ int16_t timer;
    /* 0x152 */ int16_t stretch;
    /* 0x154 */ int16_t prev_set;
    /* 0x156 */ int16_t next_id;
    /* 0x158 */ int16_t prev_ai;
    /* 0x15A */ int16_t zang;
    /* 0x15C */ int16_t lock;
    /* 0x15E */ int16_t state;
    /* 0x160 */ int16_t killtimer;
    /* 0x162 */ int16_t next;
    /* 0x164 */ int16_t num;
    /* 0x166 */ int16_t prev_id;
    /* 0x168 */ int16_t opdemo;
    /* 0x16C */
} camera_t;

/* Cutscenes */
typedef struct  {
    /* 0x00 */ int8_t code;         /* Code */
    /* 0x01 */ int8_t z_rotation;   /* Z Rotation */
    /* 0x02 */ uint16_t T;          /* T Velocity (0 < T < 1.0) */
    /* 0x04 */ float zoom;          /* Zoom */
    /* 0x08 */ vec3s_t pos;         /* Position */
    /* 0x0E */
} cutscene_camera_t;

typedef struct {
    /* 0x00 */ uint16_t animation;		/* Object Cutscene Animation Action */
    /* 0x02 */ uint16_t start_frame;
    /* 0x04 */ uint16_t end_frame;
    /* 0x06 */ uint16_t x_angle;
    /* 0x08 */ uint16_t y_angle;
    /* 0x0A */ uint16_t z_angle;
    /* 0x0C */ uint32_t x_pos_start;
    /* 0x10 */ uint32_t y_pos_start;
    /* 0x14 */ uint32_t z_pos_start;
    /* 0x18 */ uint32_t x_pos_end;
    /* 0x1C */ uint32_t y_pos_end;
    /* 0x20 */ uint32_t z_pos_end;
    /* 0x24 */ uint32_t x_speed;
    /* 0x28 */ uint32_t y_speed;
    /* 0x2C */ uint32_t z_speed;
    /* 0x30 */
} cutscene_action_t;

enum {
    CUTSCENE_MODE_NON,     /*   0 : No Cutscene                    */
    CUTSCENE_MODE_START,   /*   1 : Initializing skippable scene   */
    CUTSCENE_MODE_PROC,    /*   2 : Skippable cutscene playing     */
    CUTSCENE_MODE_END,     /*   3 : Initializing unskippable scene */
    CUTSCENE_MODE_WAIT     /*   4 : Unskippable cutscene playing   */
};

typedef struct cutscene_context_s { /* TODO: Investigate */
    /* 0x00 */ uint8_t                 num;
    /* 0x04 */ int8_t*                 data;
    /* 0x08 */ uint8_t                 mode;
    /* 0x0C */ float                   counter;
    /* 0x10 */ uint16_t                frame_count;
    /* 0x12 */ uint16_t                cutscene_no;
    /* 0x14 */ int32_t                 camera_ID;
    /* 0x18 */ uint16_t                start_frame_bak;
    /* 0x1A */ uint8_t                 lookat_sw;       /* Did you set it? The position where you are looking at the flag	*/
    /* 0x1B */ uint8_t                 camera_sw;       /* Position */
    /* 0x1C */ cutscene_camera_t*      lookat_pos;      /* Spline camera viewing position */
    /* 0x20 */ cutscene_camera_t*      camera_pos;      /* Position */
    /* 0x24 */ cutscene_action_t*      link_action;     /* Link Cutscene Action */
    /* 0x28 */ cutscene_action_t*      npc_action[10];  /* NPC Cutscene Action*/
    /* 0x50 */
} cutscene_context_t;

#endif /* __Z64OVL_CAMERA_INCLUDED__ */