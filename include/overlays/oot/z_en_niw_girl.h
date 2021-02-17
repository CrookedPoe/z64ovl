#ifndef __Z64OVL_Z_EN_NIW_GIRL__
#define __Z64OVL_Z_EN_NIW_GIRL__

#define Z_EN_NIW_GIRL_ACTOR_NUMBER     0x019A
#define Z_EN_NIW_GIRL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_NIW_GIRL_OBJECT_NUMBER    0x016A
#define Z_EN_NIW_GIRL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_niw_girl_s z_en_niw_girl_t;
struct z_en_niw_girl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ s_xyz neck_angle;
    /* 0x256 */ s_xyz body_angle;
    /* 0x25C */ short wait_timer;
    /* 0x25E */ short parts_time;
    /* 0x260 */ short message_end_code;
    /* 0x262 */ short eye_cont;
    /* 0x264 */ short eye_timer;
    /* 0x266 */ short index;
    /* 0x268 */ short path_point;
    /* 0x26A */ short next_frag;
    /* 0x26C */ float turn_speed;
    /* 0x270 */ float eye_pos;
    /* 0x274 */ ACTOR* Niw_Actor;
    /* 0x278 */ ClObjPipe acoc_pipe_info;
    /* 0x2C4 */ NpcBasicAct npcbasic;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_NIW_GIRL__ */
