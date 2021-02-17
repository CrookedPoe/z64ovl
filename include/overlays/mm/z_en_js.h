#ifndef __Z64OVL_Z_EN_JS__
#define __Z64OVL_Z_EN_JS__

#define Z_EN_JS_ACTOR_NUMBER     0x00BF
#define Z_EN_JS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JS_OBJECT_NUMBER    0x0271
#define Z_EN_JS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_js_s z_en_js_t;
struct z_en_js_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe pipe_info;
    /* 0x1D4 */ s_xyz joint1[18];
    /* 0x240 */ s_xyz joint2[18];
    /* 0x2AC */ Path_Info* path_data;
    /* 0x2B0 */ int path_now;
    /* 0x2B4 */ float tspd;
    /* 0x2B8 */ unshort flag;
    /* 0x2BA */ short omen;
    /* 0x2BC */ short timer;
    /* 0x2BE */ short event_list[2];
    /* 0x2C2 */ short call;
    /* 0x2C4 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_JS__ */
