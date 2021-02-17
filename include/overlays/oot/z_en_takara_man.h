#ifndef __Z64OVL_Z_EN_TAKARA_MAN__
#define __Z64OVL_Z_EN_TAKARA_MAN__

#define Z_EN_TAKARA_MAN_ACTOR_NUMBER     0x017C
#define Z_EN_TAKARA_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TAKARA_MAN_OBJECT_NUMBER    0x0155
#define Z_EN_TAKARA_MAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_takara_man_s z_en_takara_man_t;
struct z_en_takara_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ SKELETON_INFO skeleton;
    /* 0x184 */ s_xyz joint1[10];
    /* 0x1C0 */ s_xyz joint2[10];
    /* 0x1FC */ short message_end_code;
    /* 0x1FE */ short eye_cont;
    /* 0x200 */ short eye_timer;
    /* 0x202 */ short parts_time;
    /* 0x204 */ short next_frag;
    /* 0x206 */ short romm_BAK;
    /* 0x208 */ short once_mode_frag;
    /* 0x20A */ short message_change_frag;
    /* 0x20C */ float eye_pos;
    /* 0x210 */ xyz_t pos;
    /* 0x21C */ s_xyz neck_angle;
    /* 0x222 */ s_xyz body_angle;
}; /* size = 0x0238 */

#endif /* __Z64OVL_Z_EN_TAKARA_MAN__ */
