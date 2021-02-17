#ifndef __Z64OVL_Z_EN_KENDO_JS__
#define __Z64OVL_Z_EN_KENDO_JS__

#define Z_EN_KENDO_JS_ACTOR_NUMBER     0x01EF
#define Z_EN_KENDO_JS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KENDO_JS_OBJECT_NUMBER    0x010F
#define Z_EN_KENDO_JS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_kendo_js_s z_en_kendo_js_t;
struct z_en_kendo_js_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ s_xyz joint1[13];
    /* 0x226 */ s_xyz joint2[13];
    /* 0x274 */ s_xyz* path_ptr;
    /* 0x278 */ s_xyz neck_angle;
    /* 0x27E */ s_xyz body_angle;
    /* 0x284 */ short game_step;
    /* 0x286 */ short game_check_flag;
    /* 0x288 */ short old_message_no;
    /* 0x28A */ short talk_flag;
    /* 0x28C */ short maruta_count;
    /* 0x28E */ short maruta_kiru;
    /* 0x290 */ short proc_timer;
    /* 0x292 */ unchar maruta_anchor_flag;
}; /* size = 0x0294 */

#endif /* __Z64OVL_Z_EN_KENDO_JS__ */
