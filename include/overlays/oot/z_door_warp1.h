#ifndef __Z64OVL_Z_DOOR_WARP1__
#define __Z64OVL_Z_DOOR_WARP1__

#define Z_DOOR_WARP1_ACTOR_NUMBER     0x005D
#define Z_DOOR_WARP1_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DOOR_WARP1_OBJECT_NUMBER    0x0048
#define Z_DOOR_WARP1_FLAGS            (ACTORFLAG_NOP)

typedef struct z_door_warp1_s z_door_warp1_t;
struct z_door_warp1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ signed char change_bank_ID;
    /* 0x182 */ unsigned short timer;
    /* 0x184 */ float high;
    /* 0x188 */ float high2;
    /* 0x18C */ float scroll;
    /* 0x190 */ float alpha;
    /* 0x194 */ float alpha2;
    /* 0x198 */ float alpha3;
    /* 0x19C */ short scalewk;
    /* 0x19E */ short uppos;
    /* 0x1A0 */ short revscale;
    /* 0x1A2 */ short counter;
    /* 0x1A4 */ float effscale;
    /* 0x1A8 */ short kaitenwk;
    /* 0x1AC */ float omakescale;
    /* 0x1B0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B4 */ Light_list* light_list;
    /* 0x1B8 */ Light_data light_data;
    /* 0x1C8 */ Light_list* light_list2;
    /* 0x1CC */ Light_data light_data2;
    /* 0x1DC */ int contact_ru1;
}; /* size = 0x01F0 */

#endif /* __Z64OVL_Z_DOOR_WARP1__ */
