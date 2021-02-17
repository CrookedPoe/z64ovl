#ifndef __Z64OVL_Z_EN_ELF__
#define __Z64OVL_Z_EN_ELF__

#define Z_EN_ELF_ACTOR_NUMBER     0x0018
#define Z_EN_ELF_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ELF_OBJECT_NUMBER    0x0001
#define Z_EN_ELF_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_elf_s z_en_elf_t;
struct z_en_elf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[15];
    /* 0x1DA */ s_xyz joint2[15];
    /* 0x234 */ ColorF center_color;
    /* 0x244 */ ColorF side_color;
    /* 0x254 */ Light_data light_data;
    /* 0x264 */ Light_list* light_list;
    /* 0x268 */ Light_data light_data2;
    /* 0x278 */ Light_list* light_list2;
    /* 0x27C */ xyz_t target_revise;
    /* 0x288 */ ACTOR* talk_actor;
    /* 0x28C */ float color_morf_ratio;
    /* 0x290 */ float max_speedf;
    /* 0x294 */ float kankyo;
    /* 0x298 */ short active_mode;
    /* 0x29A */ short rad_v;
    /* 0x29C */ short rad_h;
    /* 0x29E */ short speed_rad_v;
    /* 0x2A0 */ short speed_rad_h;
    /* 0x2A4 */ float radius_v;
    /* 0x2A8 */ float radius_h;
    /* 0x2AC */ short spin_angle;
    /* 0x2AE */ unshort frame_counter;
    /* 0x2B0 */ short disp_counter;
    /* 0x2B2 */ short tough;
    /* 0x2B4 */ unshort flag;
    /* 0x2B6 */ unsigned char color_change;
    /* 0x2B7 */ unsigned char sound_stop;
    /* 0x2B8 */ void (*revise)(/* ECOFF does not store param types */);
    /* 0x2BC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02D0 */

#endif /* __Z64OVL_Z_EN_ELF__ */
