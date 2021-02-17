#ifndef __Z64OVL_Z_OBJ_HUNSUI__
#define __Z64OVL_Z_OBJ_HUNSUI__

#define Z_OBJ_HUNSUI_ACTOR_NUMBER     0x022E
#define Z_OBJ_HUNSUI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_HUNSUI_OBJECT_NUMBER    0x023D
#define Z_OBJ_HUNSUI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_hunsui_s z_obj_hunsui_t;
struct z_obj_hunsui_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short type;
    /* 0x164 */ int arg0;
    /* 0x168 */ int arg1;
    /* 0x16C */ signed char room1_ID;
    /* 0x16D */ signed char room2_ID;
    /* 0x16E */ signed char timer;
    /* 0x16F */ unsigned char pad1;
    /* 0x170 */ short event_id[1];
    /* 0x172 */ unsigned short stat;
    /* 0x174 */ float pos_y_tgt;
    /* 0x178 */ float pos_y_now;
    /* 0x17C */ short start_event_id;
    /* 0x180 */ int old_sw;
    /* 0x184 */ unsigned short alpha;
    /* 0x186 */ short wkss[4];
    /* 0x190 */ float wkf[3];
    /* 0x19C */ float env_spd;
    /* 0x1A0 */ float env_spd_max;
    /* 0x1A4 */ short env_ang;
    /* 0x1A8 */ float correct_pos_y;
    /* 0x1AC */ float y1;
    /* 0x1B0 */ float y2;
    /* 0x1B4 */ Bg_Dblue_Movebg_actor* suisya_actor;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_OBJ_HUNSUI__ */
