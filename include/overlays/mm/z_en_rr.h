#ifndef __Z64OVL_Z_EN_RR__
#define __Z64OVL_Z_EN_RR__

#define Z_EN_RR_ACTOR_NUMBER     0x006C
#define Z_EN_RR_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RR_OBJECT_NUMBER    0x00AB
#define Z_EN_RR_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_rr_s z_en_rr_t;
struct z_en_rr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe all_pipe;
    /* 0x194 */ ClObjPipe shield_pipe;
    /* 0x1E0 */ unsigned char damage_eff_kind;
    /* 0x1E1 */ unsigned char searchFG;
    /* 0x1E2 */ unsigned char shield;
    /* 0x1E4 */ short count;
    /* 0x1E6 */ short timer;
    /* 0x1E8 */ short anime_count;
    /* 0x1EA */ short tieTM;
    /* 0x1EC */ short damageTM;
    /* 0x1EE */ short damage_stop_timer;
    /* 0x1F0 */ short catchFG;
    /* 0x1F2 */ short uneAngle;
    /* 0x1F4 */ short uneAngleStep;
    /* 0x1F6 */ short max_uneAngleStep;
    /* 0x1F8 */ short uneAngStpAX;
    /* 0x1FA */ short uneAngStpAZ;
    /* 0x1FC */ short oc_clear_timer;
    /* 0x200 */ float uneCycle;
    /* 0x204 */ float max_uneCycle;
    /* 0x208 */ float uneSlope;
    /* 0x20C */ float max_uneSlope;
    /* 0x210 */ float morf_p;
    /* 0x214 */ float scale_speed;
    /* 0x218 */ float catch_pos;
    /* 0x21C */ float damage_eff_alpha;
    /* 0x220 */ float damage_eff_scale;
    /* 0x224 */ float damage_eff_scale2;
    /* 0x228 */ xyz_t mouth_pos;
    /* 0x234 */ xyz_t shape_pos[20];
    /* 0x324 */ En_Rr_Shape shape[5];
}; /* size = 0x03C4 */

#endif /* __Z64OVL_Z_EN_RR__ */
