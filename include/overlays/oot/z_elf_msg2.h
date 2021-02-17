#ifndef __Z64OVL_Z_ELF_MSG2__
#define __Z64OVL_Z_ELF_MSG2__

#define Z_ELF_MSG2_ACTOR_NUMBER     0x0173
#define Z_ELF_MSG2_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_ELF_MSG2_OBJECT_NUMBER    0x0001
#define Z_ELF_MSG2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_elf_msg2_s z_elf_msg2_t;
struct z_elf_msg2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_ELF_MSG2__ */
