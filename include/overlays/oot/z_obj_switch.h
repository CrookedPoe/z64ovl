#ifndef __Z64OVL_Z_OBJ_SWITCH__
#define __Z64OVL_Z_OBJ_SWITCH__

#define Z_OBJ_SWITCH_ACTOR_NUMBER     0x012A
#define Z_OBJ_SWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_OBJ_SWITCH_OBJECT_NUMBER    0x0003
#define Z_OBJ_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_switch_s z_obj_switch_t;
struct z_obj_switch_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ short no_react_timer;
    /* 0x15C */ short attention_timer;
    /* 0x15E */ unsigned char make_att_flag;
    /* 0x160 */ short ptn_num;
    /* 0x164 */ unsigned short* anime_txt;
    /* 0x168 */ unsigned char tex1_x_pos;
    /* 0x169 */ unsigned char tex1_y_pos;
    /* 0x16A */ unsigned char tex2_x_pos;
    /* 0x16B */ unsigned char tex2_y_pos;
    /* 0x16C */ ColorRGB c;
    /* 0x16F */ unsigned char old_info;
    /* 0x170 */ ClObj_SWITCH cl;
}; /* size = 0x0258 */

#endif /* __Z64OVL_Z_OBJ_SWITCH__ */
