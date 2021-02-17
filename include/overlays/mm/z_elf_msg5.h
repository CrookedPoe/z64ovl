#ifndef __Z64OVL_Z_ELF_MSG5__
#define __Z64OVL_Z_ELF_MSG5__

#define Z_ELF_MSG5_ACTOR_NUMBER     0x01D8
#define Z_ELF_MSG5_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_ELF_MSG5_OBJECT_NUMBER    0x0001
#define Z_ELF_MSG5_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_elf_msg5_s z_elf_msg5_t;
struct z_elf_msg5_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_ELF_MSG5__ */
