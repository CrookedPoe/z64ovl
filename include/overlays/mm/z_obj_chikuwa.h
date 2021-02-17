#ifndef __Z64OVL_Z_OBJ_CHIKUWA__
#define __Z64OVL_Z_OBJ_CHIKUWA__

#define Z_OBJ_CHIKUWA_ACTOR_NUMBER     0x0114
#define Z_OBJ_CHIKUWA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_CHIKUWA_OBJECT_NUMBER    0x00ED
#define Z_OBJ_CHIKUWA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_chikuwa_s z_obj_chikuwa_t;
struct z_obj_chikuwa_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ChikuwaLift lift[20];
    /* 0x29C */ short lift_num;
    /* 0x29E */ short now_timer;
    /* 0x2A0 */ short drop_counter;
    /* 0x2A4 */ ChikuwaEff eff[32];
    /* 0x9A4 */ short eff_now;
    /* 0x9A6 */ unsigned char eff_draw_flag;
}; /* size = 0x09A8 */

#endif /* __Z64OVL_Z_OBJ_CHIKUWA__ */
