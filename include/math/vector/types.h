#ifndef __Z64OVL_VECTOR_TYPES_INCLUDED__
#define __Z64OVL_VECTOR_TYPES_INCLUDED__

typedef struct {
    float x, y;
} vec2f_t;

typedef struct {
    int x, y;
} vec2i_t;

typedef struct {
    int16_t x, y;
} vec2s_t;

typedef struct {
    float x, y, z;
} vec3f_t;

typedef struct {
    int x, y, z;
} vec3i_t;

typedef struct {
    int16_t x, y, z;
} vec3s_t;

typedef struct {
    float x, y, z, w;
} vec4f_t, quatf_t;

typedef struct {
    int x, y, z, w;
} vec4i_t;

typedef struct {
    int16_t x, y, z, w;
} vec4s_t;

#define VEC_OVERRIDE(_1, _2, _3, _4, N, ...) N
#define VEC2F_NEW(x, y) (vec2f_t){(x), (y)}
#define VEC3F_NEW(x, y, z) (vec3f_t){(x), (y), (z)}
#define VEC4F_NEW(x, y, z, w) (vec4f_t){(x), (y), (z), (w)}
#define VEC2I_NEW(x, y) (vec2i_t){(x), (y)}
#define VEC3I_NEW(x, y, z) (vec3i_t){(x), (y), (z)}
#define VEC4I_NEW(x, y, z, w) (vec4i_t){(x), (y), (z), (w)}
#define VEC2S_NEW(x, y) (vec2s_t){(x), (y)}
#define VEC3S_NEW(x, y, z) (vec3s_t){(x), (y), (z)}
#define VEC4S_NEW(x, y, z, w) (vec4s_t){(x), (y), (z), (w)}

#define vec_new(...) (VEC_OVERRIDE(__VA_ARGS__, VEC4F_NEW, VEC3F_NEW, VEC2F_NEW)(__VA_ARGS__))
#define vecf_new(...) (VEC_OVERRIDE(__VA_ARGS__, VEC4F_NEW, VEC3F_NEW, VEC2F_NEW)(__VA_ARGS__))
#define veci_new(...) (VEC_OVERRIDE(__VA_ARGS__, VEC4I_NEW, VEC3I_NEW, VEC2I_NEW)(__VA_ARGS__))
#define vecs_new(...) (VEC_OVERRIDE(__VA_ARGS__, VEC4S_NEW, VEC3S_NEW, VEC2S_NEW)(__VA_ARGS__))
#define quatf_new(...) VEC4F_NEW(...)
#define quati_new(...) VEC4I_NEW(...)
#define quats_new(...) VEC4S_NEW(...)

#define quatf_add_assignment            vec4f_add_assignment
#define quatf_sub_assignment            vec4f_sub_assignment
#define quatf_multiplyf_assignment      vec4f_multiplyf_assignment
#define quatf_dividef_assignment        vec4f_dividef_assignment
#define quatf_add                       vec4f_add
#define quatf_sub                       vec4f_sub
#define quatf_multiply                  vec4f_multiply
#define quatf_divide                    vec4f_divide
#define quatf_multiplyf                 vec4f_multiplyf
#define quatf_dividef                   vec4f_dividef
#define quatf_dot                       vec4f_dot
#define quatf_cross                     vec4f_cross
#define quatf_square_magnitude          vec4f_square_magnitude
#define quatf_magnitude                 vec4f_square_magnitude
#define quatf_square_magnitude_p        vec4f_square_magnitude_p
#define quatf_magnitude_p               vec4f_magnitude_p
#define quatf_normalize_assignment      vec4f_normalize_assignment
#define quatf_normalize                 vec4f_normalize
#define quatf_distance                  vec4f_distance
#define quatf_inverse_assignment        vec4f_inverse_assignment
#define quatf_inverse                   vec4f_inverse

static const vec2f_t vec2f_right    = vec_new(1.0f, 0.0f);
static const vec2f_t vec2f_up       = vec_new(0.0f, 1.0f);
static const vec2f_t vec2f_left     = vec_new(-1.0f, 0.0f);
static const vec2f_t vec2f_down     = vec_new(0.0f, -1.0f);
static const vec2f_t vec2f_zero     = vec_new(0.0f, 0.0f);

static const vec3f_t vec3f_right    = vec_new(1.0f, 0.0f, 0.0f);
static const vec3f_t vec3f_up       = vec_new(0.0f, 1.0f, 0.0f);
static const vec3f_t vec3f_forward  = vec_new(0.0f, 0.0f, 1.0f);
static const vec3f_t vec3f_left     = vec_new(-1.0f, 0.0f, 0.0f);
static const vec3f_t vec3f_down     = vec_new(0.0f, -1.0f, 0.0f);
static const vec3f_t vec3f_backward = vec_new(0.0f, 0.0f, -1.0f);
static const vec3f_t vec3f_zero     = vec_new(0.0f, 0.0f, 0.0f);

static const vec4f_t vec4f_right    = vec_new(1.0f, 0.0f, 0.0f, 0.0f);
static const vec4f_t vec4f_up       = vec_new(0.0f, 1.0f, 0.0f, 0.0f);
static const vec4f_t vec4f_forward  = vec_new(0.0f, 0.0f, 1.0f, 0.0f);
static const vec4f_t vec4f_identity = vec_new(0.0f, 0.0f, 0.0f, 1.0f);
static const vec4f_t vec4f_left     = vec_new(-1.0f, 0.0f, 0.0f, 0.0f);
static const vec4f_t vec4f_down     = vec_new(0.0f, -1.0f, 0.0f, 0.0f);
static const vec4f_t vec4f_backward = vec_new(0.0f, 0.0f, -1.0f, 0.0f);
static const vec4f_t vec4f_ndentity = vec_new(0.0f, 0.0f, 0.0f, -1.0f);
static const vec4f_t vec4f_zero     = vec_new(0.0f, 0.0f, 0.0f, 0.0f);

static const vec2i_t vec2i_right    = veci_new(1, 0);
static const vec2i_t vec2i_up       = veci_new(0, 1);
static const vec2i_t vec2i_left     = veci_new(-1, 0);
static const vec2i_t vec2i_down     = veci_new(0, -1);
static const vec2i_t vec2i_zero     = veci_new(0, 0);

static const vec3i_t vec3i_right    = veci_new(1, 0, 0);
static const vec3i_t vec3i_up       = veci_new(0, 1, 0);
static const vec3i_t vec3i_forward  = veci_new(0, 0, 1);
static const vec3i_t vec3i_left     = veci_new(-1, 0, 0);
static const vec3i_t vec3i_down     = veci_new(0, -1, 0);
static const vec3i_t vec3i_backward = veci_new(0, 0, -1);
static const vec3i_t vec3i_zero     = veci_new(0, 0, 0);

static const vec4i_t vec4i_right    = veci_new(1, 0, 0, 0);
static const vec4i_t vec4i_up       = veci_new(0, 1, 0, 0);
static const vec4i_t vec4i_forward  = veci_new(0, 0, 1, 0);
static const vec4i_t vec4i_identity = veci_new(0, 0, 0, 1);
static const vec4i_t vec4i_left     = veci_new(-1, 0, 0, 0);
static const vec4i_t vec4i_down     = veci_new(0, -1, 0, 0);
static const vec4i_t vec4i_backward = veci_new(0, 0, -1, 0);
static const vec4i_t vec4i_ndentity = veci_new(0, 0, 0, -1);
static const vec4i_t vec4i_zero     = veci_new(0, 0, 0, 0);

static const vec2s_t vec2s_right    = vecs_new(1, 0);
static const vec2s_t vec2s_up       = vecs_new(0, 1);
static const vec2s_t vec2s_left     = vecs_new(-1, 0);
static const vec2s_t vec2s_down     = vecs_new(0, -1);
static const vec2s_t vec2s_zero     = vecs_new(0, 0);

static const vec3s_t vec3s_right    = vecs_new(1, 0, 0);
static const vec3s_t vec3s_up       = vecs_new(0, 1, 0);
static const vec3s_t vec3s_forward  = vecs_new(0, 0, 1);
static const vec3s_t vec3s_left     = vecs_new(-1, 0, 0);
static const vec3s_t vec3s_down     = vecs_new(0, -1, 0);
static const vec3s_t vec3s_backward = vecs_new(0, 0, -1);
static const vec3s_t vec3s_zero     = vecs_new(0, 0, 0);

static const vec4s_t vec4s_right    = vecs_new(1, 0, 0, 0);
static const vec4s_t vec4s_up       = vecs_new(0, 1, 0, 0);
static const vec4s_t vec4s_forward  = vecs_new(0, 0, 1, 0);
static const vec4s_t vec4s_identity = vecs_new(0, 0, 0, 1);
static const vec4s_t vec4s_left     = vecs_new(-1, 0, 0, 0);
static const vec4s_t vec4s_down     = vecs_new(0, -1, 0, 0);
static const vec4s_t vec4s_backward = vecs_new(0, 0, -1, 0);
static const vec4s_t vec4s_ndentity = vecs_new(0, 0, 0, -1);
static const vec4s_t vec4s_zero     = vecs_new(0, 0, 0, 0);

#define quatf_xhat      vec4f_right
#define quatf_yhat      vec4f_up
#define quatf_zhat      vec4f_forward
#define quatf_identity  vec4f_identity
#define quatf_xnhat     vec4f_left
#define quatf_ynhat     vec4f_down
#define quatf_znhat     vec4f_backward
#define quatf_ndentity  vec4f_ndentity

#define  vec2_equals(lhs, rhs) (lhs.x == rhs.x && lhs.y == rhs.y)
#define  vec3_equals(lhs, rhs) (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z)
#define  vec4_equals(lhs, rhs) (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z && lhs.w == rhs.w)

typedef struct {
    vec3f_t t;
    vec3s_t r;
} pos_rot_t;

#endif /* __Z64OVL_VECTOR_TYPES_INCLUDED__ */