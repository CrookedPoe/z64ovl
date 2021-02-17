#ifndef __Z64OVL_Z_BG_HIDAN_FIREWALL__
#define __Z64OVL_Z_BG_HIDAN_FIREWALL__

#define Z_BG_HIDAN_FIREWALL_ACTOR_NUMBER     0x000C
#define Z_BG_HIDAN_FIREWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_FIREWALL_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_FIREWALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_firewall_s z_bg_hidan_firewall_t;
struct z_bg_hidan_firewall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short txt_num;
    /* 0x144 */ ClObjPipe atoc_pipe;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_BG_HIDAN_FIREWALL__ */
