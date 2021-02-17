#include "drawskel.h"

static void construct(en_drawskel_t* this, global_t* gl)
{
    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface

    skeleton_mtx_t* skl = (skeleton_mtx_t*)0x060000F0;
    animation_t* anim = (animation_t*)0x060076EC;

    this->actor.scale.x = 0.01f;
    this->actor.scale.y = 0.01f;
    this->actor.scale.z = 0.01f;
    zh_skelanime_init(gl, &this->skelanime, &skl->model_info, anim, 1);
}

static void deconstruct(en_drawskel_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_drawskel_t* this, global_t* gl)
{
    /* Empty */
}

static void display(en_drawskel_t* this, global_t* gl)
{
    zh_skelanime_draw(gl, &this->skelanime, &this->actor, 1);
}

