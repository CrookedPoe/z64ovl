#ifndef __Z64OVL_Z_DOOR_WARP1__
#define __Z64OVL_Z_DOOR_WARP1__

#define Z_DOOR_WARP1_ACTOR_NUMBER     0x0038
#define Z_DOOR_WARP1_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DOOR_WARP1_OBJECT_NUMBER    0x003E
#define Z_DOOR_WARP1_FLAGS            (ACTORFLAG_NOP)

typedef struct z_door_warp1_s z_door_warp1_t;
struct z_door_warp1_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ Dm_Hina_Actor* mask_act;
    /* 0x1A4 */ float high;
    /* 0x1A8 */ float high2;
    /* 0x1AC */ float scroll;
    /* 0x1B0 */ float alpha;
    /* 0x1B4 */ float alpha2;
    /* 0x1B8 */ float alpha3;
    /* 0x1BC */ float omakescale;
    /* 0x1C0 */ float effscale;
    /* 0x1C4 */ short scalewk;
    /* 0x1C6 */ short uppos;
    /* 0x1C8 */ short revscale;
    /* 0x1CA */ short counter;
    /* 0x1CC */ short kaitenwk;
    /* 0x1CE */ short bmstimer;
    /* 0x1D0 */ unsigned short timer;
    /* 0x1D2 */ signed char change_bank_ID;
    /* 0x1D3 */ unsigned char bgcheck_fg;
    /* 0x1D4 */ unsigned char bgcheck_fg2;
    /* 0x1D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1DC */ Light_list* light_list;
    /* 0x1E0 */ Light_data light_data;
    /* 0x1F0 */ Light_list* light_list2;
    /* 0x1F4 */ Light_data light_data2;
    /* 0x202 */ unsigned char firstget;
    /* 0x203 */ unsigned char minisize_sw;
    /* 0x204 */ float mini_scale;
    /* 0x208 */ unsigned char old_dousa;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_DOOR_WARP1__ */
