#ifndef __Z64OVL_Z_OBJ_KENDO_KANBAN__
#define __Z64OVL_Z_OBJ_KENDO_KANBAN__

#define Z_OBJ_KENDO_KANBAN_ACTOR_NUMBER     0x0209
#define Z_OBJ_KENDO_KANBAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_OBJ_KENDO_KANBAN_OBJECT_NUMBER    0x01EE
#define Z_OBJ_KENDO_KANBAN_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_kendo_kanban_s z_obj_kendo_kanban_t;
struct z_obj_kendo_kanban_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ ClObjTris tris_info;
    /* 0x1B0 */ ClObjTrisElem tris_elem[2];
    /* 0x268 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x26C */ xyz_t bgcheck_pos[4];
    /* 0x29C */ xyz_t before_bgcheck_pos[4];
    /* 0x2CC */ xyz_t before_center;
    /* 0x2D8 */ xyz_t center;
    /* 0x2E4 */ xyz_t rot_center;
    /* 0x2F0 */ xyz_t rot_axis;
    /* 0x2FC */ int bgcheck_index;
    /* 0x300 */ short bgcheck_flag;
    /* 0x302 */ short rot_angle;
    /* 0x304 */ short rot_speed;
    /* 0x306 */ short rot_max;
    /* 0x308 */ short ground_hit_count;
    /* 0x30A */ short proc_timer;
    /* 0x30C */ unsigned char draw_bit;
}; /* size = 0x0310 */

#endif /* __Z64OVL_Z_OBJ_KENDO_KANBAN__ */
