#ifndef __Z64OVL_Z_DM_STK__
#define __Z64OVL_Z_DM_STK__

#define Z_DM_STK_ACTOR_NUMBER     0x0191
#define Z_DM_STK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DM_STK_OBJECT_NUMBER    0x0192
#define Z_DM_STK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_dm_stk_s z_dm_stk_t;
struct z_dm_stk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x294 */ ClObjPipe pipe_inf;
    /* 0x2E0 */ short anime_no;
    /* 0x2E4 */ int alpha;
    /* 0x2E8 */ unsigned int fog_r;
    /* 0x2EC */ unsigned int fog_g;
    /* 0x2F0 */ unsigned int fog_b;
    /* 0x2F4 */ unsigned int fog_a;
    /* 0x2F8 */ int fog_n;
    /* 0x2FC */ int fog_f;
    /* 0x300 */ float parcent;
    /* 0x304 */ xyz_t head_pos;
    /* 0x310 */ xyz_t secound_pos;
    /* 0x31C */ xyz_t pylon_pos;
    /* 0x328 */ unsigned short mes_timer;
    /* 0x32A */ unsigned short ypos_sin_work;
    /* 0x32C */ unsigned char musk_pat;
    /* 0x32D */ unsigned char hand_pat;
    /* 0x32E */ unsigned char start_mode;
    /* 0x32F */ unsigned char alpha_minus_mode;
    /* 0x330 */ int alpha_minus_timer;
    /* 0x334 */ unsigned char old_dousa;
    /* 0x335 */ unsigned char cross_mode;
    /* 0x336 */ signed char anime_bank_ID;
    /* 0x337 */ signed char anime_bank_ID2;
    /* 0x338 */ signed char anime_bank_ID3;
    /* 0x339 */ unsigned char mes_counter;
    /* 0x33A */ unsigned char okademo_mode;
    /* 0x33B */ unsigned char draw_sw;
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_DM_STK__ */
