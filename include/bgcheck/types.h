#ifndef __Z64OVL_BGCHECK_TYPES_INCLUDED__
#define __Z64OVL_BGCHECK_TYPES_INCLUDED__

typedef struct {
    /* 0x00 */ vec3s_t pos;
    /* 0x06 */
} bgcheck_vertex_t;

typedef struct {
    /* 0x00 */ uint16_t     info;
    /* 0x02 */ uint16_t     v[3];
    /* 0x08 */ int16_t      a;
    /* 0x0A */ int16_t      b;
    /* 0x0C */ int16_t      c;
    /* 0x0E */ int16_t      d;
    /* 0x10 */
} bgcheck_polygon_t;

typedef struct {
    /* 0x00 */ uint32_t info[2];
    /* 0x08 */
} bgcheck_polygon_info_t;

typedef struct {
    /* 0x00 */ uint16_t     type;
    /* 0x02 */ uint16_t     num;
    /* 0x04 */ vec3s_t*     table;
    /* 0x08 */
} bgcheck_camera_data_t;

typedef struct {
    /* 0x00 */ vec3s_t      min_pos;
    /* 0x06 */ int16_t      size_x;
    /* 0x08 */ int16_t      size_y;
    /* 0x0C */ uint32_t     info;
    /* 0x10 */
} bgcheck_water_info_t;

typedef struct {
    /* 0x00 */ int16_t                      vtx_min[3];
    /* 0x06 */ int16_t                      vtx_max[3];
    /* 0x0C */ uint16_t                     vtx_num;
    /* 0x10 */ bgcheck_vertex_t*            vtx_table;
    /* 0x14 */ uint16_t                     poly_num;
    /* 0x18 */ bgcheck_polygon_t*           poly_table;
    /* 0x1C */ bgcheck_polygon_info_t*      poly_info_table;
    /* 0x20 */ bgcheck_camera_data_t*       camera_data_table;
    /* 0x24 */ uint16_t                     water_info_num;
    /* 0x28 */ bgcheck_water_info_t*        water_info_table;
    /* 0x2C */
} bgcheck_data_info_t;

typedef struct {
    /* 0x00 */ int16_t  data;
    /* 0x02 */ uint16_t next;
    /* 0x04 */
} bgcheck_slist_node_t;

typedef struct {
    /* 0x00 */ uint16_t head;
    /* 0x02 */
} bgcheck_slist_t;

typedef struct {
    /* 0x00 */ bgcheck_slist_node_t*    table;
    /* 0x04 */ int32_t                  last_index;
    /* 0x08 */ int32_t                  table_size;
    /* 0x0C */
} bgcheck_slist_table_t;

typedef struct {
    /* 0x00 */ bgcheck_slist_t  ground;
    /* 0x02 */ bgcheck_slist_t  wall;
    /* 0x04 */ bgcheck_slist_t  roof;
    /* 0x06 */
} bgcheck_mesh_t;

typedef struct {
    /* 0x00 */ uint16_t                 node_size;
    /* 0x02 */ uint16_t                 node_last_index;
    /* 0x04 */ bgcheck_slist_node_t*    node_table;
    /* 0x08 */ int8_t*                  polygon_check;
    /* 0x0C */
} bgcheck_alloc_t;

typedef struct {
    /* 0x00 */ uint16_t         start_index;
    /* 0x02 */ bgcheck_slist_t  roof;
    /* 0x04 */ bgcheck_slist_t  wall;
    /* 0x06 */ bgcheck_slist_t  ground;
    /* 0x08 */
} dynapoly_index_info_t;

typedef struct {
    /* 0x00 */ uint16_t start_index;
    /* 0x02 */
}   dynapoly_vert_index_info_t;

typedef struct {
    /* 0x00 */ vec3f_t  scale;
    /* 0x0C */ vec3s_t  rot;
    /* 0x14 */ vec3f_t  translation;
    /* 0x20 */
} bgcheck_shape_srt_t;

typedef struct {
    /* 0x00 */ actor_t*                     actor;
    /* 0x04 */ bgcheck_data_info_t*         data;
    /* 0x08 */ dynapoly_index_info_t        polygon;
    /* 0x10 */ dynapoly_vert_index_info_t   vertex;
    /* 0x14 */ bgcheck_shape_srt_t          old_srt;
    /* 0x34 */ bgcheck_shape_srt_t          now_srt;
    /* 0x54 */ spheres_t                    bounding_sphere;
    /* 0x5C */ float                        min_y;
    /* 0x60 */ float                        max_y;
    /* 0x64 */
} actor_dynapoly_info_t;

typedef struct {
    /* 0x00 */ bgcheck_polygon_t*   buffer;
    /* 0x04 */
} dynapoly_poly_table_t;

typedef struct {
    /* 0x00 */ bgcheck_vertex_t*    buffer;
    /* 0x04 */
} dynapoly_vert_table_t;

typedef struct {
    /* 0x0000 */ uint8_t                    bit_info;
    /* 0x0004 */ actor_dynapoly_info_t      table[50];
    /* 0x138C */ uint16_t                   mask_table[50];
    /* 0x13F0 */ dynapoly_poly_table_t      polygon_table;
    /* 0x13F4 */ dynapoly_vert_table_t      vertex_table;
    /* 0x13F8 */ bgcheck_slist_table_t      slist;
    /* 0x1404 */ int32_t                    sst_size;
    /* 0x1408 */ int32_t                    poly_num;
    /* 0x140C */ int32_t                    vert_num;
    /* 0x1410 */
} dynapoly_info_t;

typedef struct bgcheck_context_s {
    /* 0x0000 */ bgcheck_data_info_t*       data;
    /* 0x0004 */ vec3f_t                    mesh_min_pos;
    /* 0x0010 */ vec3f_t                    mesh_max_pos;
    /* 0x001C */ int32_t                    mesh_num_x;
    /* 0x0020 */ int32_t                    mesh_num_y;
    /* 0x0024 */ int32_t                    mesh_num_z;
    /* 0x0028 */ float                      mesh_size_x;
    /* 0x002C */ float                      mesh_size_y;
    /* 0x0030 */ float                      mesh_size_z;
    /* 0x0034 */ float                      mesh_size_x_r;  /* Reciprocal */
    /* 0x0038 */ float                      mesh_size_y_r;
    /* 0x003C */ float                      mesh_size_z_r;
    /* 0x0040 */ bgcheck_mesh_t*            mesh_table;
    /* 0x0044 */ bgcheck_alloc_t            alloc;
    /* 0x0050 */ dynapoly_info_t            dynapoly;
    /* 0x1460 */ uint32_t                   max_memory_size;
    /* 0x1464 */
} bgcheck_context_t;

#endif /* __Z64OVL_BGCHECK_TYPES_INCLUDED__ */
