#ifndef __Z64OVL_Z_ELF_MSG4__
#define __Z64OVL_Z_ELF_MSG4__

#define Z_ELF_MSG4_ACTOR_NUMBER     0x01D7
#define Z_ELF_MSG4_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ELF_MSG4_OBJECT_NUMBER    0x0001
#define Z_ELF_MSG4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_elf_msg4_s z_elf_msg4_t;
struct z_elf_msg4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* partner;
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_ELF_MSG4__ */
