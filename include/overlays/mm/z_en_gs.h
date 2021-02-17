#ifndef __Z64OVL_Z_EN_GS__
#define __Z64OVL_Z_EN_GS__

#define Z_EN_GS_ACTOR_NUMBER     0x00EF
#define Z_EN_GS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GS_OBJECT_NUMBER    0x0143
#define Z_EN_GS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_gs_s z_en_gs_t;
struct z_en_gs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ signed char color_type;
    /* 0x195 */ unsigned char arg0;
    /* 0x196 */ unsigned char arg1;
    /* 0x197 */ signed char hit_cnt;
    /* 0x198 */ short no;
    /* 0x19A */ short stat;
    /* 0x19C */ signed char demo_no;
    /* 0x19D */ unsigned char dm_stp;
    /* 0x19E */ s_xyz dm_rot[3];
    /* 0x1B0 */ xyz_t dm_scl[3];
    /* 0x1D4 */ short tm[4];
    /* 0x1DC */ float fwk[6];
    /* 0x1F4 */ ColorRGB color_s;
    /* 0x1F7 */ ColorRGB color_t;
    /* 0x1FA */ ColorRGB color;
    /* 0x200 */ float color_per;
    /* 0x204 */ int vc_count;
    /* 0x208 */ int reaction;
    /* 0x20C */ int get_item;
    /* 0x210 */ unsigned short say_message;
    /* 0x212 */ short event_id[2];
    /* 0x216 */ short ill_alpha_tgt;
    /* 0x218 */ short ill_alpha_now;
    /* 0x21A */ short collision_tm;
    /* 0x21C */ short quake_value;
    /* 0x21E */ short quake_time;
}; /* size = 0x0220 */

#endif /* __Z64OVL_Z_EN_GS__ */
