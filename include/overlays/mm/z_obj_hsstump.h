#ifndef __Z64OVL_Z_OBJ_HSSTUMP__
#define __Z64OVL_Z_OBJ_HSSTUMP__

#define Z_OBJ_HSSTUMP_ACTOR_NUMBER     0x025E
#define Z_OBJ_HSSTUMP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_HSSTUMP_OBJECT_NUMBER    0x0239
#define Z_OBJ_HSSTUMP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_hsstump_s z_obj_hsstump_t;
struct z_obj_hsstump_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short arg1;
    /* 0x162 */ unsigned char type;
    /* 0x164 */ short counter;
    /* 0x166 */ short wave_frq;
    /* 0x168 */ float wave_amp;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_OBJ_HSSTUMP__ */
