#ifndef __Z64OVL_Z_EN_VM__
#define __Z64OVL_Z_EN_VM__

#define Z_EN_VM_ACTOR_NUMBER     0x0047
#define Z_EN_VM_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_VM_OBJECT_NUMBER    0x006A
#define Z_EN_VM_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_vm_s z_en_vm_t;
struct z_en_vm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[11];
    /* 0x1CA */ s_xyz joint2[11];
    /* 0x20C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x210 */ unsigned char beam_flg;
    /* 0x212 */ short tex_y;
    /* 0x214 */ short timer;
    /* 0x216 */ short head_angle_x;
    /* 0x218 */ short head_angle_y;
    /* 0x21C */ float search_area;
    /* 0x220 */ float beam_size_x;
    /* 0x224 */ float beam_size_z;
    /* 0x228 */ xyz_t beam_st_pos2;
    /* 0x234 */ xyz_t beam_ed_pos;
    /* 0x240 */ ClObjJntSph all_jntsph;
    /* 0x260 */ ClObjJntSphElem sph_elem[2];
    /* 0x2E0 */ ClObjTris at_tris;
    /* 0x300 */ ClObjTrisElem tris_elem;
}; /* size = 0x035C */

#endif /* __Z64OVL_Z_EN_VM__ */
