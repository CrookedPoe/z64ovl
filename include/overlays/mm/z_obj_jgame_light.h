#ifndef __Z64OVL_Z_OBJ_JGAME_LIGHT__
#define __Z64OVL_Z_OBJ_JGAME_LIGHT__

#define Z_OBJ_JGAME_LIGHT_ACTOR_NUMBER     0x0293
#define Z_OBJ_JGAME_LIGHT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_JGAME_LIGHT_OBJECT_NUMBER    0x0080
#define Z_OBJ_JGAME_LIGHT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_jgame_light_s z_obj_jgame_light_t;
struct z_obj_jgame_light_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ Light_list* light_list;
    /* 0x198 */ Light_data light_data;
    /* 0x1A8 */ float fire_scale;
    /* 0x1AC */ short light_power;
    /* 0x1AE */ short scroll_counter;
    /* 0x1B0 */ short proc_timer;
    /* 0x1B2 */ short hantei_alpha;
    /* 0x1B4 */ short hantei_draw;
    /* 0x1B6 */ short fire_flag;
    /* 0x1B8 */ unchar hp_buff;
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_OBJ_JGAME_LIGHT__ */
