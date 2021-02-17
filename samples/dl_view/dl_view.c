#include "dl_view.h"
#include "grid.c"
#include "camera.c"
#include "hierarchy.c"

static void construct(en_dl_view_t* this, global_t* gl)
{
    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface
    this->input.time = 0.0f;
    grid_construct(this, 8, 8, 32);
    input_construct(&this->input.instance, &gl->state.input[CONTROLLER_1].cur);
    camera_initialize(this, gl);

    this->grid.show_grid = 1;
    this->object.mode = MODE_DLIST;
    this->object.scale = 1.0f;
    this->object.main_dlist = (Gfx*)0xBEEFF00D;
    this->object.skeleton.skl = (void*)0xABADF00D;
    this->object.skeleton.anim = (animation_t*)0xF00DBEEF;
    this->object.skeleton.ready = 0;

    this->debug_info.word[0] = 0xDEADBEEF;
    this->debug_info.word[1] = OFFSETOF(en_dl_view_t, grid.show_grid);              // Grid Boolean
    this->debug_info.word[2] = OFFSETOF(en_dl_view_t, object.scale);                // Display List Scale
    this->debug_info.word[3] = OFFSETOF(en_dl_view_t, object.main_dlist);           // Display List Pointer
    this->debug_info.word[4] = OFFSETOF(en_dl_view_t, object.mode);                 // Object Render Mode
    this->debug_info.word[5] = OFFSETOF(en_dl_view_t, object.skeleton.skl);         // Current Skeleton
    this->debug_info.word[6] = OFFSETOF(en_dl_view_t, object.skeleton.anim);        // Current Animation
    this->debug_info.word[7] = OFFSETOF(en_dl_view_t, object.skeleton.skelanime);   // Current Skelanime
    this->debug_info.word[8] = OFFSETOF(en_dl_view_t, object.skeleton.ready);       // Skelanime Ready Flag

}

static void deconstruct(en_dl_view_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_dl_view_t* this, global_t* gl)
{
    camera_handle_input(this, gl);
}

static void display(en_dl_view_t* this, global_t* gl)
{   
    debug_text_t* dbtx = &this->debug_info.dbtx;
    //zh_draw_debug_text(gl, dbtx, 0xFFFFFFFF, 3, 3, "%08X", &this->actor);
    if (this->grid.show_grid)
    {
        z_matrix_push();
        {
            grid_display(this, gl);
        }
        z_matrix_pop();
    }

    z_matrix_push();
    {
        if (this->object.scale <= 0)
            this->object.scale = 1.0f;
        z_matrix_scale(this->object.scale, this->object.scale, this->object.scale, 1);

        if (this->object.mode == MODE_DLIST)
        {
            if (this->object.main_dlist != (Gfx*)0xBEEFF00D)
                z_cheap_draw_opa(gl, this->object.main_dlist);
        }
        else if (this->object.mode == MODE_HIERARCHY)
        {
            hierarchy_mode_initialize(this, gl);
            draw_hierarchy(this, gl);
        }
    }
    z_matrix_pop();
}

