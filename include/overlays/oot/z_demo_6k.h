#ifndef __Z64OVL_Z_DEMO_6K__
#define __Z64OVL_Z_DEMO_6K__

#define Z_DEMO_6K_ACTOR_NUMBER     0x00F5
#define Z_DEMO_6K_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_DEMO_6K_OBJECT_NUMBER    0x0001
#define Z_DEMO_6K_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_6k_s z_demo_6k_t;
struct z_demo_6k_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void* next_process;
    /* 0x140 */ Light_data light_data;
    /* 0x150 */ Light_list* light_list;
    /* 0x154 */ float hole_scale;
    /* 0x158 */ float hole_yuragi;
    /* 0x15C */ float smoke_alpha;
    /* 0x160 */ float filter_alpha;
    /* 0x164 */ float posX[16];
    /* 0x1A4 */ float posY[16];
    /* 0x1E4 */ float speed[16];
    /* 0x224 */ float scale[16];
    /* 0x264 */ unchar color[16];
    /* 0x274 */ void (*drawPro)(/* ECOFF does not store param types */);
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ unshort flag;
    /* 0x27E */ unshort frame_time;
    /* 0x280 */ unshort timer;
    /* 0x282 */ unchar bank;
    /* 0x283 */ unchar color_type;
}; /* size = 0x0294 */

#endif /* __Z64OVL_Z_DEMO_6K__ */
