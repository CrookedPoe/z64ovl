#ifndef __Z64OVL_Z_EN_PO_DESERT__
#define __Z64OVL_Z_EN_PO_DESERT__

#define Z_EN_PO_DESERT_ACTOR_NUMBER     0x01BF
#define Z_EN_PO_DESERT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_PO_DESERT_OBJECT_NUMBER    0x006D
#define Z_EN_PO_DESERT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_INVISIBLE | ACTORFLAG_NO_QUAKE)

typedef struct z_en_po_desert_s z_en_po_desert_t;
struct z_en_po_desert_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short move_timer;
    /* 0x188 */ int aim_pos_num;
    /* 0x18C */ float pos_distance;
    /* 0x190 */ float pos_y;
    /* 0x194 */ float base_pos_y;
    /* 0x198 */ s_xyz joint1[10];
    /* 0x1D4 */ s_xyz joint2[10];
    /* 0x210 */ rgba_t eye_env;
    /* 0x214 */ Light_list* light_list;
    /* 0x218 */ Light_data light_data;
    /* 0x228 */ ClObjPipe oc_pipe;
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_EN_PO_DESERT__ */
