#ifndef __Z64OVL_MATRIX_FUNCTIONS_INCLUDED__
#define __Z64OVL_MATRIX_FUNCTIONS_INCLUDED__

#include "types.h"

/**********
* Allocate space for a new fixed-point matrix.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_NewMtx z_matrix_new_fixed
#ifdef DEBUG_ROM
    #define z_matrix_new_fixed(gfx) (z_matrix_new_fixed)((gfx), __FILE__, __LINE__)
#else
    #define z_matrix_new_fixed(gfx) (z_matrix_new_fixed)((gfx))
#endif
extern Mtx* (z_matrix_new_fixed)(
    gfx_t* gfx_ctx
#ifdef DEBUG_ROM
    , const char* str
    , int32_t line
#endif
);
#if NZLE || OOT_DEBUG
    asm("z_matrix_new_fixed = 0x800D1A88");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_new_fixed = 0x800AB900");
#elif NZSE || MM_U_1_0
    asm("z_matrix_new_fixed = 0x80181A40");
#elif NZSP || MM_DEBUG
    asm("z_matrix_new_fixed = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_new_fixed = 0x80800000");
#endif

/**********
* Push the current matrix onto the stack.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_Push z_matrix_push
#define Matrix_push z_matrix_push
extern void z_matrix_push();
#if NZLE || OOT_DEBUG
    asm("z_matrix_push = 0x800D084C");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_push = 0x800AA6EC");
#elif NZSE || MM_U_1_0
    asm("z_matrix_push = 0x8018019C");
#elif NZSP || MM_DEBUG
    asm("z_matrix_push = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_push = 0x80800000");
#endif

/**********
* Pop the current matrix off of the stack.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_Pull z_matrix_pop
#define Matrix_pull z_matrix_pop
extern void z_matrix_pop();
#if NZLE || OOT_DEBUG
    asm("z_matrix_pop = 0x800D0884");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_pop = 0x800AA724");
#elif NZSE || MM_U_1_0
    asm("z_matrix_pop = 0x801801CC");
#elif NZSP || MM_DEBUG
    asm("z_matrix_pop = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_pop = 0x80800000");
#endif

/**********
* Translate the current matrix by an x, y, and z coordinate.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_Translate z_matrix_translate
#define Matrix_translate z_matrix_translate
extern void z_matrix_translate(float x, float y, float z, uint8_t mode);
#if NZLE || OOT_DEBUG
    asm("z_matrix_translate = 0x800D0984");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_translate = 0x800AA7F4");
#elif NZSE || MM_U_1_0
    asm("z_matrix_translate = 0x8018029C");
#elif NZSP || MM_DEBUG
    asm("z_matrix_translate = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_translate = 0x80800000");
#endif

/**********
* Scale the current matrix by an x, y, and z coordinate.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_Scale z_matrix_scale
#define Matrix_scale z_matrix_scale
extern void z_matrix_scale(float x, float y, float z, uint8_t mode);
#if NZLE || OOT_DEBUG
    asm("z_matrix_scale = 0x800D0A8C");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_scale = 0x800AA8FC");
#elif NZSE || MM_U_1_0
    asm("z_matrix_scale = 0x8018039C");
#elif NZSP || MM_DEBUG
    asm("z_matrix_scale = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_scale = 0x80800000");
#endif

/**********
* Rotate the current matrix by an x, y, and z coordinate.
* Source: sys_matrix.c
* TODO: Port to Majora's Mask
**********/
#define Matrix_RotateRPY z_matrix_rotate_xyz
#define Matrix_rotateXYZ z_matrix_rotate_xyz
extern void z_matrix_rotate_xyz(float x, float y, float z, uint8_t mode);
#if NZLE || OOT_DEBUG
    asm("z_matrix_rotate_xyz = 0x800D1084");
#elif CZLE || OOT_U_1_0
    asm("z_matrix_rotate_xyz = 0x800AA8FC");
#elif NZSE || MM_U_1_0
    asm("z_matrix_rotate_xyz = 0x8018039C");
#elif NZSP || MM_DEBUG
    asm("z_matrix_rotate_xyz = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("z_matrix_rotate_xyz = 0x80800000");
#endif

static inline void guMtxF2L(float mf[4][4], Mtx* m)
{
    int i, j, e1, e2, *ai, *af;

    ai = (int*)&m->m[0][0];
    af = (int*)&m->m[2][0];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            e1 = FTOFIX32(mf[i][j * 2]);
            e2 = FTOFIX32(mf[i][j * 2 + 1]);
            *(ai++) = (e1 & 0xFFFF0000) | ((e2 >> 16) & 0xFFFF);
            *(af++) = ((e1 << 16) & 0xFFFF0000) | (e2 & 0xFFFF);
        }
    }
}

static inline void guMtxL2F(float mf[4][4], Mtx *m)
{
    int i, j, q1, q2;
    unsigned int e1, e2, *ai, *af;

	ai = (unsigned int*) &m->m[0][0];
	af = (unsigned int*) &m->m[2][0];

	for (i=0; i<4; i++)
    {
        for (j=0; j<2; j++)
        {
            e1 = (*ai & 0xFFFF0000) | ((*af >> 16) & 0xFFFF);
            e2 = ((*(ai++) << 16) & 0xFFFF0000) | (*(af++) & 0xFFFF);
            q1 = *((int*)&e1);
            q2 = *((int*)&e2);

            mf[i][j*2] = FIX32TOF(q1);
            mf[i][j*2+1] = FIX32TOF(q2);
        }
    }
}

/**********
* Create a floating-point identity matrix.
* Source: libultra
* TODO: Port to Majora's Mask
**********/
extern float guMtxIdentF(float mf[4][4]);
#if NZLE || OOT_DEBUG
    asm("guMtxIdentF = 0x80101B40");
#elif CZLE || OOT_U_1_0
    asm("guMtxIdentF = 0x800D0830");
#elif NZSE || MM_U_1_0
    asm("guMtxIdentF = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("guMtxIdentF = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("guMtxIdentF = 0x80800000");
#endif

/**********
* Create a fixed-point identity matrix.
* Source: libultra
* TODO: Port to Majora's Mask
**********/
extern float guMtxIdent(Mtx* m);
#if NZLE || OOT_DEBUG
    asm("guMtxIdent = 0x80103B60");
#elif CZLE || OOT_U_1_0
    asm("guMtxIdent = 0x800D08B8");
#elif NZSE || MM_U_1_0
    asm("guMtxIdent = 0x80800000");
#elif NZSP || MM_DEBUG
    asm("guMtxIdent = 0x80800000");
#elif NZSJ || MM_J_1_0
    asm("guMtxIdent = 0x80800000");
#endif

static inline void guNormalize(float* x, float* y, float* z)
{
	float   m;

	m = 1/sqrtf((*x)*(*x) + (*y)*(*y) + (*z)*(*z));
	*x *= m;
	*y *= m;
	*z *= m;
}

static inline void guTranslateF(float mf[4][4], float x, float y, float z)
{
    guMtxIdentF(mf);

    mf[3][0] = x;
    mf[3][1] = y;
    mf[3][2] = z;
}

static inline void guTranslate(Mtx* m, float x, float y, float z)
{
    float mf[4][4];

    guTranslateF(mf, x, y, z);
    guMtxF2L(mf, m);
}

static inline void guScaleF(float mf[4][4], float x, float y, float z)
{
    guMtxIdentF(mf);

    mf[0][0] = x;
    mf[1][1] = y;
    mf[2][2] = z;
    mf[3][3] = 1.0f;
}

static inline void guScale(Mtx* m, float x, float y, float z)
{
    float mf[4][4];

    guScaleF(mf, x, y, z);
    guMtxF2L(mf, m);
}

static inline void guRotateF(float mf[4][4], float a, float x, float y, float z)
{
	static float    dtor = 3.1415926 / 180.0;
	float	sine;
	float	cosine;
	float	ab, bc, ca, t;

	guNormalize(&x, &y, &z);
	a *= dtor;
	sine = sinf(a);
	cosine = cosf(a);
	t = (1-cosine);
	ab = x*y*t;
	bc = y*z*t;
	ca = z*x*t;

	guMtxIdentF(mf);

	t = x*x;
	mf[0][0] = t+cosine*(1-t);
	mf[2][1] = bc-x*sine;
	mf[1][2] = bc+x*sine;

	t = y*y;
	mf[1][1] = t+cosine*(1-t);
	mf[2][0] = ca+y*sine;
	mf[0][2] = ca-y*sine;

	t = z*z;
	mf[2][2] = t+cosine*(1-t);
	mf[1][0] = ab-z*sine;
	mf[0][1] = ab+z*sine;
}

static inline void guRotate(Mtx *m, float a, float x, float y, float z)
{
	float mf[4][4];

	guRotateF(mf, a, x, y, z);
	guMtxF2L(mf, m);
}

static inline void guRotateRPYF(float mf[4][4], float r, float p, float h)
{
	static float	dtor = 3.1415926 / 180.0;
	float	sinr, sinp, sinh;
	float	cosr, cosp, cosh;

	r *= dtor;
	p *= dtor;
	h *= dtor;
	sinr = sinf(r);
	cosr = cosf(r);
	sinp = sinf(p);
	cosp = cosf(p);
	sinh = sinf(h);
	cosh = cosf(h);

	guMtxIdentF(mf);

	mf[0][0] = cosp*cosh;
	mf[0][1] = cosp*sinh;
	mf[0][2] = -sinp;

	mf[1][0] = sinr*sinp*cosh - cosr*sinh;
	mf[1][1] = sinr*sinp*sinh + cosr*cosh;
	mf[1][2] = sinr*cosp;

	mf[2][0] = cosr*sinp*cosh + sinr*sinh;
	mf[2][1] = cosr*sinp*sinh - sinr*cosh;
	mf[2][2] = cosr*cosp;
}

static inline void guRotateRPY(Mtx *m, float r, float p, float h)
{
	float mf[4][4];

	guRotateRPYF(mf, r, p, h);
	guMtxF2L(mf, m);
}

static inline void guPositionF(float mf[4][4], float r, float p, float h, float s, float x, float y, float z)
{
        static float    dtor = 3.1415926 / 180.0;
        float   sinr, sinp, sinh;
        float   cosr, cosp, cosh;

        r *= dtor;
        p *= dtor;
        h *= dtor;
        sinr = sinf(r);
        cosr = cosf(r);
        sinp = sinf(p);
        cosp = cosf(p);
        sinh = sinf(h);
        cosh = cosf(h);

        mf[0][0] = (cosp*cosh) * s;
        mf[0][1] = (cosp*sinh) * s;
        mf[0][2] = (-sinp) * s;
        mf[0][3] = 0.0;

        mf[1][0] = (sinr*sinp*cosh - cosr*sinh) * s;
        mf[1][1] = (sinr*sinp*sinh + cosr*cosh) * s;
        mf[1][2] = (sinr*cosp) * s;
        mf[1][3] = 0.0;

        mf[2][0] = (cosr*sinp*cosh + sinr*sinh) * s;
        mf[2][1] = (cosr*sinp*sinh - sinr*cosh) * s;
        mf[2][2] = (cosr*cosp) * s;
        mf[2][3] = 0.0;

        mf[3][0] = x;
        mf[3][1] = y;
        mf[3][2] = z;
        mf[3][3] = 1.0;
}

static inline void guPosition(Mtx *m, float r, float p, float h, float s, float x, float y, float z)
{
    float mf[4][4];

    guPositionF(mf, r, p, h, s, x, y, z);
    guMtxF2L(mf, m);
}

static inline void guMtxCatF(float mf[4][4], float nf[4][4], float res[4][4])
{
    int i, j, k;
    float temp[4][4];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            temp[i][j] = 0.0f;
            for (k = 0; k < 4; k++)
            {
                temp[i][j] += mf[i][k] * nf[k][j];
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            res[i][j] = temp[i][j];
        }
    }
}

#endif /* __Z64OVL_MATRIX_FUNCTIONS_INCLUDED__ */