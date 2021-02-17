#include "dl_view.h"

void hierarchy_mode_initialize(en_dl_view_t* this, global_t* gl)
{
    this->object.scale = 0.1f;
    this->actor.scale.x = this->object.scale;
    this->actor.scale.y = this->object.scale;
    this->actor.scale.z = this->object.scale;
    this->actor.world.t = VEC3F_NEW(0.0f, 0.0f, 0.0f);
    this->actor.world.r = VEC3S_NEW(0, 0, 0);
}

void draw_hierarchy(en_dl_view_t* this, global_t* gl)
{
    skeleton_mtx_t* skl = (skeleton_mtx_t*)this->object.skeleton.skl;
    if (this->object.skeleton.ready)
    {
        zh_skelanime_draw(gl, &this->object.skeleton.skelanime, &this->actor, 1);
    }
    else
    {
        if (skl)
        {
            zh_skelanime_init(gl, &this->object.skeleton.skelanime, &skl->model_info, this->object.skeleton.anim, 1);

            //int sz = 
            //((sizeof(normal_limb_entry_t) * skl->model_info.limb_count) +
            //(sizeof(void*) * skl->model_info.limb_count) +
            //sizeof(skeleton_mtx_t));
            //bcopy(SEGTORAM(skl->model_info.limb_table[0]), (void*)0x80600000, sz);

            this->object.skeleton.ready = 1;
        }
    }
}