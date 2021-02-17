#ifndef __Z64OVL_COLLISION_TYPES_INCLUDED__
#define __Z64OVL_COLLISION_TYPES_INCLUDED__

typedef void* collider_jntsph_t; /* Placeholder */
typedef void* collider_jntsph_item_t; /* Placeholder */
typedef void* collider_cylinder_t; /* Placeholder */
typedef void* collider_tris_t; /* Placeholder */
typedef void* collider_quad_t; /* Placeholder */

typedef struct quad_pos_s {
    int32_t prev_data_on_flag;
    vec3f_t prev_top_pos;
    vec3f_t prev_root_pos;
} quad_pos_t;

#endif /* __Z64OVL_COLLISION_TYPES_INCLUDED__ */