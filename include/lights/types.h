#ifndef __Z64OVL_LIGHT_TYPES_INCLUDED__
#define __Z64OVL_LIGHT_TYPES_INCLUDED__

enum {
    LIGHT_POINT
    , LIGHT_DIFFUSE
    , LIGHT_POINT2
};

typedef struct {
    int16_t x, y, z;
    rgb8_t color;
    uint8_t status;
    int16_t intensity;
} point_light_t;

typedef struct {
    int8_t dx, dy, dz;
    rgb8_t color;
} diffuse_light_t;

typedef struct {
    point_light_t point;
    diffuse_light_t diffuse;
} light_status_t;

typedef struct {
    int8_t type;
    light_status_t status;
} light_data_t;

typedef struct light_list_s {
    light_data_t* data;
    struct light_list_s* prev;
    struct light_list_s* next;
} light_list_t;

typedef struct {
    int8_t num;
    light_data_t* light_data;
} light_data_info_t;

typedef struct light_context_s {
    /* 0x00 */ light_list_t* list;
    /* 0x04 */ rgb8_t ambient;
    /* 0x07 */ rgb8_t fog;
    /* 0x0A */ int16_t fog_near;
    /* 0x0C */ int16_t fog_far;
    /* 0x0E */
} light_context_t;

#endif /* __Z64OVL_LIGHT_TYPES_INCLUDED__ */