#ifndef __Z64OVL_Z_EN_REEBA__
#define __Z64OVL_Z_EN_REEBA__

#define Z_EN_REEBA_ACTOR_NUMBER     0x001C
#define Z_EN_REEBA_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_REEBA_OBJECT_NUMBER    0x0017
#define Z_EN_REEBA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_reeba_s z_en_reeba_t;
struct z_en_reeba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[18];
    /* 0x1EC */ s_xyz joint2[18];
    /* 0x258 */ int mode;
    /* 0x25C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x260 */ short boss_no_timer;
    /* 0x262 */ short move_timer;
    /* 0x264 */ short sound_timer;
    /* 0x266 */ short damage_timer;
    /* 0x268 */ short wait_timer;
    /* 0x26A */ short big_mother;
    /* 0x26C */ short item_no;
    /* 0x26E */ short dead_frag;
    /* 0x270 */ short index;
    /* 0x274 */ float offset_y;
    /* 0x278 */ float surface_speed;
    /* 0x27C */ float scale;
    /* 0x280 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02DC */

#endif /* __Z64OVL_Z_EN_REEBA__ */
