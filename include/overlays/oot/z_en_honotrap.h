#ifndef __Z64OVL_Z_EN_HONOTRAP__
#define __Z64OVL_Z_EN_HONOTRAP__

#define Z_EN_HONOTRAP_ACTOR_NUMBER     0x011C
#define Z_EN_HONOTRAP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HONOTRAP_OBJECT_NUMBER    0x0003
#define Z_EN_HONOTRAP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_honotrap_s z_en_honotrap_t;
struct z_en_honotrap_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObj_HONOTRAP cl;
    /* 0x218 */ short timer;
    /* 0x21A */ short ptnNum;
    /* 0x21C */ xyz_t check_pos;
    /* 0x228 */ float spd;
    /* 0x22C */ short fi_1;
    /* 0x22E */ short tex_y_pos;
    /* 0x230 */ unsigned char hono_flag;
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_EN_HONOTRAP__ */
