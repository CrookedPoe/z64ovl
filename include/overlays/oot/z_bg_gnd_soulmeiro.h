#ifndef __Z64OVL_Z_BG_GND_SOULMEIRO__
#define __Z64OVL_Z_BG_GND_SOULMEIRO__

#define Z_BG_GND_SOULMEIRO_ACTOR_NUMBER     0x01B5
#define Z_BG_GND_SOULMEIRO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GND_SOULMEIRO_OBJECT_NUMBER    0x0179
#define Z_BG_GND_SOULMEIRO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_gnd_soulmeiro_s z_bg_gnd_soulmeiro_t;
struct z_bg_gnd_soulmeiro_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ unshort timer;
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_BG_GND_SOULMEIRO__ */
