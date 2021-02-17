#ifndef __Z64OVL_Z_OBJ_TIMEBLOCK__
#define __Z64OVL_Z_OBJ_TIMEBLOCK__

#define Z_OBJ_TIMEBLOCK_ACTOR_NUMBER     0x01D1
#define Z_OBJ_TIMEBLOCK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_TIMEBLOCK_OBJECT_NUMBER    0x0190
#define Z_OBJ_TIMEBLOCK_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_obj_timeblock_s z_obj_timeblock_t;
struct z_obj_timeblock_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ int (*ocarinaProc)(/* ECOFF does not store param types */);
    /* 0x15C */ short effect_timer;
    /* 0x15E */ short ocarina_timer;
    /* 0x160 */ short bit_timer;
    /* 0x162 */ unsigned short old_ocarina;
    /* 0x164 */ unsigned char sw_bit;
    /* 0x165 */ unsigned char attr_bit;
    /* 0x166 */ unsigned char old_sw;
    /* 0x167 */ unsigned char save_type;
    /* 0x168 */ unsigned char appear_flag;
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_OBJ_TIMEBLOCK__ */
