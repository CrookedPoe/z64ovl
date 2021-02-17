#ifndef __Z64OVL_Z_DEMO_EC__
#define __Z64OVL_Z_DEMO_EC__

#define Z_DEMO_EC_ACTOR_NUMBER     0x0182
#define Z_DEMO_EC_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_EC_OBJECT_NUMBER    0x015A
#define Z_DEMO_EC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_ec_s z_demo_ec_t;
struct z_demo_ec_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ int main_mode;
    /* 0x188 */ int draw_mode;
    /* 0x18C */ int old_dousa;
    /* 0x190 */ int shape_bank_ID;
    /* 0x194 */ int anime_bank_ID;
}; /* size = 0x01A8 */

#endif /* __Z64OVL_Z_DEMO_EC__ */
