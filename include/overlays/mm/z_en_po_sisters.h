#ifndef __Z64OVL_Z_EN_PO_SISTERS__
#define __Z64OVL_Z_EN_PO_SISTERS__

#define Z_EN_PO_SISTERS_ACTOR_NUMBER     0x01E8
#define Z_EN_PO_SISTERS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PO_SISTERS_OBJECT_NUMBER    0x01C5
#define Z_EN_PO_SISTERS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_po_sisters_s z_en_po_sisters_t;
struct z_en_po_sisters_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char type;
    /* 0x18D */ unsigned char bunsin;
    /* 0x18E */ unsigned char move_timer;
    /* 0x18F */ unsigned char anchor_timer;
    /* 0x190 */ unsigned char fire_cnt;
    /* 0x191 */ unsigned char work_bit;
    /* 0x192 */ short timer;
    /* 0x194 */ short appear_timer;
    /* 0x196 */ s_xyz joint1[12];
    /* 0x1DE */ s_xyz joint2[12];
    /* 0x226 */ rgba_t eye_env;
    /* 0x22C */ xyz_t fire_pos[8];
    /* 0x28C */ xyz_t shape_pos[8];
    /* 0x2EC */ float rot_distance;
    /* 0x2F0 */ float damage_eff_alpha;
    /* 0x2F4 */ float damage_eff_scale;
    /* 0x2F8 */ Light_list* light_list;
    /* 0x2FC */ Light_data light_data;
    /* 0x30C */ ClObjPipe all_pipe;
    /* 0x358 */ MtxF syokudai_mtx;
}; /* size = 0x0398 */

#endif /* __Z64OVL_Z_EN_PO_SISTERS__ */
