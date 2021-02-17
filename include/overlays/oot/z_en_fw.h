#ifndef __Z64OVL_Z_EN_FW__
#define __Z64OVL_Z_EN_FW__

#define Z_EN_FW_ACTOR_NUMBER     0x00AB
#define Z_EN_FW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FW_OBJECT_NUMBER    0x009E
#define Z_EN_FW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_fw_s z_en_fw_t;
struct z_en_fw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjJntSph all_jntsph;
    /* 0x1A4 */ ClObjJntSphElem sph_elem[1];
    /* 0x1E4 */ xyz_t bomsetpos;
    /* 0x1F0 */ unsigned char hook;
    /* 0x1F2 */ short direction;
    /* 0x1F4 */ short bound;
    /* 0x1F6 */ short count;
    /* 0x1F8 */ short dmg_timer;
    /* 0x1FA */ short end_timer;
    /* 0x1FC */ short hit_timer;
    /* 0x1FE */ short brk_timer;
    /* 0x200 */ short snd_timer;
    /* 0x202 */ short timer;
    /* 0x204 */ short turn_stat;
    /* 0x208 */ float r;
    /* 0x20C */ s_xyz joint[11][2];
    /* 0x290 */ FwEff eff[20];
}; /* size = 0x0700 */

#endif /* __Z64OVL_Z_EN_FW__ */
