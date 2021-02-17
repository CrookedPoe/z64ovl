#ifndef __Z64OVL_Z_EN_HONOTRAP__
#define __Z64OVL_Z_EN_HONOTRAP__

#define Z_EN_HONOTRAP_ACTOR_NUMBER     0x008C
#define Z_EN_HONOTRAP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HONOTRAP_OBJECT_NUMBER    0x0003
#define Z_EN_HONOTRAP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_honotrap_s z_en_honotrap_t;
struct z_en_honotrap_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObj_HONOTRAP cl;
    /* 0x220 */ short timer;
    /* 0x222 */ short ptnNum;
    /* 0x224 */ short fire_cnt;
    /* 0x228 */ xyz_t check_pos;
    /* 0x234 */ float spd;
    /* 0x238 */ short fi_1;
    /* 0x23A */ short tex_y_pos;
    /* 0x23C */ HonotrapHono2 hono2;
    /* 0x2C0 */ unsigned char hono_flag;
}; /* size = 0x02C4 */

#endif /* __Z64OVL_Z_EN_HONOTRAP__ */
