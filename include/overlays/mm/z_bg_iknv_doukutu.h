#ifndef __Z64OVL_Z_BG_IKNV_DOUKUTU__
#define __Z64OVL_Z_BG_IKNV_DOUKUTU__

#define Z_BG_IKNV_DOUKUTU_ACTOR_NUMBER     0x025B
#define Z_BG_IKNV_DOUKUTU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKNV_DOUKUTU_OBJECT_NUMBER    0x0237
#define Z_BG_IKNV_DOUKUTU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_iknv_doukutu_s z_bg_iknv_doukutu_t;
struct z_bg_iknv_doukutu_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ unshort flag;
    /* 0x15E */ unshort parts;
    /* 0x160 */ float alpha;
    /* 0x164 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_IKNV_DOUKUTU__ */
