#ifndef __Z64OVL_Z_OBJ_HAKAISI__
#define __Z64OVL_Z_OBJ_HAKAISI__

#define Z_OBJ_HAKAISI_ACTOR_NUMBER     0x01E3
#define Z_OBJ_HAKAISI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HAKAISI_OBJECT_NUMBER    0x01C2
#define Z_OBJ_HAKAISI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_hakaisi_s z_obj_hakaisi_t;
struct z_obj_hakaisi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ xyz_t break_pos[3];
    /* 0x184 */ xyz_t hahen_axis;
    /* 0x190 */ int save_bit;
    /* 0x194 */ short draw_type;
    /* 0x196 */ short eventmgr;
    /* 0x198 */ short demo_flag;
    /* 0x19A */ short proc_timer;
    /* 0x19C */ short break_angle_speed;
    /* 0x19E */ unsigned char hp_buff;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_OBJ_HAKAISI__ */
