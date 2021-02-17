#ifndef __Z64OVL_Z_EN_RZ__
#define __Z64OVL_Z_EN_RZ__

#define Z_EN_RZ_ACTOR_NUMBER     0x027B
#define Z_EN_RZ_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RZ_OBJECT_NUMBER    0x024B
#define Z_EN_RZ_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_rz_s z_en_rz_t;
struct z_en_rz_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ unchar joint1[280];
    /* 0x2A0 */ unchar joint2[280];
    /* 0x3B8 */ Path_Info* path_data;
    /* 0x3BC */ int path_now;
    /* 0x3C0 */ ClObjPipe pipe_info;
    /* 0x40C */ ACTOR* sister;
    /* 0x410 */ Eye_Anime eye_anime;
    /* 0x414 */ xyz_t kosi;
    /* 0x420 */ unshort flag;
    /* 0x422 */ short anime;
    /* 0x424 */ short timer;
    /* 0x426 */ unshort part;
    /* 0x428 */ unshort dousa;
    /* 0x42A */ short event_list[2];
    /* 0x430 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0434 */

#endif /* __Z64OVL_Z_EN_RZ__ */
