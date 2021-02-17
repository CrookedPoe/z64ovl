#ifndef __Z64OVL_Z_EN_TSN__
#define __Z64OVL_Z_EN_TSN__

#define Z_EN_TSN_ACTOR_NUMBER     0x01C2
#define Z_EN_TSN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TSN_OBJECT_NUMBER    0x01A9
#define Z_EN_TSN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_tsn_s z_en_tsn_t;
struct z_en_tsn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ ACTOR* tsn;
    /* 0x1DC */ short pwt_y[17];
    /* 0x1FE */ short pwt_z[17];
    /* 0x220 */ unshort flag;
    /* 0x222 */ s_xyz neck_angle;
    /* 0x228 */ s_xyz body_angle;
    /* 0x22E */ Eye_Anime eye_anime;
}; /* size = 0x0234 */

#endif /* __Z64OVL_Z_EN_TSN__ */
