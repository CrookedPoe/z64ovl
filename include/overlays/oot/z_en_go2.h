#ifndef __Z64OVL_Z_EN_GO2__
#define __Z64OVL_Z_EN_GO2__

#define Z_EN_GO2_ACTOR_NUMBER     0x01AE
#define Z_EN_GO2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GO2_OBJECT_NUMBER    0x00C9
#define Z_EN_GO2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_go2_s z_en_go2_t;
struct z_en_go2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ NpcBasicAct npcbasic;
    /* 0x1AC */ ClObjPipe all_pipe;
    /* 0x1F8 */ Path_Info* path_data;
    /* 0x1FC */ unsigned char pad_on_cnt;
    /* 0x1FD */ unsigned char old_meschk;
    /* 0x1FE */ unsigned char revers_f;
    /* 0x1FF */ unsigned char talk_req;
    /* 0x200 */ signed char path_idx;
    /* 0x201 */ unsigned char stand_up;
    /* 0x202 */ unsigned char demo_seq;
    /* 0x203 */ unsigned char eye_type;
    /* 0x204 */ unsigned char eye;
    /* 0x205 */ unsigned char mou;
    /* 0x206 */ unsigned char bunki_pt;
    /* 0x208 */ float speakrange;
    /* 0x20C */ float approach;
    /* 0x210 */ float shadow_a;
    /* 0x214 */ short eyetimer;
    /* 0x216 */ short pw_sy[18];
    /* 0x23A */ short pw_sz[18];
    /* 0x25E */ short lookmode;
    /* 0x260 */ GoEff eff[10];
    /* 0x490 */ xyz_t cam_eye;
    /* 0x49C */ xyz_t cam_way;
    /* 0x4A8 */ s_xyz joint[18][2];
    /* 0x580 */ short bnd_timer;
    /* 0x582 */ short timer;
    /* 0x584 */ int carryitem;
    /* 0x588 */ short count;
    /* 0x58A */ short camera_no;
    /* 0x58C */ short bound;
}; /* size = 0x05A0 */

#endif /* __Z64OVL_Z_EN_GO2__ */
