#ifndef __Z64OVL_Z_EN_GIRLA__
#define __Z64OVL_Z_EN_GIRLA__

#define Z_EN_GIRLA_ACTOR_NUMBER     0x0004
#define Z_EN_GIRLA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GIRLA_OBJECT_NUMBER    0x0001
#define Z_EN_GIRLA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_girla_s z_en_girla_t;
struct z_en_girla_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ signed char change_bank_ID;
    /* 0x188 */ void* Proc;
    /* 0x18C */ int ok;
    /* 0x190 */ unshort sub_talk_message;
    /* 0x194 */ int carryNum;
    /* 0x198 */ short sellFG;
    /* 0x19C */ ITEM_CLRPROC clearProc;
    /* 0x1A0 */ ITEM_CLRPROC resetProc;
    /* 0x1A4 */ short revolve;
    /* 0x1A6 */ short base_angle;
    /* 0x1A8 */ short rotate_Y;
    /* 0x1AC */ ITEM_CHKPROC chkProc;
    /* 0x1B0 */ ITEM_PLUSPROC plusProc;
    /* 0x1B4 */ ITEM_PLUSPROC firstPlusProc;
    /* 0x1B8 */ short price;
    /* 0x1BA */ short kazu;
    /* 0x1BC */ short model_num;
    /* 0x1C0 */ HiliteReflectProc H_Proc;
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_EN_GIRLA__ */
