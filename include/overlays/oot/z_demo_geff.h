#ifndef __Z64OVL_Z_DEMO_GEFF__
#define __Z64OVL_Z_DEMO_GEFF__

#define Z_DEMO_GEFF_ACTOR_NUMBER     0x01B2
#define Z_DEMO_GEFF_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_DEMO_GEFF_OBJECT_NUMBER    0x0186
#define Z_DEMO_GEFF_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_geff_s z_demo_geff_t;
struct z_demo_geff_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int main_mode;
    /* 0x140 */ int draw_mode;
    /* 0x144 */ int shape_bank_ID;
    /* 0x148 */ ACTOR* pe_actor_p;
    /* 0x14C */ xyz_t off_set;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_DEMO_GEFF__ */
