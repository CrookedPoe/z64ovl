#ifndef __Z64OVL_Z_OBJ_TOUDAI__
#define __Z64OVL_Z_OBJ_TOUDAI__

#define Z_OBJ_TOUDAI_ACTOR_NUMBER     0x014C
#define Z_OBJ_TOUDAI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TOUDAI_OBJECT_NUMBER    0x016D
#define Z_OBJ_TOUDAI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_toudai_s z_obj_toudai_t;
struct z_obj_toudai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x148 */ Vtx light_F[14];
    /* 0x228 */ float ratio;
    /* 0x22C */ float scr_count_0;
    /* 0x230 */ float scr_count_1;
    /* 0x234 */ short count;
    /* 0x236 */ unsigned char condition;
    /* 0x238 */ short chkmm;
}; /* size = 0x0240 */

#endif /* __Z64OVL_Z_OBJ_TOUDAI__ */
