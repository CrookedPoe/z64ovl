#ifndef __Z64OVL_Z_EN_DOOR__
#define __Z64OVL_Z_EN_DOOR__

#define Z_EN_DOOR_ACTOR_NUMBER     0x0005
#define Z_EN_DOOR_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_EN_DOOR_OBJECT_NUMBER    0x0001
#define Z_EN_DOOR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_door_s z_en_door_t;
struct z_en_door_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ unsigned char anime_type;
    /* 0x1A1 */ unsigned char open;
    /* 0x1A2 */ signed char change_bank_ID;
    /* 0x1A3 */ signed char shape_type;
    /* 0x1A4 */ unsigned char type;
    /* 0x1A5 */ unsigned char arg1;
    /* 0x1A6 */ unsigned char key_timer;
    /* 0x1A7 */ signed char open_request;
    /* 0x1A8 */ s_xyz now_joint[5];
    /* 0x1C8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_EN_DOOR__ */
