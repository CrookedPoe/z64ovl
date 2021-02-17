#ifndef __Z64OVL_MICROCODE_FUNCTIONS_INCLUDED__
#define __Z64OVL_MICROCODE_FUNCTIONS_INCLUDED__

#include "types.h"

static inline void load_ucode(Gfx** buf, ucode_info_t* ucode)
{
    gSPLoadUcode((*buf)++
        , MIPS_KSEG0_TO_PHYS(ucode->text)
        , MIPS_KSEG0_TO_PHYS(ucode->data)
    );
}

#endif /* __Z64OVL_MICROCODE_FUNCTIONS_INCLUDED__ */