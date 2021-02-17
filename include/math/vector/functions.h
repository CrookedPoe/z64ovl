#ifndef __Z64OVL_VECTOR_FUNCTIONS_INCLUDED__
#define __Z64OVL_VECTOR_FUNCTIONS_INCLUDED__

#include "types.h"

// add the vec2f rhs to the vec2f lhs, storing the result in lhs ((vec2f_t)lhs += (vec2f_t)rhs)
static inline void vec2f_add_assignment(vec2f_t* lhs, vec2f_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
}

// subtract the vec2f rhs with the vec2f lhs, storing the result in lhs ((vec2f_t)lhs -= (vec2f_t)rhs)
static inline void vec2f_sub_assignment(vec2f_t* lhs, vec2f_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
}

// scale the vec2f lhs to the vec2f rhs, storing the result in lhs ((vec2f_t)lhs *= (vec2f_t)rhs)
static inline void vec2f_multiply_assignment(vec2f_t* lhs, vec2f_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
}

// divide the vec2f lhs by the vec2f rhs, storing the result in lhs ((vec2f_t)lhs /= (vec2f_t)rhs)
static inline void vec2f_divide_assignment(vec2f_t* lhs, vec2f_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
}

// scale the vec2f lhs to the float rhs, storing the result in lhs ((vec2f_t)lhs *= (float)rhs)
static inline void vec2f_multiplyf_assignment(vec2f_t* lhs, float rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
}

// divide the vec2f lhs by the float rhs, storing the result in lhs ((vec2f_t)lhs /= (float)rhs)
static inline void vec2f_dividef_assignment(vec2f_t* lhs, float rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
}

// returns the sum of the vec2f lhs and the vec2f rhs (v = (vec2f_t)lhs + (vec2f_t)rhs)
static inline vec2f_t vec2f_add(vec2f_t lhs, vec2f_t rhs) {
    vec2f_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2f lhs subtracted by the vec2f rhs (v = (vec2f_t)lhs - (vec2f_t)rhs)
static inline vec2f_t vec2f_sub(vec2f_t lhs, vec2f_t rhs) {
    vec2f_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2f lhs scaled to the vec2f rhs (v = (vec2f_t)lhs * (vec2f_t)rhs)
static inline vec2f_t vec2f_multiply(vec2f_t lhs, vec2f_t rhs) {
    vec2f_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2f lhs divided by the vec2f rhs (v = (vec2f_t)lhs / (vec2f_t)rhs)
static inline vec2f_t vec2f_divide(vec2f_t lhs, vec2f_t rhs) {
    vec2f_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2f lhs scaled to the float rhs (v = (vec2f_t)lhs * (float)rhs)
static inline vec2f_t vec2f_multiplyf(vec2f_t lhs, float rhs) {
    vec2f_multiplyf_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec2f lhs divided by the float rhs (v = (vec2f_t)lhs / (float)rhs)
static inline vec2f_t vec2f_dividef(vec2f_t lhs, float rhs) {
    vec2f_dividef_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec2f lhs dot vec2f rhs
static inline float vec2f_dot(vec2f_t* lhs, vec2f_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y);
}

// returns the square magnitude of the vec2f lhs
static inline float vec2f_square_magnitude(vec2f_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y);
}

// returns the magnitude of the vec2f lhs
static inline float vec2f_magnitude(vec2f_t lhs)
{
    return sqrtf(vec2f_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec2f lhs
static inline float vec2f_square_magnitude_p(vec2f_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y);
}

// returns the magnitude of the vec2f lhs
static inline float vec2f_magnitude_p(vec2f_t* lhs)
{
    return sqrtf(vec2f_square_magnitude_p(lhs));
}

// normalizes the vec2f lhs into a unit vector
static inline void vec2f_normalize_assignment(vec2f_t* lhs)
{
    float magnitude = vec2f_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
    }
}

// returns the unit vector of the vec2f lhs
static inline vec2f_t vec2f_normalize(vec2f_t lhs)
{
    vec2f_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec2f rhs
static inline float vec2f_distance(vec2f_t lhs, vec2f_t rhs)
{
    vec2f_sub_assignment(&lhs, &rhs);
    return vec2f_magnitude_p(&lhs);
}

// iverses the vec2f lhs
static inline void vec2f_inverse_assignment(vec2f_t* lhs) {
    vec2f_multiplyf_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec2f lhs
static inline vec2f_t vec2f_inverse(vec2f_t lhs) {
    vec2f_multiplyf_assignment(&lhs, -1.0f);
    return lhs;
}


// add the vec3f rhs to the vec3f lhs, storing the result in lhs ((vec3f_t)lhs += (vec3f_t)rhs)
static inline void vec3f_add_assignment(vec3f_t* lhs, vec3f_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
}

// subtract the vec3f rhs with the vec3f lhs, storing the result in lhs ((vec3f_t)lhs -= (vec3f_t)rhs)
static inline void vec3f_sub_assignment(vec3f_t* lhs, vec3f_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
}

// scale the vec3f lhs to the vec3f rhs, storing the result in lhs ((vec3f_t)lhs *= (vec3f_t)rhs)
static inline void vec3f_multiply_assignment(vec3f_t* lhs, vec3f_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
}

// divide the vec3f lhs by the vec3f rhs, storing the result in lhs ((vec3f_t)lhs /= (vec3f_t)rhs)
static inline void vec3f_divide_assignment(vec3f_t* lhs, vec3f_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
}

// scale the vec3f lhs to the float rhs, storing the result in lhs ((vec3f_t)lhs *= (float)rhs)
static inline void vec3f_multiplyf_assignment(vec3f_t* lhs, float rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
}

// divide the vec3f lhs by the float rhs, storing the result in lhs ((vec3f_t)lhs /= (float)rhs)
static inline void vec3f_dividef_assignment(vec3f_t* lhs, float rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
}

// returns the sum of the vec3f lhs and the vec3f rhs (v = (vec3f_t)lhs + (vec3f_t)rhs)
static inline vec3f_t vec3f_add(vec3f_t lhs, vec3f_t rhs) {
    vec3f_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3f lhs subtracted by the vec3f rhs (v = (vec3f_t)lhs - (vec3f_t)rhs)
static inline vec3f_t vec3f_sub(vec3f_t lhs, vec3f_t rhs) {
    vec3f_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3f lhs scaled to the vec3f rhs (v = (vec3f_t)lhs * (vec3f_t)rhs)
static inline vec3f_t vec3f_multiply(vec3f_t lhs, vec3f_t rhs) {
    vec3f_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3f lhs divided by the vec3f rhs (v = (vec3f_t)lhs / (vec3f_t)rhs)
static inline vec3f_t vec3f_divide(vec3f_t lhs, vec3f_t rhs) {
    vec3f_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3f lhs scaled to the float rhs (v = (vec3f_t)lhs * (float)rhs)
static inline vec3f_t vec3f_multiplyf(vec3f_t lhs, float rhs) {
    vec3f_multiplyf_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec3f lhs divided by the float rhs (v = (vec3f_t)lhs / (float)rhs)
static inline vec3f_t vec3f_dividef(vec3f_t lhs, float rhs) {
    vec3f_dividef_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec3f lhs dot vec3f rhs
static inline float vec3f_dot(vec3f_t* lhs, vec3f_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z);
}

// returns a vec3f using the calculation vec3f lhs cross vec3f rhs
static inline vec3f_t vec3f_cross(vec3f_t* lhs, vec3f_t* rhs) {
    return vec_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y);
}

// returns the square magnitude of the vec3f lhs
static inline float vec3f_square_magnitude(vec3f_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z);
}

// returns the magnitude of the vec3f lhs
static inline float vec3f_magnitude(vec3f_t lhs)
{
    return sqrtf(vec3f_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec3f lhs
static inline float vec3f_square_magnitude_p(vec3f_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z);
}

// returns the magnitude of the vec3f lhs
static inline float vec3f_magnitude_p(vec3f_t* lhs)
{
    return sqrtf(vec3f_square_magnitude_p(lhs));
}

// normalizes the vec3f lhs into a unit vector
static inline void vec3f_normalize_assignment(vec3f_t* lhs)
{
    float magnitude = vec3f_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
        lhs->z = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
        lhs->z = (lhs->z / magnitude);
    }
}

// returns the unit vector of the vec3f lhs
static inline vec3f_t vec3f_normalize(vec3f_t lhs)
{
    vec3f_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec3f rhs
static inline float vec3f_distance(vec3f_t lhs, vec3f_t rhs)
{
    vec3f_sub_assignment(&lhs, &rhs);
    return vec3f_magnitude_p(&lhs);
}

// iverses the vec3f lhs
static inline void vec3f_inverse_assignment(vec3f_t* lhs) {
    vec3f_multiplyf_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec3f lhs
static inline vec3f_t vec3f_inverse(vec3f_t lhs) {
    vec3f_multiplyf_assignment(&lhs, -1.0f);
    return lhs;
}

/**********
* A function for creating or returning a vec3f given
* radius 'r', X Rotation 'pitch, and Y Rotation 'yaw'
* in degrees.
* Author: <Evan20k>
**********/
static inline vec3f_t vec3f_point_degrees(float pitch, float yaw, float radius)
{
    return VEC3F_NEW(
        radius * sinf(DTORF(yaw)) * cosf(DTORF(pitch)),
        radius * -sinf(DTORF(pitch)),
        radius * cosf(DTORF(yaw)) * cosf(DTORF(pitch))
    );
}

/**********
* A function for creating or returning a vec3f given
* radius 'r', X Rotation 'pitch, and Y Rotation 'yaw'
* in radians.
* Author: <CrookedPoe>
**********/
static inline vec3f_t vec3f_point_radians(float pitch, float yaw, float radius)
{
    return VEC3F_NEW(
        radius * sinf(yaw) * cosf(pitch),
        radius * -sinf(pitch),
        radius * cosf(yaw) * cosf(pitch)
    );
}

// add the vec4f rhs to the vec4f lhs, storing the result in lhs ((vec4f_t)lhs += (vec4f_t)rhs)
static inline void vec4f_add_assignment(vec4f_t* lhs, vec4f_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
    lhs->w += rhs->w;
}

// subtract the vec4f rhs with the vec4f lhs, storing the result in lhs ((vec4f_t)lhs -= (vec4f_t)rhs)
static inline void vec4f_sub_assignment(vec4f_t* lhs, vec4f_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
    lhs->w -= rhs->w;
}

// scale the vec4f lhs to the vec4f rhs, storing the result in lhs ((vec4f_t)lhs *= (vec4f_t)rhs)
static inline void vec4f_multiply_assignment(vec4f_t* lhs, vec4f_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
    lhs->w *= rhs->w;
}

// divide the vec4f lhs by the vec4f rhs, storing the result in lhs ((vec4f_t)lhs /= (vec4f_t)rhs)
static inline void vec4f_divide_assignment(vec4f_t* lhs, vec4f_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
    lhs->w /= rhs->w;
}

// scale the vec4f lhs to the float rhs, storing the result in lhs ((vec4f_t)lhs *= (float)rhs)
static inline void vec4f_multiplyf_assignment(vec4f_t* lhs, float rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
    lhs->w *= rhs;
}

// divide the vec4f lhs by the float rhs, storing the result in lhs ((vec4f_t)lhs /= (float)rhs)
static inline void vec4f_dividef_assignment(vec4f_t* lhs, float rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
    lhs->w /= rhs;
}

// returns the sum of the vec4f lhs and the vec4f rhs (v = (vec4f_t)lhs + (vec4f_t)rhs)
static inline vec4f_t vec4f_add(vec4f_t lhs, vec4f_t rhs) {
    vec4f_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4f lhs subtracted by the vec4f rhs (v = (vec4f_t)lhs - (vec4f_t)rhs)
static inline vec4f_t vec4f_sub(vec4f_t lhs, vec4f_t rhs) {
    vec4f_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4f lhs scaled to the vec4f rhs (v = (vec4f_t)lhs * (vec4f_t)rhs)
static inline vec4f_t vec4f_multiply(vec4f_t lhs, vec4f_t rhs) {
    vec4f_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4f lhs divided by the vec4f rhs (v = (vec4f_t)lhs / (vec4f_t)rhs)
static inline vec4f_t vec4f_divide(vec4f_t lhs, vec4f_t rhs) {
    vec4f_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4f lhs scaled to the float rhs (v = (vec4f_t)lhs * (float)rhs)
static inline vec4f_t vec4f_multiplyf(vec4f_t lhs, float rhs) {
    vec4f_multiplyf_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec4f lhs divided by the float rhs (v = (vec4f_t)lhs / (float)rhs)
static inline vec4f_t vec4f_dividef(vec4f_t lhs, float rhs) {
    vec4f_dividef_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec4f lhs dot vec4f rhs
static inline float vec4f_dot(vec4f_t* lhs, vec4f_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z) + (lhs->w * rhs->w);
}

// returns a vec4f using the calculation vec4f lhs cross vec4f rhs
static inline vec4f_t vec4f_cross(vec4f_t* lhs, vec4f_t* rhs) {
    return vec_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y, 0);
}

// returns the square magnitude of the vec4f lhs
static inline float vec4f_square_magnitude(vec4f_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z) +
            (lhs.w * lhs.w);
}

// returns the magnitude of the vec4f lhs
static inline float vec4f_magnitude(vec4f_t lhs)
{
    return sqrtf(vec4f_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec4f lhs
static inline float vec4f_square_magnitude_p(vec4f_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z) +
            (lhs->w * lhs->w);
}

// returns the magnitude of the vec4f lhs
static inline float vec4f_magnitude_p(vec4f_t* lhs)
{
    return sqrtf(vec4f_square_magnitude_p(lhs));
}

// normalizes the vec4f lhs into a unit vector
static inline void vec4f_normalize_assignment(vec4f_t* lhs)
{
    float magnitude = vec4f_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
        lhs->z = 0;
        lhs->w = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
        lhs->z = (lhs->z / magnitude);
        lhs->w = (lhs->w / magnitude);
    }
}

// returns the unit vector of the vec4f lhs
static inline vec4f_t vec4f_normalize(vec4f_t lhs)
{
    vec4f_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec4f rhs
static inline float vec4f_distance(vec4f_t lhs, vec4f_t rhs)
{
    vec4f_sub_assignment(&lhs, &rhs);
    return vec4f_magnitude_p(&lhs);
}

// iverses the vec4f lhs
static inline void vec4f_inverse_assignment(vec4f_t* lhs) {
    vec4f_multiplyf_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec4f lhs
static inline vec4f_t vec4f_inverse(vec4f_t lhs) {
    vec4f_multiplyf_assignment(&lhs, -1.0f);
    return lhs;
}

// add the float rhs to the float w of quatf lhs, storing the result in lhs (lhs.w += rhs)
static inline void quatf_addw_assignment(quatf_t* lhs, float rhs) {
    lhs->w += rhs;
}

// subtract the float rhs to the float w of quatf lhs, storing the result in lhs (lhs.w -= rhs)
static inline void quatf_subw_assignment(quatf_t* lhs, float rhs) {
    lhs->w -= rhs;
}

// returns the sum of the float w of quatf lhs and the float rhs (v = lhs.w + rhs)
static inline quatf_t quatf_addw(quatf_t lhs, float rhs) {
    quatf_addw_assignment(&lhs, rhs);
    return lhs;
}

// returns the float w of quatf lhs subtracted by the float rhs (v = lhs.w - rhs)
static inline quatf_t quatf_subw(quatf_t lhs, float rhs) {
    quatf_subw_assignment(&lhs, rhs);
    return lhs;
}

// sets the quatf lhs to its conjugate
static inline void quatf_conjugate_assignment(quatf_t* lhs) {
    lhs->x = -lhs->x;
    lhs->y = -lhs->y;
    lhs->z = -lhs->z;
}

// returns the conjugate of quatf lhs
static inline quatf_t quatf_conjugate(quatf_t lhs) {
    quatf_conjugate_assignment(&lhs);
    return lhs;
}

// sets the quatf lhs to reslting axis angle of vec3f axis and float angle
static inline void quatf_axis_angle_assignment(quatf_t* lhs, vec3f_t* axis, float angle) {
    vec3f_t norm = vec3f_normalize(*axis);
    float sina;

    angle *= 0.5f;
    sina = sinf(angle);

    lhs->x = norm.x * sina;
    lhs->y = norm.y * sina;
    lhs->z = norm.z * sina;
    lhs->w = cosf(angle);
}

// returns the resulting quatf of the axis angle formula using vec3f axis and float angle
static inline quatf_t quatf_axis_angle(quatf_t lhs, vec3f_t* axis, float angle) {
    quatf_axis_angle_assignment(&lhs, axis, angle);
    return lhs;
}

// sets the quatf lhs from the euler angles in vec3f rhs
static inline void quatf_from_euler_assignment(quatf_t* lhs, vec3f_t* rhs) {
    vec3f_t sinv;
    vec3f_t cosv;
    vec3f_t euler = vec3f_normalize(*rhs);

    vec3f_multiplyf_assignment(&euler, 0.5f);

    sinv = vec_new(sinf(euler.x), sinf(euler.y), sinf(euler.z));
    cosv = vec_new(cosf(euler.x), cosf(euler.y), cosf(euler.z));

	lhs->x = sinv.x * cosv.y * cosv.z + cosv.x * sinv.y * sinv.z;
	lhs->y = cosv.x * sinv.y * cosv.z - sinv.x * cosv.y * sinv.z;
	lhs->z = cosv.x * cosv.y * sinv.z - sinv.x * sinv.y * cosv.z;
    lhs->w = cosv.x * cosv.y * cosv.z + sinv.x * sinv.y * sinv.z;
}

// returns the quatf from the euler angles in vec3f rhs
static inline quatf_t quatf_from_euler(vec3f_t rhs) {
    quatf_t return_value;
    quatf_from_euler_assignment(&return_value, &rhs);
    return return_value;
}

// sets the vec3f axis and float angle from the quatf lhs
static inline void quatf_to_angle_axis_assignment(quatf_t* lhs, vec3f_t* axis, float* angle) {
    float sina;

    *angle = acosf(lhs->w);
    sina = sinf(*angle);

    if (fabsf(sina) > 1e-8f && sina != 0) {
        sina = 1.0f / sina;

        axis->x = lhs->x * sina;
        axis->y = lhs->y * sina;
        axis->z = lhs->z * sina;

        *angle *= 2.0f;
    }
    else {
        *angle = 0.0f;
        axis->x = 1.0f;
        axis->y = 0.0f;
        axis->z = 0.0f;
    }
}

// returns the vec3f axis from the quatf lhs, storing the float angle in angle
static inline vec3f_t quatf_to_angle_axis(quatf_t* lhs, vec3f_t axis, float* angle) {
    quatf_to_angle_axis_assignment(lhs, &axis, angle);
    return axis;
}

// sets the quatf lhs to the look rotation from vec3f look_at and vec3f up
static inline void quatf_from_look_rotation_assignment(quatf_t* lhs, vec3f_t* look_at, vec3f_t* up) {
    vec3f_t forward, right;
    float recip;

    forward = vec3f_normalize(*look_at);
    right = vec3f_cross(&forward, &right);

    lhs->w = sqrtf(1.0f + right.x + up->y + forward.z) * 0.5f;
    if (lhs->w) recip = 1.0f / (4.0f * lhs->w);
    else recip = 0;

    lhs->x = (up->z - forward.y) * recip;
    lhs->y = (forward.x - right.z) * recip;
    lhs->z = (right.y - up->x) * recip;
}

// returns the quatf from the look rotation from vec3f look_at and vec3f up
static inline quatf_t quatf_from_look_rotation(vec3f_t* look_at, vec3f_t* up) {
    quatf_t return_value;
    quatf_from_look_rotation_assignment(&return_value, look_at, up);
    return return_value;
}

static inline void quatf_to_matrix_assignment(float matrix[4][4], quatf_t lhs) {
    float mag, norm;
    mag = quatf_magnitude_p(&lhs);

    if (mag == 0) {
        matrix[0][0] = 1.0f;
        matrix[0][1] = 0.0f;
        matrix[0][2] = 0.0f;
        matrix[0][3] = 0.0f;
        matrix[1][0] = 0.0f;
        matrix[1][1] = 1.0f;
        matrix[1][2] = 0.0f;
        matrix[1][3] = 0.0f;
        matrix[2][0] = 0.0f;
        matrix[2][1] = 0.0f;
        matrix[2][2] = 1.0f;
        matrix[2][3] = 0.0f;
        matrix[3][3] = 1.0f;
    }
    else {
        norm = 1.0f / quatf_magnitude_p(&lhs);
        quatf_multiplyf_assignment(&lhs, norm);

        matrix[0][0] = 1.0f - 2.0f * lhs.y * lhs.y - 2.0f * lhs.z * lhs.z;
        matrix[0][1] = 2.0f * lhs.x * lhs.y - 2.0f * lhs.z * lhs.w;
        matrix[0][2] = 2.0f * lhs.x * lhs.z + 2.0f * lhs.y * lhs.w;
        matrix[0][3] = 0.0f;
        matrix[1][0] = 2.0f * lhs.x * lhs.y + 2.0f * lhs.z * lhs.w;
        matrix[1][1] = 1.0f - 2.0f * lhs.x * lhs.x - 2.0f * lhs.z * lhs.z;
        matrix[1][2] = 2.0f * lhs.y * lhs.z - 2.0f * lhs.x * lhs.w;
        matrix[1][3] = 0.0f;
        matrix[2][0] = 2.0f * lhs.x * lhs.z - 2.0f * lhs.y * lhs.w;
        matrix[2][1] = 2.0f * lhs.y * lhs.z + 2.0f * lhs.x * lhs.w;
        matrix[2][2] = 1.0f - 2.0f * lhs.x * lhs.x - 2.0f * lhs.y * lhs.y;
        matrix[2][3] = 0.0f;
        matrix[3][3] = 1.0f;
    }
}


// add the vec2i rhs to the vec2i lhs, storing the result in lhs ((vec2i_t)lhs += (vec2i_t)rhs)
static inline void vec2i_add_assignment(vec2i_t* lhs, vec2i_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
}

// subtract the vec2i rhs with the vec2i lhs, storing the result in lhs ((vec2i_t)lhs -= (vec2i_t)rhs)
static inline void vec2i_sub_assignment(vec2i_t* lhs, vec2i_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
}

// scale the vec2i lhs to the vec2i rhs, storing the result in lhs ((vec2i_t)lhs *= (vec2i_t)rhs)
static inline void vec2i_multiply_assignment(vec2i_t* lhs, vec2i_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
}

// divide the vec2i lhs by the vec2i rhs, storing the result in lhs ((vec2i_t)lhs /= (vec2i_t)rhs)
static inline void vec2i_divide_assignment(vec2i_t* lhs, vec2i_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
}

// scale the vec2i lhs to the int rhs, storing the result in lhs ((vec2i_t)lhs *= (int)rhs)
static inline void vec2i_multiplyi_assignment(vec2i_t* lhs, int rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
}

// divide the vec2i lhs by the int rhs, storing the result in lhs ((vec2i_t)lhs /= (int)rhs)
static inline void vec2i_dividei_assignment(vec2i_t* lhs, int rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
}

// returns the sum of the vec2i lhs and the vec2i rhs (v = (vec2i_t)lhs + (vec2i_t)rhs)
static inline vec2i_t vec2i_add(vec2i_t lhs, vec2i_t rhs) {
    vec2i_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2i lhs subtracted by the vec2i rhs (v = (vec2i_t)lhs - (vec2i_t)rhs)
static inline vec2i_t vec2i_sub(vec2i_t lhs, vec2i_t rhs) {
    vec2i_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2i lhs scaled to the vec2i rhs (v = (vec2i_t)lhs * (vec2i_t)rhs)
static inline vec2i_t vec2i_multiply(vec2i_t lhs, vec2i_t rhs) {
    vec2i_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2i lhs divided by the vec2i rhs (v = (vec2i_t)lhs / (vec2i_t)rhs)
static inline vec2i_t vec2i_divide(vec2i_t lhs, vec2i_t rhs) {
    vec2i_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2i lhs scaled to the int rhs (v = (vec2i_t)lhs * (int)rhs)
static inline vec2i_t vec2i_multiplyi(vec2i_t lhs, int rhs) {
    vec2i_multiplyi_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec2i lhs divided by the int rhs (v = (vec2i_t)lhs / (int)rhs)
static inline vec2i_t vec2i_dividei(vec2i_t lhs, int rhs) {
    vec2i_dividei_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec2i lhs dot vec2i rhs
static inline float vec2i_dot(vec2i_t* lhs, vec2i_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y);
}

// returns the square magnitude of the vec2i lhs
static inline float vec2i_square_magnitude(vec2i_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y);
}

// returns the magnitude of the vec2i lhs
static inline float vec2i_magnitude(vec2i_t lhs)
{
    return sqrtf(vec2i_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec2i lhs
static inline float vec2i_square_magnitude_p(vec2i_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y);
}

// returns the magnitude of the vec2i lhs
static inline float vec2i_magnitude_p(vec2i_t* lhs)
{
    return sqrtf(vec2i_square_magnitude_p(lhs));
}

// normalizes the vec2i lhs into a unit vector
static inline void vec2i_normalize_assignment(vec2i_t* lhs)
{
    float magnitude = vec2i_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
    }
}

// returns the unit vector of the vec2i lhs
static inline vec2i_t vec2i_normalize(vec2i_t lhs)
{
    vec2i_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec2i rhs
static inline float vec2i_distance(vec2i_t lhs, vec2i_t rhs)
{
    vec2i_sub_assignment(&lhs, &rhs);
    return vec2i_magnitude_p(&lhs);
}

// iverses the vec2i lhs
static inline void vec2i_inverse_assignment(vec2i_t* lhs) {
    vec2i_multiplyi_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec2i lhs
static inline vec2i_t vec2i_inverse(vec2i_t lhs) {
    vec2i_multiplyi_assignment(&lhs, -1.0f);
    return lhs;
}


// add the vec3i rhs to the vec3i lhs, storing the result in lhs ((vec3i_t)lhs += (vec3i_t)rhs)
static inline void vec3i_add_assignment(vec3i_t* lhs, vec3i_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
}

// subtract the vec3i rhs with the vec3i lhs, storing the result in lhs ((vec3i_t)lhs -= (vec3i_t)rhs)
static inline void vec3i_sub_assignment(vec3i_t* lhs, vec3i_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
}

// scale the vec3i lhs to the vec3i rhs, storing the result in lhs ((vec3i_t)lhs *= (vec3i_t)rhs)
static inline void vec3i_multiply_assignment(vec3i_t* lhs, vec3i_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
}

// divide the vec3i lhs by the vec3i rhs, storing the result in lhs ((vec3i_t)lhs /= (vec3i_t)rhs)
static inline void vec3i_divide_assignment(vec3i_t* lhs, vec3i_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
}

// scale the vec3i lhs to the int rhs, storing the result in lhs ((vec3i_t)lhs *= (int)rhs)
static inline void vec3i_multiplyi_assignment(vec3i_t* lhs, int rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
}

// divide the vec3i lhs by the int rhs, storing the result in lhs ((vec3i_t)lhs /= (int)rhs)
static inline void vec3i_dividei_assignment(vec3i_t* lhs, int rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
}

// returns the sum of the vec3i lhs and the vec3i rhs (v = (vec3i_t)lhs + (vec3i_t)rhs)
static inline vec3i_t vec3i_add(vec3i_t lhs, vec3i_t rhs) {
    vec3i_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3i lhs subtracted by the vec3i rhs (v = (vec3i_t)lhs - (vec3i_t)rhs)
static inline vec3i_t vec3i_sub(vec3i_t lhs, vec3i_t rhs) {
    vec3i_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3i lhs scaled to the vec3i rhs (v = (vec3i_t)lhs * (vec3i_t)rhs)
static inline vec3i_t vec3i_multiply(vec3i_t lhs, vec3i_t rhs) {
    vec3i_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3i lhs divided by the vec3i rhs (v = (vec3i_t)lhs / (vec3i_t)rhs)
static inline vec3i_t vec3i_divide(vec3i_t lhs, vec3i_t rhs) {
    vec3i_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3i lhs scaled to the int rhs (v = (vec3i_t)lhs * (int)rhs)
static inline vec3i_t vec3i_multiplyi(vec3i_t lhs, int rhs) {
    vec3i_multiplyi_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec3i lhs divided by the int rhs (v = (vec3i_t)lhs / (int)rhs)
static inline vec3i_t vec3i_dividei(vec3i_t lhs, int rhs) {
    vec3i_dividei_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec3i lhs dot vec3i rhs
static inline float vec3i_dot(vec3i_t* lhs, vec3i_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z);
}

// returns a vec3i using the calculation vec3i lhs cross vec3i rhs
static inline vec3i_t vec3i_cross(vec3i_t* lhs, vec3i_t* rhs) {
    return veci_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y);
}

// returns the square magnitude of the vec3i lhs
static inline float vec3i_square_magnitude(vec3i_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z);
}

// returns the magnitude of the vec3i lhs
static inline float vec3i_magnitude(vec3i_t lhs)
{
    return sqrtf(vec3i_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec3i lhs
static inline float vec3i_square_magnitude_p(vec3i_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z);
}

// returns the magnitude of the vec3i lhs
static inline float vec3i_magnitude_p(vec3i_t* lhs)
{
    return sqrtf(vec3i_square_magnitude_p(lhs));
}

// normalizes the vec3i lhs into a unit vector
static inline void vec3i_normalize_assignment(vec3i_t* lhs)
{
    float magnitude = vec3i_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
        lhs->z = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
        lhs->z = (lhs->z / magnitude);
    }
}

// returns the unit vector of the vec3i lhs
static inline vec3i_t vec3i_normalize(vec3i_t lhs)
{
    vec3i_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec3i rhs
static inline float vec3i_distance(vec3i_t lhs, vec3i_t rhs)
{
    vec3i_sub_assignment(&lhs, &rhs);
    return vec3i_magnitude_p(&lhs);
}

// iverses the vec3i lhs
static inline void vec3i_inverse_assignment(vec3i_t* lhs) {
    vec3i_multiplyi_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec3i lhs
static inline vec3i_t vec3i_inverse(vec3i_t lhs) {
    vec3i_multiplyi_assignment(&lhs, -1.0f);
    return lhs;
}


// add the vec4i rhs to the vec4i lhs, storing the result in lhs ((vec4i_t)lhs += (vec4i_t)rhs)
static inline void vec4i_add_assignment(vec4i_t* lhs, vec4i_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
    lhs->w += rhs->w;
}

// subtract the vec4i rhs with the vec4i lhs, storing the result in lhs ((vec4i_t)lhs -= (vec4i_t)rhs)
static inline void vec4i_sub_assignment(vec4i_t* lhs, vec4i_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
    lhs->w -= rhs->w;
}

// scale the vec4i lhs to the vec4i rhs, storing the result in lhs ((vec4i_t)lhs *= (vec4i_t)rhs)
static inline void vec4i_multiply_assignment(vec4i_t* lhs, vec4i_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
    lhs->w *= rhs->w;
}

// divide the vec4i lhs by the vec4i rhs, storing the result in lhs ((vec4i_t)lhs /= (vec4i_t)rhs)
static inline void vec4i_divide_assignment(vec4i_t* lhs, vec4i_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
    lhs->w /= rhs->w;
}

// scale the vec4i lhs to the int rhs, storing the result in lhs ((vec4i_t)lhs *= (int)rhs)
static inline void vec4i_multiplyi_assignment(vec4i_t* lhs, int rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
    lhs->w *= rhs;
}

// divide the vec4i lhs by the int rhs, storing the result in lhs ((vec4i_t)lhs /= (int)rhs)
static inline void vec4i_dividei_assignment(vec4i_t* lhs, int rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
    lhs->w /= rhs;
}

// returns the sum of the vec4i lhs and the vec4i rhs (v = (vec4i_t)lhs + (vec4i_t)rhs)
static inline vec4i_t vec4i_add(vec4i_t lhs, vec4i_t rhs) {
    vec4i_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4i lhs subtracted by the vec4i rhs (v = (vec4i_t)lhs - (vec4i_t)rhs)
static inline vec4i_t vec4i_sub(vec4i_t lhs, vec4i_t rhs) {
    vec4i_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4i lhs scaled to the vec4i rhs (v = (vec4i_t)lhs * (vec4i_t)rhs)
static inline vec4i_t vec4i_multiply(vec4i_t lhs, vec4i_t rhs) {
    vec4i_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4i lhs divided by the vec4i rhs (v = (vec4i_t)lhs / (vec4i_t)rhs)
static inline vec4i_t vec4i_divide(vec4i_t lhs, vec4i_t rhs) {
    vec4i_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4i lhs scaled to the int rhs (v = (vec4i_t)lhs * (int)rhs)
static inline vec4i_t vec4i_multiplyi(vec4i_t lhs, int rhs) {
    vec4i_multiplyi_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec4i lhs divided by the int rhs (v = (vec4i_t)lhs / (int)rhs)
static inline vec4i_t vec4i_dividei(vec4i_t lhs, int rhs) {
    vec4i_dividei_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec4i lhs dot vec4i rhs
static inline float vec4i_dot(vec4i_t* lhs, vec4i_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z) + (lhs->w * rhs->w);
}

// returns a vec4i using the calculation vec4i lhs cross vec4i rhs
static inline vec4i_t vec4i_cross(vec4i_t* lhs, vec4i_t* rhs) {
    return veci_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y, 0);
}

// returns the square magnitude of the vec4i lhs
static inline float vec4i_square_magnitude(vec4i_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z) +
            (lhs.w * lhs.w);
}

// returns the magnitude of the vec4i lhs
static inline float vec4i_magnitude(vec4i_t lhs)
{
    return sqrtf(vec4i_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec4i lhs
static inline float vec4i_square_magnitude_p(vec4i_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z) +
            (lhs->w * lhs->w);
}

// returns the magnitude of the vec4i lhs
static inline float vec4i_magnitude_p(vec4i_t* lhs)
{
    return sqrtf(vec4i_square_magnitude_p(lhs));
}

// normalizes the vec4i lhs into a unit vector
static inline void vec4i_normalize_assignment(vec4i_t* lhs)
{
    int magnitude = vec4i_magnitude_p(lhs);
    lhs->x = (lhs->x / magnitude);
    lhs->y = (lhs->y / magnitude);
    lhs->z = (lhs->z / magnitude);
    lhs->w = (lhs->w / magnitude);
}

// returns the unit vector of the vec4i lhs
static inline vec4i_t vec4i_normalize(vec4i_t lhs)
{
    vec4i_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec4i rhs
static inline float vec4i_distance(vec4i_t lhs, vec4i_t rhs)
{
    vec4i_sub_assignment(&lhs, &rhs);
    return vec4i_magnitude_p(&lhs);
}

// iverses the vec4i lhs
static inline void vec4i_inverse_assignment(vec4i_t* lhs) {
    vec4i_multiplyi_assignment(lhs, -1.0f);
}


// add the vec2s rhs to the vec2s lhs, storing the result in lhs ((vec2s_t)lhs += (vec2s_t)rhs)
static inline void vec2s_add_assignment(vec2s_t* lhs, vec2s_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
}

// subtract the vec2s rhs with the vec2s lhs, storing the result in lhs ((vec2s_t)lhs -= (vec2s_t)rhs)
static inline void vec2s_sub_assignment(vec2s_t* lhs, vec2s_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
}

// scale the vec2s lhs to the vec2s rhs, storing the result in lhs ((vec2s_t)lhs *= (vec2s_t)rhs)
static inline void vec2s_multiply_assignment(vec2s_t* lhs, vec2s_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
}

// divide the vec2s lhs by the vec2s rhs, storing the result in lhs ((vec2s_t)lhs /= (vec2s_t)rhs)
static inline void vec2s_divide_assignment(vec2s_t* lhs, vec2s_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
}

// scale the vec2s lhs to the int16_t rhs, storing the result in lhs ((vec2s_t)lhs *= (int16_t)rhs)
static inline void vec2s_multiplys_assignment(vec2s_t* lhs, int16_t rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
}

// divide the vec2s lhs by the int16_t rhs, storing the result in lhs ((vec2s_t)lhs /= (int16_t)rhs)
static inline void vec2s_divides_assignment(vec2s_t* lhs, int16_t rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
}

// returns the sum of the vec2s lhs and the vec2s rhs (v = (vec2s_t)lhs + (vec2s_t)rhs)
static inline vec2s_t vec2s_add(vec2s_t lhs, vec2s_t rhs) {
    vec2s_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2s lhs subtracted by the vec2s rhs (v = (vec2s_t)lhs - (vec2s_t)rhs)
static inline vec2s_t vec2s_sub(vec2s_t lhs, vec2s_t rhs) {
    vec2s_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2s lhs scaled to the vec2s rhs (v = (vec2s_t)lhs * (vec2s_t)rhs)
static inline vec2s_t vec2s_multiply(vec2s_t lhs, vec2s_t rhs) {
    vec2s_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2s lhs divided by the vec2s rhs (v = (vec2s_t)lhs / (vec2s_t)rhs)
static inline vec2s_t vec2s_divide(vec2s_t lhs, vec2s_t rhs) {
    vec2s_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec2s lhs scaled to the int16_t rhs (v = (vec2s_t)lhs * (int16_t)rhs)
static inline vec2s_t vec2s_multiplys(vec2s_t lhs, int16_t rhs) {
    vec2s_multiplys_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec2s lhs divided by the int16_t rhs (v = (vec2s_t)lhs / (int16_t)rhs)
static inline vec2s_t vec2s_divides(vec2s_t lhs, int16_t rhs) {
    vec2s_divides_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec2s lhs dot vec2s rhs
static inline float vec2s_dot(vec2s_t* lhs, vec2s_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y);
}

// returns the square magnitude of the vec2s lhs
static inline float vec2s_square_magnitude(vec2s_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y);
}

// returns the magnitude of the vec2s lhs
static inline float vec2s_magnitude(vec2s_t lhs)
{
    return sqrtf(vec2s_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec2s lhs
static inline float vec2s_square_magnitude_p(vec2s_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y);
}

// returns the magnitude of the vec2s lhs
static inline float vec2s_magnitude_p(vec2s_t* lhs)
{
    return sqrtf(vec2s_square_magnitude_p(lhs));
}

// normalizes the vec2s lhs into a unit vector
static inline void vec2s_normalize_assignment(vec2s_t* lhs)
{
    float magnitude = vec2s_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
    }
}

// returns the unit vector of the vec2s lhs
static inline vec2s_t vec2s_normalize(vec2s_t lhs)
{
    vec2s_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec2s rhs
static inline float vec2s_distance(vec2s_t lhs, vec2s_t rhs)
{
    vec2s_sub_assignment(&lhs, &rhs);
    return vec2s_magnitude_p(&lhs);
}

// iverses the vec2s lhs
static inline void vec2s_inverse_assignment(vec2s_t* lhs) {
    vec2s_multiplys_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec2s lhs
static inline vec2s_t vec2s_inverse(vec2s_t lhs) {
    vec2s_multiplys_assignment(&lhs, -1.0f);
    return lhs;
}


// add the vec3s rhs to the vec3s lhs, storing the result in lhs ((vec3s_t)lhs += (vec3s_t)rhs)
static inline void vec3s_add_assignment(vec3s_t* lhs, vec3s_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
}

// subtract the vec3s rhs with the vec3s lhs, storing the result in lhs ((vec3s_t)lhs -= (vec3s_t)rhs)
static inline void vec3s_sub_assignment(vec3s_t* lhs, vec3s_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
}

// scale the vec3s lhs to the vec3s rhs, storing the result in lhs ((vec3s_t)lhs *= (vec3s_t)rhs)
static inline void vec3s_multiply_assignment(vec3s_t* lhs, vec3s_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
}

// divide the vec3s lhs by the vec3s rhs, storing the result in lhs ((vec3s_t)lhs /= (vec3s_t)rhs)
static inline void vec3s_divide_assignment(vec3s_t* lhs, vec3s_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
}

// scale the vec3s lhs to the int16_t rhs, storing the result in lhs ((vec3s_t)lhs *= (int16_t)rhs)
static inline void vec3s_multiplys_assignment(vec3s_t* lhs, int16_t rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
}

// divide the vec3s lhs by the int16_t rhs, storing the result in lhs ((vec3s_t)lhs /= (int16_t)rhs)
static inline void vec3s_divides_assignment(vec3s_t* lhs, int16_t rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
}

// returns the sum of the vec3s lhs and the vec3s rhs (v = (vec3s_t)lhs + (vec3s_t)rhs)
static inline vec3s_t vec3s_add(vec3s_t lhs, vec3s_t rhs) {
    vec3s_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3s lhs subtracted by the vec3s rhs (v = (vec3s_t)lhs - (vec3s_t)rhs)
static inline vec3s_t vec3s_sub(vec3s_t lhs, vec3s_t rhs) {
    vec3s_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3s lhs scaled to the vec3s rhs (v = (vec3s_t)lhs * (vec3s_t)rhs)
static inline vec3s_t vec3s_multiply(vec3s_t lhs, vec3s_t rhs) {
    vec3s_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3s lhs divided by the vec3s rhs (v = (vec3s_t)lhs / (vec3s_t)rhs)
static inline vec3s_t vec3s_divide(vec3s_t lhs, vec3s_t rhs) {
    vec3s_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec3s lhs scaled to the int16_t rhs (v = (vec3s_t)lhs * (int16_t)rhs)
static inline vec3s_t vec3s_multiplys(vec3s_t lhs, int16_t rhs) {
    vec3s_multiplys_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec3s lhs divided by the int16_t rhs (v = (vec3s_t)lhs / (int16_t)rhs)
static inline vec3s_t vec3s_divides(vec3s_t lhs, int16_t rhs) {
    vec3s_divides_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec3s lhs dot vec3s rhs
static inline float vec3s_dot(vec3s_t* lhs, vec3s_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z);
}

// returns a vec3s using the calculation vec3s lhs cross vec3s rhs
static inline vec3s_t vec3s_cross(vec3s_t* lhs, vec3s_t* rhs) {
    return vecs_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y);
}

// returns the square magnitude of the vec3s lhs
static inline float vec3s_square_magnitude(vec3s_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z);
}

// returns the magnitude of the vec3s lhs
static inline float vec3s_magnitude(vec3s_t lhs)
{
    return sqrtf(vec3s_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec3s lhs
static inline float vec3s_square_magnitude_p(vec3s_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z);
}

// returns the magnitude of the vec3s lhs
static inline float vec3s_magnitude_p(vec3s_t* lhs)
{
    return sqrtf(vec3s_square_magnitude_p(lhs));
}

// normalizes the vec3s lhs into a unit vector
static inline void vec3s_normalize_assignment(vec3s_t* lhs)
{
    float magnitude = vec3s_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
        lhs->z = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
        lhs->z = (lhs->z / magnitude);
    }
}

// returns the unit vector of the vec3s lhs
static inline vec3s_t vec3s_normalize(vec3s_t lhs)
{
    vec3s_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec3s rhs
static inline float vec3s_distance(vec3s_t lhs, vec3s_t rhs)
{
    vec3s_sub_assignment(&lhs, &rhs);
    return vec3s_magnitude_p(&lhs);
}

// iverses the vec3s lhs
static inline void vec3s_inverse_assignment(vec3s_t* lhs) {
    vec3s_multiplys_assignment(lhs, -1.0f);
}

// returns the inverse vector of the vec3s lhs
static inline vec3s_t vec3s_inverse(vec3s_t lhs) {
    vec3s_multiplys_assignment(&lhs, -1.0f);
    return lhs;
}


// add the vec4s rhs to the vec4s lhs, storing the result in lhs ((vec4s_t)lhs += (vec4s_t)rhs)
static inline void vec4s_add_assignment(vec4s_t* lhs, vec4s_t* rhs) {
    lhs->x += rhs->x;
    lhs->y += rhs->y;
    lhs->z += rhs->z;
    lhs->w += rhs->w;
}

// subtract the vec4s rhs with the vec4s lhs, storing the result in lhs ((vec4s_t)lhs -= (vec4s_t)rhs)
static inline void vec4s_sub_assignment(vec4s_t* lhs, vec4s_t* rhs) {
    lhs->x -= rhs->x;
    lhs->y -= rhs->y;
    lhs->z -= rhs->z;
    lhs->w -= rhs->w;
}

// scale the vec4s lhs to the vec4s rhs, storing the result in lhs ((vec4s_t)lhs *= (vec4s_t)rhs)
static inline void vec4s_multiply_assignment(vec4s_t* lhs, vec4s_t* rhs) {
    lhs->x *= rhs->x;
    lhs->y *= rhs->y;
    lhs->z *= rhs->z;
    lhs->w *= rhs->w;
}

// divide the vec4s lhs by the vec4s rhs, storing the result in lhs ((vec4s_t)lhs /= (vec4s_t)rhs)
static inline void vec4s_divide_assignment(vec4s_t* lhs, vec4s_t* rhs) {
    lhs->x /= rhs->x;
    lhs->y /= rhs->y;
    lhs->z /= rhs->z;
    lhs->w /= rhs->w;
}

// scale the vec4s lhs to the int16_t rhs, storing the result in lhs ((vec4s_t)lhs *= (int16_t)rhs)
static inline void vec4s_multiplys_assignment(vec4s_t* lhs, int16_t rhs) {
    lhs->x *= rhs;
    lhs->y *= rhs;
    lhs->z *= rhs;
    lhs->w *= rhs;
}

// divide the vec4s lhs by the int16_t rhs, storing the result in lhs ((vec4s_t)lhs /= (int16_t)rhs)
static inline void vec4s_divides_assignment(vec4s_t* lhs, int16_t rhs) {
    lhs->x /= rhs;
    lhs->y /= rhs;
    lhs->z /= rhs;
    lhs->w /= rhs;
}

// returns the sum of the vec4s lhs and the vec4s rhs (v = (vec4s_t)lhs + (vec4s_t)rhs)
static inline vec4s_t vec4s_add(vec4s_t lhs, vec4s_t rhs) {
    vec4s_add_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4s lhs subtracted by the vec4s rhs (v = (vec4s_t)lhs - (vec4s_t)rhs)
static inline vec4s_t vec4s_sub(vec4s_t lhs, vec4s_t rhs) {
    vec4s_sub_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4s lhs scaled to the vec4s rhs (v = (vec4s_t)lhs * (vec4s_t)rhs)
static inline vec4s_t vec4s_multiply(vec4s_t lhs, vec4s_t rhs) {
    vec4s_multiply_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4s lhs divided by the vec4s rhs (v = (vec4s_t)lhs / (vec4s_t)rhs)
static inline vec4s_t vec4s_divide(vec4s_t lhs, vec4s_t rhs) {
    vec4s_divide_assignment(&lhs, &rhs);
    return lhs;
}

// returns the vec4s lhs scaled to the int16_t rhs (v = (vec4s_t)lhs * (int16_t)rhs)
static inline vec4s_t vec4s_multiplys(vec4s_t lhs, int16_t rhs) {
    vec4s_multiplys_assignment(&lhs, rhs);
    return lhs;
}

// returns the vec4s lhs divided by the int16_t rhs (v = (vec4s_t)lhs / (int16_t)rhs)
static inline vec4s_t vec4s_divides(vec4s_t lhs, int16_t rhs) {
    vec4s_divides_assignment(&lhs, rhs);
    return lhs;
}


// returns a float using the calculation vec4s lhs dot vec4s rhs
static inline float vec4s_dot(vec4s_t* lhs, vec4s_t* rhs) {
    return (lhs->x * rhs->x) + (lhs->y * rhs->y) + (lhs->z * rhs->z) + (lhs->w * rhs->w);
}

// returns a vec4s using the calculation vec4s lhs cross vec4s rhs
static inline vec4s_t vec4s_cross(vec4s_t* lhs, vec4s_t* rhs) {
    return vecs_new( lhs->y * rhs->z - rhs->y * lhs->z,
                    lhs->z * rhs->x - rhs->z * lhs->x,
                    lhs->x * rhs->y - rhs->x * lhs->y, 0);
}

// returns the square magnitude of the vec4s lhs
static inline float vec4s_square_magnitude(vec4s_t lhs) {
    return  (lhs.x * lhs.x) +
            (lhs.y * lhs.y) +
            (lhs.z * lhs.z) +
            (lhs.w * lhs.w);
}

// returns the magnitude of the vec4s lhs
static inline float vec4s_magnitude(vec4s_t lhs)
{
    return sqrtf(vec4s_square_magnitude(lhs));
}

// I needed these for optimization, _p isn't a very good way to name them. Open for suggestions
// returns the square magnitude of the vec4s lhs
static inline float vec4s_square_magnitude_p(vec4s_t* lhs) {
    return  (lhs->x * lhs->x) +
            (lhs->y * lhs->y) +
            (lhs->z * lhs->z) +
            (lhs->w * lhs->w);
}

// returns the magnitude of the vec4s lhs
static inline float vec4s_magnitude_p(vec4s_t* lhs)
{
    return sqrtf(vec4s_square_magnitude_p(lhs));
}

// normalizes the vec4s lhs into a unit vector
static inline void vec4s_normalize_assignment(vec4s_t* lhs)
{
    float magnitude = vec4s_magnitude_p(lhs);
    if (magnitude == 0) {
        lhs->x = 0;
        lhs->y = 0;
        lhs->z = 0;
        lhs->w = 0;
    }
    else {
        lhs->x = (lhs->x / magnitude);
        lhs->y = (lhs->y / magnitude);
        lhs->z = (lhs->z / magnitude);
        lhs->w = (lhs->w / magnitude);
    }
}

// returns the unit vector of the vec4s lhs
static inline vec4s_t vec4s_normalize(vec4s_t lhs)
{
    vec4s_normalize_assignment(&lhs);
    return lhs;
}

// returns the magnitude of the vecf lhs subtracted by the vec4s rhs
static inline float vec4s_distance(vec4s_t lhs, vec4s_t rhs)
{
    vec4s_sub_assignment(&lhs, &rhs);
    return vec4s_magnitude_p(&lhs);
}

// iverses the vec4s lhs
static inline void vec4s_inverse_assignment(vec4s_t* lhs) {
    vec4s_multiplys_assignment(lhs, -1.0f);
}

#endif /* __Z64OVL_VECTOR_FUNCTIONS_INCLUDED__ */