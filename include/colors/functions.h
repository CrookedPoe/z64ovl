#ifndef __Z64OVL_COLORS_FUNCS_INCLUDED__
#define __Z64OVL_COLORS_FUNCS_INCLUDED__

#include "types.h"

static inline hsvf_t zh_color_rgb2hsv(rgba8_t* rgba)
{
    hsvf_t out;
    float _r, _g, _b;
    float cmax, cmin, delta;

    _r = (rgba->r / 255.0f);
    _g = (rgba->g / 255.0f);
    _b = (rgba->b / 255.0f);

    cmax = fmaxf(_r, fmaxf(_g, _b));
    cmin = fminf(_r, fminf(_g, _b));

    delta = (cmax - cmin);

    /* Hue and Saturation */
    if (cmax == 0.0f) {
        out.s = 0.0f;
        out.h = 0.0f;
    } else if (delta == 0.0f) {
        out.s = 0.0f;
        out.h = 0.0f;
    } else {
        out.s = (delta / cmax);

        /* Hue */
        if (cmax == _r)
            out.h = (60 * fmodf(((_g - _b) / delta), 6));
        else if (cmax == _g)
            out.h = (60 * (((_b - _r) / delta) + 2));
        else
            out.h = (60 * (((_r - _g) / delta) + 4));
    }

    if (out.h < 0.0f)
        out.h += 360.0f;

    /* Value */
    out.v = cmax;

    return out;
}

static inline rgba8_t zh_color_hsv2rgb(hsvf_t* hsv)
{
    rgba8_t out;
    float c, x, m;
    float _rgb[3];

    c = (hsv->v * hsv->s);

    x = c * (1 - fabsf(fmodf((hsv->h / 60), 2 - 1)));

    m = (hsv->v - c);

    if (hsv->h >= 0.0f && hsv->h <= 60.0f){
        _rgb[0] = c; _rgb[1] = x; _rgb[2] = 0;}
    else if (hsv->h >= 60.0f && hsv->h <= 120.0f){
        _rgb[0] = x; _rgb[1] = c; _rgb[2] = 0;}
    else if (hsv->h >= 120.0f && hsv->h <= 180.0f){
        _rgb[0] = 0; _rgb[1] = c; _rgb[2] = x;}
    else if (hsv->h >= 180.0f && hsv->h <= 240.0f){
        _rgb[0] = 0; _rgb[1] = x; _rgb[2] = c;}
    else if (hsv->h >= 240.0f && hsv->h <= 300.0f){
        _rgb[0] = x; _rgb[1] = 0; _rgb[2] = c;}
    else if (hsv->h >= 300.0f && hsv->h <= 360.0f){
        _rgb[0] = c; _rgb[1] = 0; _rgb[2] = x;}

    out = (rgba8_t){
        .r = (uint8_t)((_rgb[0] + m) * 255)
        , .g = (uint8_t)((_rgb[1] + m) * 255)
        , .b = (uint8_t)((_rgb[2] + m) * 255)
        , .a = 255
    };

    return out;
}

static inline void zh_color_cycle_hue(float *hue, float speed)
{
  if (*hue >= 0.0f && *hue < 360.0f)
    *hue += speed;
  else if (*hue >= 360.0f)
    *hue = 0.0f;
}

static inline void zh_value_lerp_cosf(float* val, float timer, float min)
{
    /* Cap Minimum */
    if (min < 0.0f) min = 0.0f;
    else if (min > 1.0f) min = 1.0f;

    *val = (((cosf(timer) + 1.0f) / 2) * (1.0f - min) + min);
}

static inline uint32_t zh_color_lerp_percent(uint32_t a, uint32_t b, float percent)
{
    rgba8_t _a, _b, out;
    _a.c = a; _b.c = b;

    out.r = PLERP(_a.r, _b.r, percent);
    out.g = PLERP(_a.g, _b.g, percent);
    out.b = PLERP(_a.b, _b.b, percent);
    out.a = 255;

    return out.c;
}

#endif /* _Z64OVL_COLORS_FUNCS_INCLUDED__ */