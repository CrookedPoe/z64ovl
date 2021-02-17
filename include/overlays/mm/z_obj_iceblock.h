#ifndef __Z64OVL_Z_OBJ_ICEBLOCK__
#define __Z64OVL_Z_OBJ_ICEBLOCK__

#define Z_OBJ_ICEBLOCK_ACTOR_NUMBER     0x0143
#define Z_OBJ_ICEBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_ICEBLOCK_OBJECT_NUMBER    0x0167
#define Z_OBJ_ICEBLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_iceblock_s z_obj_iceblock_t;
struct z_obj_iceblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ void (*draw)(/* ECOFF does not store param types */);
    /* 0x1B0 */ unsigned long status;
    /* 0x1B4 */ IceblockFreese freese_info[4];
    /* 0x1F4 */ IceblockGroundInfo ground_info[5];
    /* 0x244 */ float water_represent_y;
    /* 0x248 */ xyz_t enemy_offset_pos;
    /* 0x254 */ s_xyz enemy_offset_angle;
    /* 0x25C */ float walk_now_speed;
    /* 0x260 */ float walk_aim_speed;
    /* 0x264 */ float* walk_pos_ptr;
    /* 0x268 */ float walk_aim_pos;
    /* 0x26C */ short walk_power_dir;
    /* 0x26E */ short dir_power[4];
    /* 0x276 */ short now_x;
    /* 0x278 */ short now_z;
    /* 0x27C */ IceblockWater water;
    /* 0x2A0 */ short mode_timer;
    /* 0x2A2 */ short walk_eff_counter;
    /* 0x2A4 */ float walk_eff_pos;
    /* 0x2A8 */ float melt_scale_add_y;
    /* 0x2AC */ short melt_eff_counter;
    /* 0x2AE */ short melt_timer;
    /* 0x2B0 */ signed char now_mode;
    /* 0x2B1 */ signed char event_stop_timer;
    /* 0x2B4 */ float stand_scale;
}; /* size = 0x02B8 */

#endif /* __Z64OVL_Z_OBJ_ICEBLOCK__ */
