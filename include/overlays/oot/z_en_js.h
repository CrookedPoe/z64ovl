#ifndef __Z64OVL_Z_EN_JS__
#define __Z64OVL_Z_EN_JS__

#define Z_EN_JS_ACTOR_NUMBER     0x016A
#define Z_EN_JS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JS_OBJECT_NUMBER    0x0144
#define Z_EN_JS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_js_s z_en_js_t;
struct z_en_js_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[13];
    /* 0x21A */ s_xyz joint2[13];
    /* 0x268 */ s_xyz neck_angle;
    /* 0x26E */ s_xyz body_angle;
    /* 0x274 */ unshort flag;
    /* 0x276 */ Eye_Anime eye_anime;
    /* 0x27C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0290 */

#endif /* __Z64OVL_Z_EN_JS__ */
