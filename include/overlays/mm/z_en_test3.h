#ifndef __Z64OVL_Z_EN_TEST3__
#define __Z64OVL_Z_EN_TEST3__

#define Z_EN_TEST3_ACTOR_NUMBER     0x0159
#define Z_EN_TEST3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TEST3_OBJECT_NUMBER    0x001C
#define Z_EN_TEST3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_en_test3_s z_en_test3_t;
struct z_en_test3_s {
    /* 0x0 */ PLAYER_ACTOR player;
    /* 0xD78 */ Talk_Status* talk_status;
    /* 0xD7C */ Path_Info* path;
    /* 0xD80 */ int pass_time;
    /* 0xD84 */ float rail_morf;
    /* 0xD88 */ signed char schedule;
    /* 0xD89 */ unsigned char action;
    /* 0xD8A */ short counter;
    /* 0xD8C */ unsigned char timer;
    /* 0xD8D */ signed char event_no;
    /* 0xD8E */ short camera_no;
    /* 0xD90 */ PLAYER_ACTOR* player_actor;
    /* 0xD94 */ void (*process)(/* ECOFF does not store param types */);
    /* 0xD98 */ xyz_t nurbs_direction;
    /* 0xDA4 */ float nurbs_t;
    /* 0xDA8 */ int nurbs_move_frame;
    /* 0xDAC */ int nurbs_section_frame;
    /* 0xDB0 */ int nurbs_section;
    /* 0xDB4 */ int nurbs_f;
}; /* size = 0x0DB8 */

#endif /* __Z64OVL_Z_EN_TEST3__ */
