#ifndef __Z64OVL_Z_FISHING__
#define __Z64OVL_Z_FISHING__

#define Z_FISHING_ACTOR_NUMBER     0x00FE
#define Z_FISHING_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_FISHING_OBJECT_NUMBER    0x015B
#define Z_FISHING_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_fishing_s z_fishing_t;
struct z_fishing_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ u8 kind;
    /* 0x141 */ u8 power_move;
    /* 0x142 */ u8 yowari;
    /* 0x144 */ short yowari_ya;
    /* 0x146 */ u8 yowari_p;
    /* 0x147 */ u8 hikiyose_power;
    /* 0x148 */ short move_mode;
    /* 0x14A */ short move_mode_S;
    /* 0x14C */ short work[15];
    /* 0x16A */ short timer[4];
    /* 0x174 */ float fwork[7];
    /* 0x190 */ short wall_hit;
    /* 0x192 */ short not_eat_time;
    /* 0x194 */ short wait_time;
    /* 0x198 */ float brain;
    /* 0x19C */ float size;
    /* 0x1A0 */ float angle_sp;
    /* 0x1A4 */ xyz_t target_pos;
    /* 0x1B0 */ xyz_t pl_catch_pos;
    /* 0x1BC */ short body_ya[3];
    /* 0x1C2 */ u8 bubble_time;
    /* 0x1C3 */ u8 message_mode;
    /* 0x1C4 */ u8 message_wait;
    /* 0x1C5 */ u8 demo_mess_sel;
    /* 0x1C8 */ SKELETON_INFO skeleton;
    /* 0x20C */ Light_list* light_list;
    /* 0x210 */ Light_data light_data;
    /* 0x220 */ ClObjJntSph ishi_jntsph_info;
    /* 0x240 */ ClObjJntSphElem jntsph_elem[12];
}; /* size = 0x0550 */

#endif /* __Z64OVL_Z_FISHING__ */
