#include "test.h"

static void construct(en_test_t* this, global_t* gl)
{
    /* Empty */
}

static void deconstruct(en_test_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_test_t* this, global_t* gl)
{
    /* Empty */
}

static void display(en_test_t* this, global_t* gl)
{
    disp_buf_t* xlu = &(gl->state).gfx_context->poly_xlu;
    debug_text_t* dbtx = &this->dbtx;

    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface
    vec3f_t base = (vec3f_t){0.0f, 0.0f, 0.0f};
    vec3f_t* link_world = (vec3f_t*)AADDR(LINK, 0x24);
    gDPSetEnvColor(xlu->p++, 0, 0, 255, 200);
    //zh_draw_cylinder_xlu(gl, link_world->x, link_world->y + 10.0f, link_world->z, 20, 20);
    //zh_draw_cone_xlu(gl, link_world->x, link_world->y + 10.0f, link_world->z, 20, 20);
    //zh_draw_sphere_xlu(gl, link_world->x, link_world->y + 10.0f, link_world->z, 30);
    //zh_draw_circle_xlu(gl, link_world->x, link_world->y + 10.0f, link_world->z, 30);
    zh_draw_cube_xlu(gl, link_world->x, link_world->y + 10.0f, link_world->z, 10);
    zh_draw_debug_text(gl, dbtx, 0xFFFFFFFF, 3, 3, "Happy z64ovl!");
}

