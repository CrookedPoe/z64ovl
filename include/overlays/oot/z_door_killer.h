#ifndef __Z64OVL_Z_DOOR_KILLER__
#define __Z64OVL_Z_DOOR_KILLER__

#define Z_DOOR_KILLER_ACTOR_NUMBER     0x01C1
#define Z_DOOR_KILLER_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DOOR_KILLER_OBJECT_NUMBER    0x018E
#define Z_DOOR_KILLER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_door_killer_s z_door_killer_t;
struct z_door_killer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ unsigned char anime_type;
    /* 0x181 */ unsigned char open;
    /* 0x182 */ s_xyz joint[9];
    /* 0x1B8 */ ClObjPipe pipe_info;
    /* 0x204 */ unsigned short* texture;
    /* 0x208 */ unsigned short flag;
    /* 0x20A */ unsigned short timer;
    /* 0x20C */ unsigned char tex_bank;
    /* 0x20D */ unsigned char status;
    /* 0x210 */ ClObjJntSph sph;
    /* 0x230 */ ClObjJntSphElem elem;
    /* 0x270 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_DOOR_KILLER__ */
