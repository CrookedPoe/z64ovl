#ifndef __Z64OVL_Z_EN_ELFBUB__
#define __Z64OVL_Z_EN_ELFBUB__

#define Z_EN_ELFBUB_ACTOR_NUMBER     0x01B1
#define Z_EN_ELFBUB_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_ELFBUB_OBJECT_NUMBER    0x000E
#define Z_EN_ELFBUB_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_en_elfbub_s z_en_elfbub_t;
struct z_en_elfbub_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ short une_angle;
    /* 0x192 */ short une_speed;
    /* 0x194 */ short speedY_angle;
    /* 0x196 */ short timer;
    /* 0x198 */ float une_wid;
    /* 0x19C */ float sc;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_ELFBUB__ */
