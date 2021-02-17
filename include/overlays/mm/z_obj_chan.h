#ifndef __Z64OVL_Z_OBJ_CHAN__
#define __Z64OVL_Z_OBJ_CHAN__

#define Z_OBJ_CHAN_ACTOR_NUMBER     0x0240
#define Z_OBJ_CHAN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_CHAN_OBJECT_NUMBER    0x021E
#define Z_OBJ_CHAN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_chan_s z_obj_chan_t;
struct z_obj_chan_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ unsigned char no;
    /* 0x195 */ unsigned char type;
    /* 0x196 */ short timer;
    /* 0x198 */ Light_list* light_list;
    /* 0x19C */ Light_data light_data;
    /* 0x1AA */ unsigned char stat;
    /* 0x1AC */ Obj_Chan_actor* tubo_actor[5];
    /* 0x1C0 */ xyz_t fix_pos;
    /* 0x1CC */ float len;
    /* 0x1D0 */ float wave_power;
    /* 0x1D4 */ short wave_sync_ang;
    /* 0x1D6 */ short wave_dir_ang;
    /* 0x1D8 */ float fire_scale;
    /* 0x1DC */ short ang_y_spd;
    /* 0x1DE */ short rot_ang_y;
    /* 0x1E0 */ short event_id[2];
}; /* size = 0x01E4 */

#endif /* __Z64OVL_Z_OBJ_CHAN__ */
