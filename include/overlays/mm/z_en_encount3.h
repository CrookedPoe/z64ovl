#ifndef __Z64OVL_Z_EN_ENCOUNT3__
#define __Z64OVL_Z_EN_ENCOUNT3__

#define Z_EN_ENCOUNT3_ACTOR_NUMBER     0x0112
#define Z_EN_ENCOUNT3_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ENCOUNT3_OBJECT_NUMBER    0x023B
#define Z_EN_ENCOUNT3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_encount3_s z_en_encount3_t;
struct z_en_encount3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ u8 check_flag;
    /* 0x14A */ short index;
    /* 0x14C */ short ende_bit;
    /* 0x14E */ short birth_cont;
    /* 0x150 */ short birth_max;
    /* 0x152 */ short enemy_index;
    /* 0x154 */ short enemy_name;
    /* 0x156 */ short enmey_indexBAK;
    /* 0x158 */ short mes_data;
    /* 0x15A */ short Event_now;
    /* 0x15C */ short save_bit;
    /* 0x15E */ short wait_timer;
    /* 0x160 */ float frame;
    /* 0x164 */ float persent;
    /* 0x168 */ float size;
    /* 0x16C */ float check_hani;
    /* 0x170 */ float fire_wall_A;
    /* 0x174 */ float scale_y;
    /* 0x178 */ float scale_MAX;
    /* 0x17C */ ACTOR* Garo_actor;
    /* 0x180 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_EN_ENCOUNT3__ */
