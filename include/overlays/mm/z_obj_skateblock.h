#ifndef __Z64OVL_Z_OBJ_SKATEBLOCK__
#define __Z64OVL_Z_OBJ_SKATEBLOCK__

#define Z_OBJ_SKATEBLOCK_ACTOR_NUMBER     0x0142
#define Z_OBJ_SKATEBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_SKATEBLOCK_OBJECT_NUMBER    0x0003
#define Z_OBJ_SKATEBLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_skateblock_s z_obj_skateblock_t;
struct z_obj_skateblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float drop_start_y;
    /* 0x164 */ float walk_now_speed;
    /* 0x168 */ float walk_aim_speed;
    /* 0x16C */ float* walk_pos_ptr;
    /* 0x170 */ short walk_power_dir;
    /* 0x172 */ short dir_power[4];
    /* 0x17A */ short mode_timer;
    /* 0x17C */ short effect_counter;
    /* 0x180 */ float effect_p;
    /* 0x184 */ SkateblockGroundInfo ground_info[5];
    /* 0x1C0 */ unsigned char serial_num;
    /* 0x1C1 */ unsigned char status;
}; /* size = 0x01C4 */

#endif /* __Z64OVL_Z_OBJ_SKATEBLOCK__ */
