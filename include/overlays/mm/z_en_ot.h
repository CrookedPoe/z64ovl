#ifndef __Z64OVL_Z_EN_OT__
#define __Z64OVL_Z_EN_OT__

#define Z_EN_OT_ACTOR_NUMBER     0x0205
#define Z_EN_OT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OT_OBJECT_NUMBER    0x01EC
#define Z_EN_OT_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ot_s z_en_ot_t;
struct z_en_ot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ s_xyz joint1[19];
    /* 0x24A */ s_xyz joint2[19];
    /* 0x2BC */ int amp_no;
    /* 0x2C0 */ Path_Run_Info_t path_run_info;
    /* 0x32C */ unsigned short stat;
    /* 0x330 */ xyz_t control_pos;
    /* 0x33C */ int type;
    /* 0x340 */ int path_point;
    /* 0x344 */ short type2;
    /* 0x346 */ short path_no;
    /* 0x348 */ xyz_t tgt_pos;
    /* 0x354 */ short eff_timer;
    /* 0x356 */ short event_id[4];
    /* 0x360 */ En_Ot_actor* friend_actor;
    /* 0x364 */ Light_list* light_list;
    /* 0x368 */ Light_data light_data;
    /* 0x378 */ xyz_t light_pos;
    /* 0x384 */ unsigned char mode;
    /* 0x388 */ int demo_no;
    /* 0x38C */ int get_item;
    /* 0x390 */ short tgt_ang;
    /* 0x394 */ xyz_t center_pos;
    /* 0x3A0 */ short loop_ang;
    /* 0x3A4 */ Ot_local_eff_t eff[10];
    /* 0x73C */ short wk_s[1];
    /* 0x740 */ float wkf[1];
    /* 0x744 */ ColorRGB light_color_m;
    /* 0x747 */ ColorRGB light_color;
    /* 0x74C */ xyz_t heart_pos;
}; /* size = 0x0758 */

#endif /* __Z64OVL_Z_EN_OT__ */
