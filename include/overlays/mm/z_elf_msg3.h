#ifndef __Z64OVL_Z_ELF_MSG3__
#define __Z64OVL_Z_ELF_MSG3__

#define Z_ELF_MSG3_ACTOR_NUMBER     0x0146
#define Z_ELF_MSG3_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ELF_MSG3_OBJECT_NUMBER    0x0001
#define Z_ELF_MSG3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_elf_msg3_s z_elf_msg3_t;
struct z_elf_msg3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_ELF_MSG3__ */
