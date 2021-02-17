#ifndef __Z64OVL_Z_DEMO_GJ__
#define __Z64OVL_Z_DEMO_GJ__

#define Z_DEMO_GJ_ACTOR_NUMBER     0x01B1
#define Z_DEMO_GJ_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_DEMO_GJ_OBJECT_NUMBER    0x0185
#define Z_DEMO_GJ_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_gj_s z_demo_gj_t;
struct z_demo_gj_s {
    /* 0x0 */ MoveBG_Actor moveBG_actor;
    /* 0x154 */ int main_mode;
    /* 0x158 */ int draw_mode;
    /* 0x15C */ short role_angle[3];
    /* 0x162 */ short role_angle_speed[3];
    /* 0x168 */ ACTOR* Ganon_actor_p;
    /* 0x16C */ int smoke_stop;
    /* 0x170 */ int reflect_flag;
    /* 0x174 */ ClObjPipe stand_pipe;
    /* 0x1C0 */ ClObjPipe stand_pipe2;
    /* 0x20C */ ClObjPipe stand_pipe3;
    /* 0x258 */ int ganon_info;
    /* 0x25C */ xyz_t ganon_direction;
}; /* size = 0x0278 */

#endif /* __Z64OVL_Z_DEMO_GJ__ */
