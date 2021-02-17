#ifndef __Z64OVL_Z_OBJ_SWITCH__
#define __Z64OVL_Z_OBJ_SWITCH__

#define Z_OBJ_SWITCH_ACTOR_NUMBER     0x0093
#define Z_OBJ_SWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_OBJ_SWITCH_OBJECT_NUMBER    0x0003
#define Z_OBJ_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_switch_s z_obj_switch_t;
struct z_obj_switch_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x160 */ short timer;
    /* 0x162 */ short no_react_timer;
    /* 0x164 */ signed char ptn_num;
    /* 0x165 */ signed char no_form_se_timer;
    /* 0x168 */ unsigned long tex_scrl_pram;
    /* 0x16C */ ColorRGB c;
    /* 0x16F */ unsigned char old_info;
    /* 0x170 */ signed char bring_pl_flag;
    /* 0x171 */ signed char to_sw_flag;
    /* 0x172 */ signed char event_stop_flag;
    /* 0x174 */ void (*event_after_proc)(/* ECOFF does not store param types */);
    /* 0x178 */ ClObj_SWITCH cl;
    /* 0x250 */ float fumi_up_scale;
    /* 0x254 */ float fumi_down_scale;
}; /* size = 0x0258 */

#endif /* __Z64OVL_Z_OBJ_SWITCH__ */
