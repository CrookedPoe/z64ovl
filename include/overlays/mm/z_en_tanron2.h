#ifndef __Z64OVL_Z_EN_TANRON2__
#define __Z64OVL_Z_EN_TANRON2__

#define Z_EN_TANRON2_ACTOR_NUMBER     0x023E
#define Z_EN_TANRON2_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_TANRON2_OBJECT_NUMBER    0x015D
#define Z_EN_TANRON2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tanron2_s z_en_tanron2_t;
struct z_en_tanron2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short count;
    /* 0x14A */ short and_za;
    /* 0x14C */ short and_za_AD;
    /* 0x14E */ short timer[3];
    /* 0x154 */ short damage;
    /* 0x156 */ short damage_flash;
    /* 0x158 */ u8 move_mode;
    /* 0x159 */ u8 ac_flag;
    /* 0x15A */ u8 at_flag;
    /* 0x15B */ u8 shadow_flag;
    /* 0x15C */ float add_p;
    /* 0x160 */ float add_sp;
    /* 0x164 */ ClObjPipe pipe_info;
    /* 0x1B0 */ ClObjPipe at_pipe_info;
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_EN_TANRON2__ */
