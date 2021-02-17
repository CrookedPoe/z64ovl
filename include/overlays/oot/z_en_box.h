#ifndef __Z64OVL_Z_EN_BOX__
#define __Z64OVL_Z_EN_BOX__

#define Z_EN_BOX_ACTOR_NUMBER     0x000A
#define Z_EN_BOX_ACTOR_CATEGORY   ACTORCAT_CHEST
#define Z_EN_BOX_OBJECT_NUMBER    0x000E
#define Z_EN_BOX_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_box_s z_en_box_t;
struct z_en_box_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ int counter;
    /* 0x19C */ int one_point_demo;
    /* 0x1A0 */ float light_power;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ s_xyz now[5];
    /* 0x1C6 */ s_xyz morf[5];
    /* 0x1E4 */ short open;
    /* 0x1E6 */ unsigned char status;
    /* 0x1E7 */ unsigned char alpha;
    /* 0x1E8 */ unsigned char sw_index;
    /* 0x1E9 */ unsigned char set_type;
    /* 0x1EA */ unsigned char ice_counter;
    /* 0x1EB */ unsigned char oc_sc_end;
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_EN_BOX__ */
