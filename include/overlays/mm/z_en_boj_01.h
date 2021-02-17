#ifndef __Z64OVL_Z_EN_BOJ_01__
#define __Z64OVL_Z_EN_BOJ_01__

#define Z_EN_BOJ_01_ACTOR_NUMBER     0x0118
#define Z_EN_BOJ_01_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOJ_01_OBJECT_NUMBER    0x0001
#define Z_EN_BOJ_01_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_boj_01_s z_en_boj_01_t;
struct z_en_boj_01_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ Gfx* s[16];
    /* 0x1CC */ signed char atama_bank_ID;
    /* 0x1CD */ signed char upper_bank_ID;
    /* 0x1CE */ signed char lower_bank_ID;
    /* 0x1CF */ signed char anime_bank_ID;
    /* 0x1D0 */ ClObjPipe all_pipe;
    /* 0x21C */ short count;
    /* 0x21E */ short timer;
    /* 0x220 */ Path_Info* path;
    /* 0x224 */ float path_count;
    /* 0x228 */ int path_index;
    /* 0x22C */ float talk_range;
    /* 0x230 */ short ror_atama_sx;
    /* 0x232 */ short ror_atama_sy;
    /* 0x234 */ short ror_waist_sx;
    /* 0x236 */ short ror_waist_sy;
    /* 0x238 */ short atama_sx;
    /* 0x23A */ short atama_sy;
    /* 0x23C */ short waist_sx;
    /* 0x23E */ short waist_sy;
    /* 0x240 */ float p;
    /* 0x244 */ xyz_t eye;
    /* 0x250 */ short look_timer;
    /* 0x252 */ short look_angle;
    /* 0x254 */ s_xyz joint[16][2];
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_BOJ_01__ */
