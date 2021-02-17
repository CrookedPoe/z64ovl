#ifndef __Z64OVL_MATRIX_TYPES_INCLUDED__
#define __Z64OVL_MATRIX_TYPES_INCLUDED__

#define MATRIXF_STACK_MAX   20
#define SET_MTX             0
#define MULT_MTX            1

#define	FTOFIX32(x)	(long)((x) * (float)0x00010000)
#define	FIX32TOF(x)	((float)(x) * (1.0f / (float)0x00010000))

#define guDefMtxF(xx,xy,xz,xw,  \
                  yx,yy,yz,yw,  \
                  zx,zy,zz,zw,  \
                  wx,wy,wz,ww,  \
                  ...)            {.f={xx,xy,xz,xw,                           \
                                       yx,yy,yz,yw,                           \
                                       zx,zy,zz,zw,                           \
                                       wx,wy,wz,ww}}

typedef float MtxF_t[4][4];
typedef union
{
  MtxF_t  mf;
  float   f[16];
  struct
  {
    float xx, xy, xz, xw,
          yx, yy, yz, yw,
          zx, zy, zz, zw,
          wx, wy, wz, ww;
  };
} MtxF;

#endif /* __Z64OVL_MATRIX_TYPES_INCLUDED__ */