#ifndef __Z64OVL_Z_BG_DBLUE_WATERFALL__
#define __Z64OVL_Z_BG_DBLUE_WATERFALL__

#define Z_BG_DBLUE_WATERFALL_ACTOR_NUMBER     0x021C
#define Z_BG_DBLUE_WATERFALL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_DBLUE_WATERFALL_OBJECT_NUMBER    0x0184
#define Z_BG_DBLUE_WATERFALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_dblue_waterfall_s z_bg_dblue_waterfall_t;
struct z_bg_dblue_waterfall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ EvwAnimeInfo* evw_anime_data;
    /* 0x194 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x198 */ float air_min_y;
    /* 0x19C */ short mode_timer;
    /* 0x19E */ unsigned char water_alpha;
    /* 0x19F */ unsigned char ice_alpha;
    /* 0x1A0 */ unsigned char direct_alpha;
    /* 0x1A1 */ unsigned char pad_0[1];
    /* 0x1A2 */ signed char rot_conter;
    /* 0x1A3 */ signed char event_set_flag;
    /* 0x1A4 */ short event_num;
    /* 0x1A6 */ unsigned char pad_1[1];
    /* 0x1A7 */ signed char swirl_timer;
    /* 0x1A8 */ float swirl_speed;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_BG_DBLUE_WATERFALL__ */
