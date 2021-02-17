#include "controller.h"

static void construct(en_controller_t* this, global_t* gl)
{
    this->link = (actor_t*)LINK;
    this->cam.t = (vec3f_t){0.0f, 0.0f, -5.0f};
    this->cam.r = (vec3s_t){0, 0, 0};
    this->speed = 10.0f;

    this->link->home.t = this->link->world.t = this->cam.t;

    input_construct(&this->input, &gl->state.input[CONTROLLER_1].cur);
    this->time = 0.0f;
}

static void deconstruct(en_controller_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_controller_t* this, global_t* gl)
{
    this->actor.home = this->actor.world = this->link->world;
    this->time += ((float)gl->gamplay_frame_counter) * FPS;
    input_update(&this->input, this->time);

    this->cam.r = (vec3s_t){
        AVAL(this->link, int16_t, BODY_ANGLE),
        AVAL(this->link, int16_t, ACTION_ANGLE_Y),
        0
    };

    this->link->home.r.y = this->link->world.r.y = this->cam.r.y;

    vec3f_t forward = (vec3f_t){
        sinf(STOR(this->cam.r.y)) * cosf(STOR(this->cam.r.x)),
        -sinf(STOR(this->cam.r.x)),
        cosf(STOR(this->cam.r.y)) * cosf(STOR(this->cam.r.x)),
    };

    vec3f_t right = (vec3f_t){
        forward.y * 0 - 1 * forward.z,
        forward.z * 0 - 0 * forward.x,
        forward.x * 1 - 0 * forward.y,
    };

    if (BUTTON_PRESSED_TIME(this->input.du, this->time)) { // Forward
        this->cam.t.x += (forward.x * this->speed);
        this->cam.t.y += (forward.y * this->speed);
        this->cam.t.z += (forward.z * this->speed);
    }

    if (BUTTON_PRESSED_TIME(this->input.dr, this->time)) { // Right
        this->cam.t.x += (right.x * this->speed);
        this->cam.t.z += (right.z * this->speed);
    }

    if (BUTTON_PRESSED_TIME(this->input.dl, this->time)) { // Left
        this->cam.t.x -= (right.x * this->speed);
        this->cam.t.z -= (right.z * this->speed);
    }

    if (BUTTON_PRESSED_TIME(this->input.dd, this->time)) { // Backward
        this->cam.t.x -= (forward.x * this->speed);
        this->cam.t.y -= (forward.y * this->speed);
        this->cam.t.z -= (forward.z * this->speed);
    }

    if (BUTTON_PRESSED_TIME(this->input.l, this->time)) { // Reset
        this->cam.t = (vec3f_t){0.0f, 0.0f, -5.0f};
        this->cam.r = (vec3s_t){0, 0, 0};
    }

    this->link->home.t = this->link->world.t = this->cam.t;
}

static void display(en_controller_t* this, global_t* gl)
{
    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface
    debug_text_t* dbtx = &this->dbtx;

    zh_draw_debug_text(gl, dbtx, 0xFFFFFFFF, 3, 5, "XR: %.2f, YR: %.2f", STOD(this->cam.r.x), STOD(this->cam.r.y));
}

