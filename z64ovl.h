#ifndef __Z64OVL_INCLUDED__
#define __Z64OVL_INCLUDED__

#define F3DEX_GBI_2 1

#if defined(NZLE)
# define OOT 1
# define GAME_OCARINA 1
# define DEBUG_ROM 1
#define RAM_SEGMENT_TABLE   0x80166FA8
#endif /* OoT Debug ROM (Master Quest) */

#if defined(CZLE)
# define OOT 1
# define GAME_OCARINA 1
#define RAM_SEGMENT_TABLE   0x80120C38
#endif /* OoT 1.0 (U) */

#if defined(NZSE)
# define MAJORA 1
# define GAME_MAJORA 1
#endif /* MM 1.0 (U) */

#if defined(NZSP)
# define MAJORA 1
# define GAME_MAJORA 1
# define DEBUG_ROM 1
#endif /* MM Debug ROM */

#if defined(NZSJ)
# define MAJORA 1
# define GAME_MAJORA 1
#endif /* MM 1.0 (J) */

#include "include/include.h"
#include "z64_functions.h"

#endif /* __Z64OVL_INCLUDED__ */
