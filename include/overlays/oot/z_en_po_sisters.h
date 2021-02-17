#ifndef __Z64OVL_Z_EN_PO_SISTERS__
#define __Z64OVL_Z_EN_PO_SISTERS__

#define Z_EN_PO_SISTERS_ACTOR_NUMBER     0x0091
#define Z_EN_PO_SISTERS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PO_SISTERS_OBJECT_NUMBER    0x0099
#define Z_EN_PO_SISTERS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_po_sisters_s z_en_po_sisters_t;
struct z_en_po_sisters_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char type;
    /* 0x185 */ unsigned char bunsin;
    /* 0x186 */ unsigned char move_timer;
    /* 0x187 */ unsigned char anchor_timer;
    /* 0x188 */ unsigned char fire_cnt;
    /* 0x189 */ unsigned char work_bit;
    /* 0x18A */ short timer;
    /* 0x18C */ short appear_timer;
    /* 0x18E */ s_xyz joint1[12];
    /* 0x1D6 */ s_xyz joint2[12];
    /* 0x21E */ rgba_t eye_env;
    /* 0x224 */ xyz_t fire_pos[8];
    /* 0x284 */ float rot_distance;
    /* 0x288 */ Light_list* light_list;
    /* 0x28C */ Light_data light_data;
    /* 0x29C */ ClObjPipe all_pipe;
    /* 0x2E8 */ MtxF syokudai_mtx;
}; /* size = 0x0338 */

#endif /* __Z64OVL_Z_EN_PO_SISTERS__ */
