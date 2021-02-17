#ifndef __Z64OVL_Z_BG_BOTIHASIRA__
#define __Z64OVL_Z_BG_BOTIHASIRA__

#define Z_BG_BOTIHASIRA_ACTOR_NUMBER     0x01F0
#define Z_BG_BOTIHASIRA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_BOTIHASIRA_OBJECT_NUMBER    0x01C9
#define Z_BG_BOTIHASIRA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_botihasira_s z_bg_botihasira_t;
struct z_bg_botihasira_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_BG_BOTIHASIRA__ */
