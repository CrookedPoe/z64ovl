#include "dl_view.h"

static void camera_initialize(en_dl_view_t* this, global_t* gl)
{
    // Initialize Camera Structure
    gl->camera_active = 0;
    this->cam.instance = gl->cameras[gl->camera_active];
    this->cam.instance->setting = 33;
    this->cam.instance->mode = 18;
    this->cam.speed = 10.0f;

    // Initialize Local Variables
    this->cam.pos = VEC3F_NEW(0.0f, 0.0f, -15.0f);      // Position
    this->cam.rot = VEC3F_NEW(0.0f, 0.0f, 0.0f);        // Rotation
    this->cam.forward = VEC3F_NEW(0.0f, 0.0f, 0.0f);    // Forward Vector
    this->cam.right = VEC3F_NEW(0.0f, 0.0f, 0.0f);      // Right Vector
}

static void clamp_rotation(en_dl_view_t* this)
{
    // Clamp Pitch
    if (this->cam.rot.x > TAU) {
        this->cam.rot.x -= TAU;
        this->cam.rot.y += PI;
    }

    if (this->cam.rot.x < -(TAU)) {
        this->cam.rot.x += TAU;
        this->cam.rot.y += PI;
    }

    // Clamp Yaw
    if (this->cam.rot.y > TAU) {
        this->cam.rot.y -= TAU;
    }

    if (this->cam.rot.y < -(TAU)) {
        this->cam.rot.y += TAU;
    }
}

static void camera_handle_input(en_dl_view_t* this, global_t* gl)
{
    this->input.time += ((float)gl->gamplay_frame_counter) * FPS;
    input_update(&this->input.instance, this->input.time);

    if (BUTTON_PRESSED(this->input.instance.z)) { // Increase Speed
        this->cam.speed = 30.0f;
    } else {
        this->cam.speed = 10.0f;
    }

    vec3f_t _up = VEC3F_NEW(0.0f, 1.0f, 0.0f);
    vec2i_t _pos = VEC2I_NEW(0, 0);
    
    // Rotate with Joystick
    this->cam.rot.x -= DTORF(this->input.instance.jy * this->cam.speed);
    this->cam.rot.y -= DTORF(this->input.instance.jx * this->cam.speed);

    clamp_rotation(this);

    // Update Forward and Right
    this->cam.forward = vec3f_normalize(vec3f_point_radians(this->cam.rot.x, this->cam.rot.y, 1.0f));
    this->cam.right = vec3f_cross(&this->cam.forward, &_up);

    // Button Input
    _pos.x += (BUTTON_PRESSED_TIME(this->input.instance.dr, this->input.time)); // Right
    _pos.x -= (BUTTON_PRESSED_TIME(this->input.instance.dl, this->input.time)); // Left
    _pos.y += (BUTTON_PRESSED_TIME(this->input.instance.du, this->input.time)); // Forward
    _pos.y -= (BUTTON_PRESSED_TIME(this->input.instance.dd, this->input.time)); // Backward

    if (_pos.x || _pos.y) {
        this->cam.pos = vec3f_add(
            this->cam.pos
            , vec3f_add(
                vec3f_multiplyf(this->cam.forward, _pos.y * this->cam.speed)
                , vec3f_multiplyf(this->cam.right, _pos.x * this->cam.speed)
            )
        );
    }
    
    // Update Camera Struct
    this->cam.instance->translation = this->cam.pos;
    this->cam.instance->focus = vec3f_add(this->cam.pos, this->cam.forward);

    if (BUTTON_PRESSED_TIME(this->input.instance.r, this->input.time)) // Reset
    {
        this->cam.pos = VEC3F_NEW(0.0f, 0.0f, -15.0f);      // Position
        this->cam.rot = VEC3F_NEW(0.0f, 0.0f, 0.0f);        // Rotation
        this->cam.forward = VEC3F_NEW(0.0f, 0.0f, 0.0f);    // Forward Vector
        this->cam.right = VEC3F_NEW(0.0f, 0.0f, 0.0f);      // Right Vector
    }
}