#ifndef __Z64OVL_Z_BG_SPOT00_HANEBASI__
#define __Z64OVL_Z_BG_SPOT00_HANEBASI__

#define Z_BG_SPOT00_HANEBASI_ACTOR_NUMBER     0x004A
#define Z_BG_SPOT00_HANEBASI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT00_HANEBASI_OBJECT_NUMBER    0x002F
#define Z_BG_SPOT00_HANEBASI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot00_hanebasi_s z_bg_spot00_hanebasi_t;
struct z_bg_spot00_hanebasi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short aim_angle;
    /* 0x15C */ Light_list* light_list;
    /* 0x160 */ Light_data light_data;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_BG_SPOT00_HANEBASI__ */
