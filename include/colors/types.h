#ifndef __Z64OVL_COLORS_TYPES_INCLUDED__
#define __Z64OVL_COLORS_TYPES_INCLUDED__

typedef union {
  uint32_t c;
  struct {
    uint8_t r, g, b;
  };
} rgb8_t, rgb888_t;

typedef union {
  uint32_t c;
  struct {
    uint8_t r, g, b, a;
  };
} rgba8_t, rgba8888_t, rgba32_t;

typedef union {
  uint16_t c;
  struct {
    uint16_t r:5, g:5, b:5, a:1;
  };
} rgba5551_t, rgba16_t;

typedef struct
{
	float r, g, b, a;
} rgbaf_t;

typedef struct
{
	float h, s, v;
} hsvf_t;

/*** Macros ***/
#define COLOR16_TO_COLOR32(CARG0) (                 \
      COLOR32((((CARG0) & 0xF800) >> 11) /* red */  \
    , (((CARG0) & 0x07C0) >> 6) /* green */         \
    , (((CARG0) & 0x003E) >> 1) /* blue  */         \
    , ((((CARG0) & 0x1) > 0) ? 255 : 0) /* alpha */ \
))

#define COLOR32_TO_COLOR16(CARG0) (              \
      (((CARG0) & 0xF8000000) >> 16) /* red   */  \
    | (((CARG0) & 0x00F80000) >> 13) /* green */  \
    | (((CARG0) & 0x0000F800) >> 10) /* blue  */  \
    | (((CARG0) & 0x00000080) >>  7) /* alpha */  \
) /* Thanks, z64.me! */

#define COLOR16(r, g, b, a) COLOR32_TO_COLOR16(COLOR32((r), (g), (b), (a)))

#define C16TO32(CARG0) COLOR16_TO_COLOR32((CARG0))
#define C32TO16(CARG0) COLOR32_TO_COLOR16((CARG0))

#endif /* _Z64OVL_COLORS_TYPES_INCLUDED__ */