#ifndef __Z64OVL_Z_OBJ_DHOUSE__
#define __Z64OVL_Z_OBJ_DHOUSE__

#define Z_OBJ_DHOUSE_ACTOR_NUMBER     0x01E2
#define Z_OBJ_DHOUSE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_DHOUSE_OBJECT_NUMBER    0x01C1
#define Z_OBJ_DHOUSE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_obj_dhouse_s z_obj_dhouse_t;
struct z_obj_dhouse_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ DhouseHahenA hahen_a[7];
    /* 0x240 */ DhouseHahenB hahen_b[100];
    /* 0x1370 */ short mode_timer;
}; /* size = 0x1374 */

#endif /* __Z64OVL_Z_OBJ_DHOUSE__ */
