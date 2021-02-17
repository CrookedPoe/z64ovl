#ifndef __Z64OVL_Z_EN_SCOPECROW__
#define __Z64OVL_Z_EN_SCOPECROW__

#define Z_EN_SCOPECROW_ACTOR_NUMBER     0x024D
#define Z_EN_SCOPECROW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SCOPECROW_OBJECT_NUMBER    0x0006
#define Z_EN_SCOPECROW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_scopecrow_s z_en_scopecrow_t;
struct z_en_scopecrow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ s_xyz joint1[9];
    /* 0x1C2 */ s_xyz joint2[9];
    /* 0x1F8 */ Path_Info* path;
    /* 0x1FC */ int path_count;
    /* 0x200 */ ClObjJntSph all_jntsph;
    /* 0x220 */ ClObjJntSphElem sph_elem;
    /* 0x260 */ short ruppe_color;
    /* 0x262 */ short drop_point;
    /* 0x264 */ short fuwafuwa;
}; /* size = 0x0268 */

#endif /* __Z64OVL_Z_EN_SCOPECROW__ */
