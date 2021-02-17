#ifndef __Z64OVL_Z_BG_JYA_COBRA__
#define __Z64OVL_Z_BG_JYA_COBRA__

#define Z_BG_JYA_COBRA_ACTOR_NUMBER     0x00FC
#define Z_BG_JYA_COBRA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_JYA_COBRA_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_COBRA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_cobra_s z_bg_jya_cobra_t;
struct z_bg_jya_cobra_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short power_cnt;
    /* 0x15A */ short direct;
    /* 0x15C */ short ang_idx;
    /* 0x15E */ short ang_spd;
    /* 0x160 */ short ang_pos;
    /* 0x162 */ unsigned char push_flag;
    /* 0x164 */ xyz_t pl_offset;
    /* 0x170 */ xyz_t start_pos;
    /* 0x17C */ float mir_power;
    /* 0x180 */ float mir_scaleZ;
    /* 0x184 */ unsigned char shadow_txt[4111];
}; /* size = 0x11A4 */

#endif /* __Z64OVL_Z_BG_JYA_COBRA__ */
