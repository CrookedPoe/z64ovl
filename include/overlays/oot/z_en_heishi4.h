#ifndef __Z64OVL_Z_EN_HEISHI4__
#define __Z64OVL_Z_EN_HEISHI4__

#define Z_EN_HEISHI4_ACTOR_NUMBER     0x0178
#define Z_EN_HEISHI4_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HEISHI4_OBJECT_NUMBER    0x0097
#define Z_EN_HEISHI4_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_heishi4_s z_en_heishi4_t;
struct z_en_heishi4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ s_xyz neck_angle;
    /* 0x256 */ s_xyz body_angle;
    /* 0x25C */ xyz_t pos;
    /* 0x268 */ float eye_pos;
    /* 0x26C */ short chrno;
    /* 0x26E */ short parts_time;
    /* 0x270 */ short index;
    /* 0x272 */ short message_end_code;
    /* 0x274 */ short next_frag;
    /* 0x278 */ float ende_frame;
    /* 0x27C */ NpcBasicAct npcbasic;
    /* 0x2A4 */ u8 mask_message_frag;
    /* 0x2A8 */ int talk_flag;
    /* 0x2AC */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0308 */

#endif /* __Z64OVL_Z_EN_HEISHI4__ */
