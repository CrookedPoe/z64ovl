#ifndef __Z64OVL_Z_EN_SKJ__
#define __Z64OVL_Z_EN_SKJ__

#define Z_EN_SKJ_ACTOR_NUMBER     0x0115
#define Z_EN_SKJ_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SKJ_OBJECT_NUMBER    0x010A
#define Z_EN_SKJ_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_skj_s z_en_skj_t;
struct z_en_skj_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[19];
    /* 0x1F2 */ s_xyz joint2[19];
    /* 0x264 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x268 */ ClObjPipe pipe_info;
    /* 0x2B4 */ unsigned short talk_message;
    /* 0x2B6 */ short count;
    /* 0x2B8 */ short visual_field;
    /* 0x2BA */ short timer;
    /* 0x2BC */ short timer2;
    /* 0x2BE */ short timer3;
    /* 0x2C0 */ unsigned char amode;
    /* 0x2C1 */ unsigned char pmode;
    /* 0x2C2 */ unsigned char escape_flag;
    /* 0x2C3 */ unsigned char cross_sw;
    /* 0x2C4 */ unsigned char neelde;
    /* 0x2C5 */ unsigned char hit;
    /* 0x2C6 */ unsigned char ocarina;
    /* 0x2C7 */ unsigned char fade_in;
    /* 0x2C8 */ unsigned char danceFG;
    /* 0x2CC */ unsigned int alpha;
    /* 0x2D0 */ xyz_t center;
    /* 0x2DC */ float distance;
    /* 0x2E0 */ float turn_speed;
    /* 0x2E4 */ xyz_t init_pos;
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ short count;
    /* 0x1D2 */ short life_timer;
    /* 0x1D4 */ float speed;
}; /* size = 0x0300 */

#endif /* __Z64OVL_Z_EN_SKJ__ */
