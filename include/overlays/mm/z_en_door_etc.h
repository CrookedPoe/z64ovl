#ifndef __Z64OVL_Z_EN_DOOR_ETC__
#define __Z64OVL_Z_EN_DOOR_ETC__

#define Z_EN_DOOR_ETC_ACTOR_NUMBER     0x01A7
#define Z_EN_DOOR_ETC_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_EN_DOOR_ETC_OBJECT_NUMBER    0x0001
#define Z_EN_DOOR_ETC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_door_etc_s z_en_door_etc_t;
struct z_en_door_etc_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ unsigned char anime_type;
    /* 0x1A1 */ unsigned char open;
    /* 0x1A2 */ signed char change_bank_ID;
    /* 0x1A3 */ signed char shape_type;
    /* 0x1A4 */ short angle_z;
    /* 0x1A6 */ short timer;
    /* 0x1A8 */ ClObjPipe pipe_info;
    /* 0x1F4 */ unchar flag;
    /* 0x1F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_EN_DOOR_ETC__ */
