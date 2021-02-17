#ifndef __Z64OVL_Z_EN_KGY__
#define __Z64OVL_Z_EN_KGY__

#define Z_EN_KGY_ACTOR_NUMBER     0x01FF
#define Z_EN_KGY_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KGY_OBJECT_NUMBER    0x01D6
#define Z_EN_KGY_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_kgy_s z_en_kgy_t;
struct z_en_kgy_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[23];
    /* 0x212 */ s_xyz joint2[23];
    /* 0x29C */ unshort flag;
    /* 0x2A0 */ ACTOR* kbt;
    /* 0x2A4 */ ACTOR* ice;
    /* 0x2A8 */ xyz_t eye_pos;
    /* 0x2B4 */ xyz_t target;
    /* 0x2C0 */ xyz_t hibana;
    /* 0x2CC */ s_xyz neck_angle;
    /* 0x2D2 */ short anime;
    /* 0x2D4 */ short event_list[6];
    /* 0x2E0 */ short call;
    /* 0x2E2 */ short next_anime;
    /* 0x2E4 */ short wait_anime;
    /* 0x2E6 */ short camera_timer;
    /* 0x2E8 */ short wait_message;
    /* 0x2EA */ short tataku_cnt;
    /* 0x2EC */ Light_data light_data;
    /* 0x2FC */ Light_list* light_list;
    /* 0x300 */ short power;
    /* 0x304 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0308 */

#endif /* __Z64OVL_Z_EN_KGY__ */
