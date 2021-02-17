#ifndef __Z64OVL_Z_EN_ELF__
#define __Z64OVL_Z_EN_ELF__

#define Z_EN_ELF_ACTOR_NUMBER     0x0010
#define Z_EN_ELF_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ELF_OBJECT_NUMBER    0x0001
#define Z_EN_ELF_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_elf_s z_en_elf_t;
struct z_en_elf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[7];
    /* 0x1B2 */ s_xyz joint2[7];
    /* 0x1DC */ ColorF center_color;
    /* 0x1EC */ ColorF side_color;
    /* 0x1FC */ Light_data light_data;
    /* 0x20C */ Light_list* light_list;
    /* 0x210 */ Light_data light_data2;
    /* 0x220 */ Light_list* light_list2;
    /* 0x224 */ xyz_t target_revise;
    /* 0x230 */ ACTOR* talk_actor;
    /* 0x234 */ ACTOR* omega_actor;
    /* 0x238 */ float color_morf_ratio;
    /* 0x23C */ float max_speedf;
    /* 0x240 */ float kankyo;
    /* 0x244 */ short active_mode;
    /* 0x246 */ short rad_v;
    /* 0x248 */ short rad_h;
    /* 0x24A */ short speed_rad_v;
    /* 0x24C */ short speed_rad_h;
    /* 0x250 */ float radius_v;
    /* 0x254 */ float radius_h;
    /* 0x258 */ short spin_angle;
    /* 0x25A */ unshort frame_counter;
    /* 0x25C */ short disp_counter;
    /* 0x25E */ short tough;
    /* 0x260 */ short save_bit;
    /* 0x262 */ unshort flag;
    /* 0x264 */ unshort flag2;
    /* 0x266 */ unshort old_elf_message;
    /* 0x268 */ unsigned char color_change;
    /* 0x269 */ unsigned char sound_stop;
    /* 0x26C */ void (*revise)(/* ECOFF does not store param types */);
    /* 0x270 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0274 */

#endif /* __Z64OVL_Z_EN_ELF__ */
