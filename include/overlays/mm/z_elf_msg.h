#ifndef __Z64OVL_Z_ELF_MSG__
#define __Z64OVL_Z_ELF_MSG__

#define Z_ELF_MSG_ACTOR_NUMBER     0x008B
#define Z_ELF_MSG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ELF_MSG_OBJECT_NUMBER    0x0001
#define Z_ELF_MSG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_elf_msg_s z_elf_msg_t;
struct z_elf_msg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_ELF_MSG__ */
