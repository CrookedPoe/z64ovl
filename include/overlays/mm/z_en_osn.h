#ifndef __Z64OVL_Z_EN_OSN__
#define __Z64OVL_Z_EN_OSN__

#define Z_EN_OSN_ACTOR_NUMBER     0x01B5
#define Z_EN_OSN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OSN_OBJECT_NUMBER    0x01A3
#define Z_EN_OSN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_osn_s z_en_osn_t;
struct z_en_osn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ s_xyz neck_angle;
    /* 0x1DE */ s_xyz body_angle;
    /* 0x1E4 */ unshort old_message_no;
    /* 0x1E6 */ unshort flag;
    /* 0x1E8 */ unshort type;
    /* 0x1EA */ unsigned short statf;
    /* 0x1EC */ unsigned char anime_no;
    /* 0x1ED */ unsigned char old_dousa;
    /* 0x1EE */ short eventmgr;
    /* 0x1F0 */ unsigned char neck_flag;
    /* 0x1F2 */ short anm_count;
    /* 0x1F4 */ unshort mes_no;
    /* 0x1F8 */ u32 maskchk;
    /* 0x1FC */ unsigned char shape_alpha;
}; /* size = 0x0200 */

#endif /* __Z64OVL_Z_EN_OSN__ */
