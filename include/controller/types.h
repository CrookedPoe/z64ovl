#ifndef __Z64OVL_INPUT_TYPES_INCLUDED__
#define __Z64OVL_INPUT_TYPES_INCLUDED__

#define PAD_STATE_UP        0
#define PAD_STATE_PRESSED   1
#define PAD_STATE_DOWN      2

typedef struct {
	uint8_t state;
	float invoke_time; // It is best to not overwrite this, just store a separate time for last [good] invoke time. Ask Drahsid for logic help if needed
	float time_down; // This does not work for cyclic holding, for that use the suggestion proposed above. Use this if you just need to detect button holding
} button_t;

typedef struct input_instance_s input_instance_t;
struct input_instance_s {
	button_t a;
	button_t b;
	button_t z;
	button_t s;
	button_t du;
	button_t dd;
	button_t dl;
	button_t dr;
	button_t l;
	button_t r;
	button_t cu;
	button_t cd;
	button_t cl;
	button_t cr;
	float jx, jy;
	OSContPad* controller;
};

#endif /* __Z64OVL_INPUT_TYPES_INCLUDED__ */