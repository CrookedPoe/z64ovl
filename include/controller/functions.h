#ifndef __Z64OVL_INPUT_FUNCTIONS_INCLUDED__
#define __Z64OVL_INPUT_FUNCTIONS_INCLUDED__

#include "types.h"

static inline void button_construct(button_t* this)
{
    this->state = PAD_STATE_UP;
    this->invoke_time = 0;
    this->time_down = 0;
}

static inline void button_update(button_t* this, uint8_t down_bool, float time)
{
	switch (this->state)
	{
		case(PAD_STATE_UP):
			if (down_bool) {
				this->state = PAD_STATE_PRESSED;
				this->invoke_time = time;
			}
			break;

		case(PAD_STATE_PRESSED):
			if (down_bool) this->state = PAD_STATE_DOWN;
			else {
				this->state = PAD_STATE_UP;
				this->invoke_time = 0;
			}
			break;

		case(PAD_STATE_DOWN):
			if (down_bool) {
				this->time_down = time - this->invoke_time;
			}
			else {
				this->state = PAD_STATE_UP;
				this->invoke_time = 0;
			}
			break;
	}
}

static inline void input_construct(input_instance_t* this, OSContPad* controller)
{
    button_construct(&this->a);
	button_construct(&this->b);
	button_construct(&this->z);
	button_construct(&this->s);
	button_construct(&this->du);
	button_construct(&this->dd);
	button_construct(&this->dl);
	button_construct(&this->dr);
	button_construct(&this->l);
	button_construct(&this->r);
	button_construct(&this->cu);
	button_construct(&this->cd);
	button_construct(&this->cl);
	button_construct(&this->cr);
	this->jx = 0;
	this->jy = 0;
	this->controller = controller;
}

static inline void input_update(input_instance_t* this, float time)
{
    uint8_t button = this->controller->a;
	button_update(&this->a, button, time);

	button = this->controller->b;
	button_update(&this->b, button, time);

	button = this->controller->z;
	button_update(&this->z, button, time);

	button = this->controller->s;
	button_update(&this->b, button, time);

	button = this->controller->b;
	button_update(&this->s, button, time);

	button = this->controller->du;
	button_update(&this->du, button, time);

	button = this->controller->dd;
	button_update(&this->dd, button, time);

	button = this->controller->dl;
	button_update(&this->dl, button, time);

	button = this->controller->dr;
	button_update(&this->dr, button, time);

	button = this->controller->l;
	button_update(&this->l, button, time);

	button = this->controller->r;
	button_update(&this->r, button, time);

	button = this->controller->cu;
	button_update(&this->cu, button, time);

	button = this->controller->cd;
	button_update(&this->cd, button, time);

	button = this->controller->cl;
	button_update(&this->cl, button, time);

	button = this->controller->cr;
	button_update(&this->cr, button, time);

	/* divide each by 128.0f */
	this->jx = (float)this->controller->stick_x * 0.0078125f;
	this->jy = (float)this->controller->stick_y * 0.0078125f;
}

#define BUTTON_PRESSED(BUTTON) (((BUTTON).state > 0))
#define BUTTON_PRESSED_TIME(BUTTON, TIME) (((BUTTON).state > 0 && ((TIME) - (BUTTON).invoke_time) >= 0.15f) || ((BUTTON).state == PAD_STATE_PRESSED))

#endif /* __Z64OVL_INPUT_FUNCTIONS_INCLUDED__ */