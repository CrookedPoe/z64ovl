#ifndef __Z64OVL_Z_EN_PO_FIELD__
#define __Z64OVL_Z_EN_PO_FIELD__

#define Z_EN_PO_FIELD_ACTOR_NUMBER     0x0175
#define Z_EN_PO_FIELD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PO_FIELD_OBJECT_NUMBER    0x006D
#define Z_EN_PO_FIELD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_QUAKE)

typedef struct z_en_po_field_s z_en_po_field_t;
struct z_en_po_field_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char move_timer;
    /* 0x185 */ unsigned char appear_num;
    /* 0x186 */ short timer;
    /* 0x188 */ short fire_angle_y;
    /* 0x18A */ short fire_timer;
    /* 0x18C */ s_xyz joint1[10];
    /* 0x1C8 */ s_xyz joint2[10];
    /* 0x204 */ rgba_t eye_env;
    /* 0x208 */ rgba_t kantera_env;
    /* 0x20C */ float work_length;
    /* 0x210 */ float fire_scale;
    /* 0x214 */ xyz_t fire_pos;
    /* 0x220 */ Light_list* light_list;
    /* 0x224 */ Light_data light_data;
    /* 0x234 */ ClObjPipe acoc_pipe;
    /* 0x280 */ ClObjPipe at_pipe;
}; /* size = 0x02DC */

#endif /* __Z64OVL_Z_EN_PO_FIELD__ */
