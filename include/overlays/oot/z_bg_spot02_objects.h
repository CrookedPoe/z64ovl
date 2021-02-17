#ifndef __Z64OVL_Z_BG_SPOT02_OBJECTS__
#define __Z64OVL_Z_BG_SPOT02_OBJECTS__

#define Z_BG_SPOT02_OBJECTS_ACTOR_NUMBER     0x009C
#define Z_BG_SPOT02_OBJECTS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT02_OBJECTS_OBJECT_NUMBER    0x00A1
#define Z_BG_SPOT02_OBJECTS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot02_objects_s z_bg_spot02_objects_t;
struct z_bg_spot02_objects_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ unsigned char pattern;
    /* 0x15B */ unsigned char sw_num;
    /* 0x15C */ float scale;
    /* 0x160 */ unsigned short yscale;
    /* 0x162 */ unsigned short oldyscale;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_SPOT02_OBJECTS__ */
