#ifndef __Z64OVL_Z_EN_PO_RELAY__
#define __Z64OVL_Z_EN_PO_RELAY__

#define Z_EN_PO_RELAY_ACTOR_NUMBER     0x0122
#define Z_EN_PO_RELAY_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_PO_RELAY_OBJECT_NUMBER    0x0089
#define Z_EN_PO_RELAY_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_QUAKE | ACTORFLAG_FORCE_TALK)

typedef struct z_en_po_relay_s z_en_po_relay_t;
struct z_en_po_relay_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char hook_flg;
    /* 0x185 */ unsigned char move_timer;
    /* 0x186 */ short timer;
    /* 0x188 */ short aim_pos_num;
    /* 0x18A */ short aim_angle_y;
    /* 0x18C */ unsigned short keep_talk_message;
    /* 0x18E */ unsigned short eye_count;
    /* 0x190 */ s_xyz joint1[18];
    /* 0x1FC */ s_xyz joint2[18];
    /* 0x268 */ rgba_t kantera_env;
    /* 0x26C */ Light_list* light_list;
    /* 0x270 */ Light_data light_data;
    /* 0x280 */ ClObjPipe oc_pipe;
}; /* size = 0x02DC */

#endif /* __Z64OVL_Z_EN_PO_RELAY__ */
