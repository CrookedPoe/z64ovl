#ifndef __Z64OVL_Z_BG_SPDWEB__
#define __Z64OVL_Z_BG_SPDWEB__

#define Z_BG_SPDWEB_ACTOR_NUMBER     0x0125
#define Z_BG_SPDWEB_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPDWEB_OBJECT_NUMBER    0x0158
#define Z_BG_SPDWEB_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spdweb_s z_bg_spdweb_t;
struct z_bg_spdweb_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ unsigned char sw_num;
    /* 0x161 */ unsigned char stop_key_flg;
    /* 0x162 */ short timer;
    /* 0x164 */ float offset_y;
    /* 0x168 */ ClObjTris ac_tris;
    /* 0x188 */ ClObjTrisElem tris_elem[4];
    /* 0x2F8 */ T_Vertex* bg_vtx;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_BG_SPDWEB__ */
