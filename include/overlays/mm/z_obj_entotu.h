#ifndef __Z64OVL_Z_OBJ_ENTOTU__
#define __Z64OVL_Z_OBJ_ENTOTU__

#define Z_OBJ_ENTOTU_ACTOR_NUMBER     0x014D
#define Z_OBJ_ENTOTU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_ENTOTU_OBJECT_NUMBER    0x016D
#define Z_OBJ_ENTOTU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_entotu_s z_obj_entotu_t;
struct z_obj_entotu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x148 */ Vtx smork_F[7];
    /* 0x1B8 */ float ratio;
    /* 0x1BC */ float scr_count_0;
    /* 0x1C0 */ float scr_count_1;
    /* 0x1C4 */ unsigned char condition;
    /* 0x1C6 */ short chkmm;
}; /* size = 0x01C8 */

#endif /* __Z64OVL_Z_OBJ_ENTOTU__ */
