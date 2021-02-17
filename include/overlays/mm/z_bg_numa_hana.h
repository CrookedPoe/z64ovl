#ifndef __Z64OVL_Z_BG_NUMA_HANA__
#define __Z64OVL_Z_BG_NUMA_HANA__

#define Z_BG_NUMA_HANA_ACTOR_NUMBER     0x013D
#define Z_BG_NUMA_HANA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_NUMA_HANA_OBJECT_NUMBER    0x0164
#define Z_BG_NUMA_HANA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_bg_numa_hana_s z_bg_numa_hana_t;
struct z_bg_numa_hana_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ FireObjClLi fire;
    /* 0x1E8 */ ClObjPipe pipe;
    /* 0x234 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x238 */ Numa_Hana_Petal in[6];
    /* 0x2B0 */ Numa_Hana_Petal out[6];
    /* 0x328 */ short in_angle_total;
    /* 0x32A */ short in_angle_base;
    /* 0x32C */ short in_angle_speed;
    /* 0x32E */ short in_vib_angle;
    /* 0x330 */ short in_vib_th;
    /* 0x334 */ float in_vib_ampl;
    /* 0x338 */ short out_angle_base;
    /* 0x33A */ short out_angle_speed;
    /* 0x33C */ short kuki_angle_speed;
    /* 0x33E */ short timer;
}; /* size = 0x0340 */

#endif /* __Z64OVL_Z_BG_NUMA_HANA__ */
