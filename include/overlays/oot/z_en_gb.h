#ifndef __Z64OVL_Z_EN_GB__
#define __Z64OVL_Z_EN_GB__

#define Z_EN_GB_ACTOR_NUMBER     0x01B8
#define Z_EN_GB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GB_OBJECT_NUMBER    0x0189
#define Z_EN_GB_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_gb_s z_en_gb_t;
struct z_en_gb_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ s_xyz joint1[12];
    /* 0x1E0 */ s_xyz joint2[12];
    /* 0x228 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x22C */ ClObjPipe pipe_info;
    /* 0x278 */ ClObjPipe bottle_pipe[3];
    /* 0x35C */ Light_list* light_list;
    /* 0x360 */ Light_data light_data;
    /* 0x36E */ unsigned short talk_message;
    /* 0x370 */ short count;
    /* 0x372 */ short timer;
    /* 0x374 */ rgba_t kantera_env;
    /* 0x378 */ Gb_Soul_Info soul[4];
}; /* size = 0x0438 */

#endif /* __Z64OVL_Z_EN_GB__ */
