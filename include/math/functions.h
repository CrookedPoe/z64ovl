#ifndef __Z64OVL_MATH_FUNCTIONS_INCLUDED__
#define __Z64OVL_MATH_FUNCTIONS_INCLUDED__

#include "types.h"

#define LERP(MIN, MAX, STEP) (((MAX) - (MIN)) * (STEP) + (MIN))
#define PLERP(MIN, MAX, PER) ((MIN) * (PER) + (MAX) * (1.0f - (PER)))
#define MIN(MINA0, MINA1) (((MINA0)<(MINA1))?(MINA0):(MINA1))
#define MAX(MAXA0, MAXA1) (((MAXA0)>(MAXA1))?(MAXA0):(MAXA1))

/**********
* Returns the smaller of two floating point arguments, treating NaNs as missing data (between a NaN and a numeric value, the numeric value is chosen).
* Helper Author: <CrookedPoe>
**********/
#define fminf zh_fminf
static inline float zh_fminf(float x, float y)
{
    return MIN(x, y);
}

/**********
* Returns the larger of two floating point arguments, treating NaNs as missing data (between a NaN and a numeric value, the numeric value is chosen).
* Helper Author: <CrookedPoe>
**********/
#define fmaxf zh_fmaxf
static inline float zh_fmaxf(float x, float y)
{
    return MAX(x, y);
}

/**********
* Computes the largest integer value not greater than arg.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define floorf z_math_floorf
extern float z_math_floorf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_floorf = 0x800FCEB4");
#elif CZLE || OOT_U_1_0
    asm("z_math_floorf = 0x800CD544");
#elif NZSE || MM_U_1_0
    asm("z_math_floorf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_floorf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_floorf = 0x80800000");
#endif

/**********
* Computes the largest integer value not greater than arg.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ffloor z_fp_floorf
extern float z_fp_floorf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_floorf = 0x800FD390");
#elif CZLE || OOT_U_1_0
    asm("z_fp_floorf = 0x800CD8C0");
#elif NZSE || MM_U_1_0
    asm("z_fp_floorf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_floorf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_floorf = 0x80800000");
#endif

/**********
* Computes the largest integer value not greater than arg.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __floor z_fp_floor
extern double z_fp_floor(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_floor = 0x800FD390");
#elif CZLE || OOT_U_1_0
    asm("z_fp_floor = 0x800CD8C0");
#elif NZSE || MM_U_1_0
    asm("z_fp_floor = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_floor = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_floor = 0x80800000");
#endif

/**********
* Computes the largest integer value not greater than arg.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __iffloor z_fp_iffloor
extern int32_t z_fp_iffloor(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_iffloor = 0x800FD3A8");
#elif CZLE || OOT_U_1_0
    asm("z_fp_iffloor = 0x800CD8D8");
#elif NZSE || MM_U_1_0
    asm("z_fp_iffloor = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_iffloor = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_iffloor = 0x80800000");
#endif

/**********
* Computes the largest integer value not greater than arg.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ifloor z_fp_ifloor
extern uint32_t z_fp_ifloor(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ifloor = 0x800FD390");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ifloor = 0x800CD8C0");
#elif NZSE || MM_U_1_0
    asm("z_fp_ifloor = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ifloor = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ifloor = 0x80800000");
#endif

/**********
* Computes the largest integer value not greater than arg.
* Helper Author: <CrookedPoe>
**********/
#define floor(_a0)      \
_Generic((_a0),         \
    float: __ffloor,    \
    double: __floor,    \
    int32_t: __iffloor, \
    uint32_t: __ifloor  \
)(_a0)

/**********
* Computes the smallest integer value not less than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define ceilf z_math_ceilf
extern float z_math_ceilf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_ceilf = 0x800FCED4");
#elif CZLE || OOT_U_1_0
    asm("z_math_ceilf = 0x800CD564");
#elif NZSE || MM_U_1_0
    asm("z_math_ceilf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_ceilf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_ceilf = 0x80800000");
#endif

/**********
* Computes the smallest integer value not less than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __fceil z_fp_ceilf
extern float z_fp_ceilf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ceilf = 0x800FD3C8");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ceilf = 0x800CD8F8");
#elif NZSE || MM_U_1_0
    asm("z_fp_ceilf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ceilf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ceilf = 0x80800000");
#endif

/**********
* Computes the smallest integer value not less than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ceil z_fp_ceil
extern double z_fp_ceil(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ceil = 0x800FD3D4");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ceil = 0x800CD904");
#elif NZSE || MM_U_1_0
    asm("z_fp_ceil = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ceil = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ceil = 0x80800000");
#endif

/**********
* Computes the smallest integer value not less than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ifceil z_fp_ifceil
extern int32_t z_fp_ifceil(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ifceil = 0x800FD3E0");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ifceil = 0x800CD910");
#elif NZSE || MM_U_1_0
    asm("z_fp_ifceil = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ifceil = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ifceil = 0x80800000");
#endif

/**********
* Computes the smallest integer value not less than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __iceil z_fp_iceil
extern uint32_t z_fp_iceil(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_iceil = 0x800FD3F0");
#elif CZLE || OOT_U_1_0
    asm("z_fp_iceil = 0x800CD920");
#elif NZSE || MM_U_1_0
    asm("z_fp_iceil = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_iceil = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_iceil = 0x80800000");
#endif

/**********
* Computes the smallest integer value not less than arg. 
* Helper Author: <CrookedPoe>
**********/
#define ceil(_a0)      \
_Generic((_a0),         \
    float: __fceil,    \
    double: __ceil,    \
    int32_t: __ifceil, \
    uint32_t: __iceil  \
)(_a0)

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define truncf z_math_truncf
extern float z_math_truncf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_truncf = 0x800FCF14");
#elif CZLE || OOT_U_1_0
    asm("z_math_truncf = 0x800CD608");
#elif NZSE || MM_U_1_0
    asm("z_math_truncf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_truncf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_truncf = 0x80800000");
#endif

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ftrunc z_fp_truncf
extern float z_fp_truncf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_truncf = 0x800FD400");
#elif CZLE || OOT_U_1_0
    asm("z_fp_truncf = 0x800CD930");
#elif NZSE || MM_U_1_0
    asm("z_fp_truncf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_truncf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_truncf = 0x80800000");
#endif

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __trunc z_fp_trunc
extern double z_fp_trunc(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_trunc = 0x800FD40C");
#elif CZLE || OOT_U_1_0
    asm("z_fp_trunc = 0x800CD93C");
#elif NZSE || MM_U_1_0
    asm("z_fp_trunc = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_trunc = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_trunc = 0x80800000");
#endif

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __iftrunc z_fp_iftrunc
extern int32_t z_fp_iftrunc(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_iftrunc = 0x800FD418");
#elif CZLE || OOT_U_1_0
    asm("z_fp_iftrunc = 0x800CD948");
#elif NZSE || MM_U_1_0
    asm("z_fp_iftrunc = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_iftrunc = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_iftrunc = 0x80800000");
#endif

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __itrunc z_fp_itrunc
extern uint32_t z_fp_itrunc(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_itrunc = 0x800FD428");
#elif CZLE || OOT_U_1_0
    asm("z_fp_itrunc = 0x800CD958");
#elif NZSE || MM_U_1_0
    asm("z_fp_itrunc = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_itrunc = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_itrunc = 0x80800000");
#endif

/**********
* Computes the nearest integer not greater in magnitude than arg. 
* Helper Author: <CrookedPoe>
**********/
#define trunc(_a0)      \
_Generic((_a0),         \
    float: __ftrunc,    \
    double: __trunc,    \
    int32_t: __iftrunc, \
    uint32_t: __itrunc  \
)(_a0)

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define roundf z_math_roundf
extern float z_math_roundf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_roundf = 0x800FCEF4");
#elif CZLE || OOT_U_1_0
    asm("z_math_roundf = 0x800CD5E8");
#elif NZSE || MM_U_1_0
    asm("z_math_roundf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_roundf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_roundf = 0x80800000");
#endif

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __fround z_fp_roundf
extern float z_fp_roundf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_roundf = 0x800FD470");
#elif CZLE || OOT_U_1_0
    asm("z_fp_roundf = 0x800CD9A0");
#elif NZSE || MM_U_1_0
    asm("z_fp_roundf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_roundf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_roundf = 0x80800000");
#endif

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __round z_fp_round
extern double z_fp_round(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_round = 0x800FD48C");
#elif CZLE || OOT_U_1_0
    asm("z_fp_round = 0x800CD9BC");
#elif NZSE || MM_U_1_0
    asm("z_fp_round = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_round = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_round = 0x80800000");
#endif

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ifround z_fp_ifround
extern int32_t z_fp_ifround(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ifround = 0x800FD4AC");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ifround = 0x800CD9DC");
#elif NZSE || MM_U_1_0
    asm("z_fp_ifround = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ifround = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ifround = 0x80800000");
#endif

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __iround z_fp_iround
extern uint32_t z_fp_iround(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_iround = 0x800FD4CC");
#elif CZLE || OOT_U_1_0
    asm("z_fp_iround = 0x800CD9FC");
#elif NZSE || MM_U_1_0
    asm("z_fp_iround = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_iround = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_iround = 0x80800000");
#endif

/**********
* Computes the nearest integer value to arg (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. 
* Helper Author: <CrookedPoe>
**********/
#define round(_a0)      \
_Generic((_a0),         \
    float: __fround,    \
    double: __round,    \
    int32_t: __ifround, \
    uint32_t: __iround  \
)(_a0)

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define rintf z_math_rintf
extern float z_math_rintf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_rintf = 0x800FCF34");
#elif CZLE || OOT_U_1_0
    asm("z_math_rintf = 0x800CD628");
#elif NZSE || MM_U_1_0
    asm("z_math_rintf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_rintf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_rintf = 0x80800000");
#endif

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __frint z_fp_rintf
extern float z_fp_rintf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_rintf = 0x800FD438");
#elif CZLE || OOT_U_1_0
    asm("z_fp_rintf = 0x800CD968");
#elif NZSE || MM_U_1_0
    asm("z_fp_rintf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_rintf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_rintf = 0x80800000");
#endif

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __rint z_fp_rint
extern double z_fp_rint(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_rint = 0x800FD444");
#elif CZLE || OOT_U_1_0
    asm("z_fp_rint = 0x800CD974");
#elif NZSE || MM_U_1_0
    asm("z_fp_rint = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_rint = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_rint = 0x80800000");
#endif

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __ifrint z_fp_ifrint
extern int32_t z_fp_ifrint(float arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_ifrint = 0x800FD450");
#elif CZLE || OOT_U_1_0
    asm("z_fp_ifrint = 0x800CD980");
#elif NZSE || MM_U_1_0
    asm("z_fp_ifrint = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_ifrint = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_ifrint = 0x80800000");
#endif

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Source: math64_intrinsics.h
* TODO: Port to Majora's Mask
**********/
#define __irint z_fp_irint
extern uint32_t z_fp_irint(double arg);
#if NZLE || OOT_DEBUG
    asm("z_fp_irint = 0x800FD460");
#elif CZLE || OOT_U_1_0
    asm("z_fp_irint = 0x800CD990");
#elif NZSE || MM_U_1_0
    asm("z_fp_irint = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_fp_irint = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_fp_irint = 0x80800000");
#endif

/**********
* Rounds the floating-point argument arg to an integer value in floating-point format, using the current rounding mode.
* Helper Author: <CrookedPoe>
**********/
#define rint(_a0)      \
_Generic((_a0),         \
    float: __frint,    \
    double: __rint,    \
    int32_t: __ifrint, \
    uint32_t: __irint  \
)(_a0)

/**********
* Computes the tangent of arg (measured in radians).
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define tanf z_math_tanf
extern float z_math_tanf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_tanf = 0x800FCE80");
#elif CZLE || OOT_U_1_0
    asm("z_math_tanf = 0x800CD510");
#elif NZSE || MM_U_1_0
    asm("z_math_tanf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_tanf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_tanf = 0x80800000");
#endif

/**********
* Computes the principal value of the arc tangent of arg.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define atanf z_math_atanf_cfrac
extern float z_math_atanf_cfrac(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_atanf_cfrac = 0x800FD0C4");
#elif CZLE || OOT_U_1_0
    asm("z_math_atanf_cfrac = 0x800CD648");
#elif NZSE || MM_U_1_0
    asm("z_math_atanf_cfrac = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_atanf_cfrac = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_atanf_cfrac = 0x80800000");
#endif

/**********
* Computes the arc tangent of y/x using the signs of arguments to determine the correct quadrant.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define atan2f z_math_atan2f
extern float z_math_atan2f(float y, float x);
#if NZLE || OOT_DEBUG
    asm("z_math_atan2f = 0x800FD250");
#elif CZLE || OOT_U_1_0
    asm("z_math_atan2f = 0x800CD76C");
#elif NZSE || MM_U_1_0
    asm("z_math_atan2f = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_atan2f = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_atan2f = 0x80800000");
#endif

/**********
* Computes the principal values of the arc sine of arg.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define asinf z_math_asinf
extern float z_math_asinf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_asinf = 0x800FD338");
#elif CZLE || OOT_U_1_0
    asm("z_math_asinf = 0x800CD860");
#elif NZSE || MM_U_1_0
    asm("z_math_asinf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_asinf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_asinf = 0x80800000");
#endif

/**********
* Computes the principal value of the arc cosine of arg.
* Source: undefined
* TODO: Port to Majora's Mask
**********/
#define acosf z_math_acosf
extern float z_math_acosf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_math_acosf = 0x800FD368");
#elif CZLE || OOT_U_1_0
    asm("z_math_acosf = 0x800CD890");
#elif NZSE || MM_U_1_0
    asm("z_math_acosf = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("z_math_acosf = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_math_acosf = 0x80800000");
#endif

/**********
* Computes the sine of arg (measured in radians).
* Source: undefined
**********/
#define sinf z_sinf
extern float z_sinf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_sinf = 0x80100290");
#elif CZLE || OOT_U_1_0
    asm("z_sinf = 0x800CF470");
#elif NZSE || MM_U_1_0
    asm("z_sinf = 0x80088350");
#elif NZSP || MM_DEBUG
    asm("z_sinf = 0x8008B430");
#elif NZSJ || MM_J_1_0
    asm("z_sinf = 0x800892F0");
#endif

/**********
* Computes the sine of arg (measured in radians).
* Source: undefined
**********/
#define sins z_sins
extern int16_t z_sins(int16_t arg);
#if NZLE || OOT_DEBUG
    asm("z_sins = 0x80100450");
#elif CZLE || OOT_U_1_0
    asm("z_sins = 0x800CF630");
#elif NZSE || MM_U_1_0
    asm("z_sins = 0x80088510");
#elif NZSP || MM_DEBUG
    asm("z_sins = 0x8008B5F0");
#elif NZSJ || MM_J_1_0
    asm("z_sins = 0x800894B0");
#endif

/**********
* Computes square root of arg.
* Source: undefined
**********/
#define sqrtf z_sqrtf
extern float z_sqrtf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_sqrtf = 0x801031E0");
#elif CZLE || OOT_U_1_0
    asm("z_sqrtf = 0x800D0DC0");
#elif NZSE || MM_U_1_0
    asm("z_sqrtf = 0x8008D700");
#elif NZSP || MM_DEBUG
    asm("z_sqrtf = 0x80092260");
#elif NZSJ || MM_J_1_0
    asm("z_sqrtf = 0x8008E6A0");
#endif

/**********
* Computes the cosine of arg (measured in radians).
* Source: undefined
**********/
#define cosf z_cosf
extern float z_cosf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_cosf = 0x80104610");
#elif CZLE || OOT_U_1_0
    asm("z_cosf = 0x800D2CD0");
#elif NZSE || MM_U_1_0
    asm("z_cosf = 0x80091F40");
#elif NZSP || MM_DEBUG
    asm("z_cosf = 0x80097380");
#elif NZSJ || MM_J_1_0
    asm("z_cosf = 0x80092EE0");
#endif

/**********
* Computes the cosine of arg (measured in radians).
* Source: undefined
**********/
#define coss z_coss
extern int16_t z_coss(int16_t arg);
#if NZLE || OOT_DEBUG
    asm("z_coss = 0x80104780");
#elif CZLE || OOT_U_1_0
    asm("z_coss = 0x800D2FA0");
#elif NZSE || MM_U_1_0
    asm("z_coss = 0x80092260");
#elif NZSP || MM_DEBUG
    asm("z_coss = 0x800976A0");
#elif NZSJ || MM_J_1_0
    asm("z_coss = 0x80093200");
#endif

/**********
* Computes square root of arg.
* Source: undefined
**********/
#define sqrt z_sqrt
extern double z_sqrt(double arg);
#if NZLE || OOT_DEBUG
    asm("z_sqrt = 0x801067D0");
#elif CZLE || OOT_U_1_0
    asm("z_sqrt = 0x800D5DD0");
#elif NZSE || MM_U_1_0
    asm(
        "z_sqrt:                \n"
        "sqrt.D     $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#elif NZSP || MM_DEBUG
    asm(
        "z_sqrt:                \n"
        "sqrt.D     $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#elif NZSJ || MM_J_1_0
    asm(
        "z_sqrt:                \n"
        "sqrt.D     $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#endif

/**********
* Computes the absolute value of a floating point value arg.
* Source: undefined
**********/
#define fabsf z_absf
extern float z_absf(float arg);
#if NZLE || OOT_DEBUG
    asm("z_absf = 0x801067E0");
#elif CZLE || OOT_U_1_0
    asm(
        "z_absf:                \n"
        "abs.S      $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#elif NZSE || MM_U_1_0
    asm(
        "z_absf:                \n"
        "abs.S      $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#elif NZSP || MM_DEBUG
    asm(
        "z_absf:                \n"
        "abs.S      $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#elif NZSJ || MM_J_1_0
    asm(
        "z_absf:                \n"
        "abs.S      $f0, $f12   \n"
        "jr         $ra         \n"
        "nop                    \n"
    );
#endif

/**********
* Computes the floating-point remainder of the division operation (x/y).
* Source: undefined
**********/
#define fmodf z_modf
extern float z_modf(float x, float y);
#if NZLE || OOT_DEBUG
    asm("z_modf = 0x801067F0");
#elif CZLE || OOT_U_1_0
    asm("z_modf = 0x800D5DE0");
#elif NZSE || MM_U_1_0
    asm("z_modf = 0x80096830");
#elif NZSP || MM_DEBUG
    asm("z_modf = 0x8009F230");
#elif NZSJ || MM_J_1_0
    static inline float z_modf(float x, float y) {
        x = (y == 0.0f) ? 0.0f : (x - (x / y) * y);
        return x;
    }
#endif

#include "matrix/functions.h"
#include "vector/functions.h"

#endif /* __Z64OVL_MATH_FUNCTIONS_INCLUDED__ */