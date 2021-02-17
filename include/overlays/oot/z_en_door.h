#ifndef __Z64OVL_Z_EN_DOOR__
#define __Z64OVL_Z_EN_DOOR__

#define Z_EN_DOOR_ACTOR_NUMBER     0x0009
#define Z_EN_DOOR_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_EN_DOOR_OBJECT_NUMBER    0x0001
#define Z_EN_DOOR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_door_s z_en_door_t;
struct z_en_door_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ unsigned char anime_type;
    /* 0x181 */ unsigned char open;
    /* 0x182 */ unsigned char face;
    /* 0x183 */ signed char change_bank_ID;
    /* 0x184 */ signed char shape_type;
    /* 0x186 */ short key_timer;
    /* 0x188 */ s_xyz now_joint[5];
    /* 0x1A6 */ s_xyz morf_joint[5];
    /* 0x1C4 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01D8 */

#endif /* __Z64OVL_Z_EN_DOOR__ */
