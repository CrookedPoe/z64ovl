#ifndef __Z64OVL_Z_EN_GINKO_MAN__
#define __Z64OVL_Z_EN_GINKO_MAN__

#define Z_EN_GINKO_MAN_ACTOR_NUMBER     0x0177
#define Z_EN_GINKO_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GINKO_MAN_OBJECT_NUMBER    0x00E3
#define Z_EN_GINKO_MAN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ginko_man_s z_en_ginko_man_t;
struct z_en_ginko_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ s_xyz joint1[16];
    /* 0x1EC */ s_xyz joint2[16];
    /* 0x24C */ s_xyz neck_angle;
    /* 0x252 */ s_xyz body_angle;
    /* 0x258 */ short old_message_no;
    /* 0x25A */ short commission;
    /* 0x25C */ short select_point;
    /* 0x25E */ short first_customer;
    /* 0x260 */ short stamp_check_flag;
    /* 0x262 */ short old_bank_money;
    /* 0x264 */ short proc_timer;
}; /* size = 0x0268 */

#endif /* __Z64OVL_Z_EN_GINKO_MAN__ */
