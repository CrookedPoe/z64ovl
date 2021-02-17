#ifndef __Z64OVL_Z_EN_NIMOTSU__
#define __Z64OVL_Z_EN_NIMOTSU__

#define Z_EN_NIMOTSU_ACTOR_NUMBER     0x0264
#define Z_EN_NIMOTSU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NIMOTSU_OBJECT_NUMBER    0x00E3
#define Z_EN_NIMOTSU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nimotsu_s z_en_nimotsu_t;
struct z_en_nimotsu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ unsigned short statf;
    /* 0x1DA */ short timer;
}; /* size = 0x01DC */

#endif /* __Z64OVL_Z_EN_NIMOTSU__ */
