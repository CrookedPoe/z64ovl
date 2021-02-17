#ifndef __Z64OVL_Z_EN_RR__
#define __Z64OVL_Z_EN_RR__

#define Z_EN_RR_ACTOR_NUMBER     0x00DD
#define Z_EN_RR_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RR_OBJECT_NUMBER    0x00D4
#define Z_EN_RR_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_rr_s z_en_rr_t;
struct z_en_rr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe_info;
    /* 0x18C */ ClObjPipe mouth_info;
    /* 0x1D8 */ short count;
    /* 0x1DA */ short timer;
    /* 0x1DC */ short anime_count;
    /* 0x1DE */ short tieTM;
    /* 0x1E0 */ short damageTM;
    /* 0x1E2 */ short iceTM;
    /* 0x1E4 */ short catchFG;
    /* 0x1E6 */ short uneAngle;
    /* 0x1E8 */ float uneAngleStep;
    /* 0x1EC */ float max_uneAngleStep;
    /* 0x1F0 */ float uneAngStpS;
    /* 0x1F4 */ float uneAngStpAX;
    /* 0x1F8 */ float max_uneAngStpAX;
    /* 0x1FC */ float uneAngStpAZ;
    /* 0x200 */ float max_uneAngStpAZ;
    /* 0x204 */ float uneCycle;
    /* 0x208 */ float max_uneCycle;
    /* 0x20C */ float uneSlope;
    /* 0x210 */ float max_uneSlope;
    /* 0x214 */ En_Rr_Shape shape[5];
    /* 0x354 */ float morf_p;
    /* 0x358 */ float scale_speed;
    /* 0x35C */ float catch_pos;
    /* 0x360 */ unsigned char searchFG;
    /* 0x361 */ unsigned char deathFG;
    /* 0x362 */ unsigned char shield;
    /* 0x363 */ unsigned char cloth;
    /* 0x364 */ unsigned char item;
    /* 0x365 */ unsigned char escapeFG;
    /* 0x366 */ unsigned char stopFG;
    /* 0x368 */ short catchFG2;
    /* 0x36C */ xyz_t mouth_pos;
    /* 0x378 */ xyz_t shape_pos[5];
    /* 0x3B4 */ unsigned char shadow_txt[4096];
    /* 0x13B4 */ unsigned char shadow_txt2[4096];
}; /* size = 0x23C4 */

#endif /* __Z64OVL_Z_EN_RR__ */
