#ifndef __Z64OVL_Z_EN_NIW_LADY__
#define __Z64OVL_Z_EN_NIW_LADY__

#define Z_EN_NIW_LADY_ACTOR_NUMBER     0x013C
#define Z_EN_NIW_LADY_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_NIW_LADY_OBJECT_NUMBER    0x0110
#define Z_EN_NIW_LADY_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_niw_lady_s z_en_niw_lady_t;
struct z_en_niw_lady_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ s_xyz neck_angle;
    /* 0x24A */ s_xyz body_angle;
    /* 0x250 */ short parts_cont;
    /* 0x252 */ short message_end_code;
    /* 0x254 */ short wait_timer;
    /* 0x256 */ short eye_timer;
    /* 0x258 */ short niw_cont;
    /* 0x25A */ short niw_cont_BAK;
    /* 0x25C */ short heart_kakera_get;
    /* 0x25E */ short change_anime_cont;
    /* 0x260 */ short change_anime_BAK;
    /* 0x262 */ u8 bomb_frag;
    /* 0x263 */ u8 next_frag;
    /* 0x264 */ u8 cansel_frag;
    /* 0x265 */ u8 bure_frag;
    /* 0x266 */ u8 neck_frag;
    /* 0x267 */ u8 once_frag;
    /* 0x268 */ short type_index;
    /* 0x26A */ short message_index;
    /* 0x26C */ short eye_cont;
    /* 0x26E */ short anime_ok;
    /* 0x270 */ signed char change_bank_ID;
    /* 0x271 */ signed char anime_bank_ID;
    /* 0x274 */ int item_type;
    /* 0x278 */ NpcBasicAct npcbasic;
    /* 0x2A0 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_NIW_LADY__ */
