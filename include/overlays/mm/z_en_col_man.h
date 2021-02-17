#ifndef __Z64OVL_Z_EN_COL_MAN__
#define __Z64OVL_Z_EN_COL_MAN__

#define Z_EN_COL_MAN_ACTOR_NUMBER     0x01D9
#define Z_EN_COL_MAN_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_COL_MAN_OBJECT_NUMBER    0x0001
#define Z_EN_COL_MAN_FLAGS            (ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_col_man_s z_en_col_man_t;
struct z_en_col_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short stat_mode;
    /* 0x14C */ int sundry_count;
    /* 0x150 */ float scale;
    /* 0x154 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_COL_MAN__ */
