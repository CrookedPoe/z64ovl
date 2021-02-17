#ifndef __Z64OVL_Z_EN_BIGOKUTA__
#define __Z64OVL_Z_EN_BIGOKUTA__

#define Z_EN_BIGOKUTA_ACTOR_NUMBER     0x01A8
#define Z_EN_BIGOKUTA_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_BIGOKUTA_OBJECT_NUMBER    0x019E
#define Z_EN_BIGOKUTA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_bigokuta_s z_en_bigokuta_t;
struct z_en_bigokuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x190 */ unsigned char damage_eff_kind;
    /* 0x192 */ short timer;
    /* 0x194 */ short demo_camera;
    /* 0x196 */ short next_event_id;
    /* 0x198 */ s_xyz joint1[20];
    /* 0x210 */ s_xyz joint2[20];
    /* 0x288 */ float damage_eff_alpha;
    /* 0x28C */ float damage_eff_scale;
    /* 0x290 */ float damage_eff_scale2;
    /* 0x294 */ xyz_t player_old_pos;
    /* 0x2A0 */ xyz_t mouth_pos;
    /* 0x2AC */ xyz_t end_mouth_pos;
    /* 0x2B8 */ xyz_t cam_eye_pos;
    /* 0x2C4 */ xyz_t shape_pos[13];
    /* 0x360 */ ClObjPipe all_pipe;
    /* 0x3AC */ ClObjPipe ac_pipe;
}; /* size = 0x03F8 */

#endif /* __Z64OVL_Z_EN_BIGOKUTA__ */
