#ifndef __Z64OVL_Z_EN_VM__
#define __Z64OVL_Z_EN_VM__

#define Z_EN_VM_ACTOR_NUMBER     0x008A
#define Z_EN_VM_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_VM_OBJECT_NUMBER    0x008B
#define Z_EN_VM_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_vm_s z_en_vm_t;
struct z_en_vm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[11];
    /* 0x1C2 */ s_xyz joint2[11];
    /* 0x204 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x208 */ float search_area;
    /* 0x20C */ int mode;
    /* 0x210 */ int mode_timer;
    /* 0x214 */ xyz_t beam_st_pos;
    /* 0x220 */ xyz_t beam_st_pos2;
    /* 0x22C */ xyz_t beam_ed_pos;
    /* 0x238 */ xyz_t beam_size;
    /* 0x244 */ s_xyz beam_ang;
    /* 0x24A */ short tex_y;
    /* 0x24C */ short head_ang_y;
    /* 0x24E */ short s_wk0;
    /* 0x250 */ short s_wk1;
    /* 0x254 */ float beam_z_spd;
    /* 0x258 */ ClObjPipe pipe_pos;
    /* 0x2A4 */ ClObjSwrd sword_pos;
    /* 0x324 */ ClObjSwrd eye_pos;
}; /* size = 0x03B4 */

#endif /* __Z64OVL_Z_EN_VM__ */
