#ifndef __Z64OVL_SKELANIME_FUNCTIONS_INCLUDED__
#define __Z64OVL_SKELANIME_FUNCTIONS_INCLUDED__

#include "types.h"

/**********
* This draws a skelanime structure. This does not support rigged meshes / matrices.
* Source: z_skelanime.c
**********/
#define Si2_draw z_skelanime_draw
#define SkelAnime_Draw z_skelanime_draw
extern void z_skelanime_draw(game_state_t* game_state, void* limb_index, vec3s_t* now_joint, int32_t (*pre)(game_state_t*, int32_t, Gfx**, vec3f_t*, vec3s_t*, void*), void (*post)(game_state_t*, int32_t, Gfx**, vec3s_t*, void*), actor_t* actor);
#if NZLE || OOT_DEBUG
	asm("z_skelanime_draw = 0x800A15C8");
#elif CZLE || OOT_U_1_0
	asm("z_skelanime_draw = 0x8008993C");
#elif NZSE || MM_U_1_0
	asm("z_skelanime_draw = 0x80133B3C");
#elif NZSP || MM_DEBUG
	asm("z_skelanime_draw = 0x8015AB30");
#elif NZSJ || MM_J_1_0
	asm("z_skelanime_draw = 0x801355AC");
#endif


/**********
* This draws a skelanime structure. This supports rigged meshes / matrices.
* Source: z_skelanime.c
**********/
#define Si2_draw_SV z_skelanime_mtx_draw
#define SkelAnime_DrawFlexOpa z_skelanime_mtx_draw
extern void z_skelanime_mtx_draw(game_state_t* game_state, void* limb_index, vec3s_t* now_joint, int32_t dlist_count, int32_t (*pre)(game_state_t*, int32_t, Gfx**, vec3f_t*, vec3s_t*, void*), void (*post)(game_state_t*, int32_t, Gfx**, vec3s_t*, void*), actor_t* actor);
#if NZLE || OOT_DEBUG
	asm("z_skelanime_mtx_draw = 0x800A1AC8");
#elif CZLE || OOT_U_1_0
	asm("z_skelanime_mtx_draw = 0x80089D8C");
#elif NZSE || MM_U_1_0
	asm("z_skelanime_mtx_draw = 0x80133F28");
#elif NZSP || MM_DEBUG
	asm("z_skelanime_mtx_draw = 0x8015AFD8");
#elif NZSJ || MM_J_1_0
	asm("z_skelanime_mtx_draw = 0x80135998");
#endif


/**********
* This initializes a skelanime structure. This does not support rigged meshes / matrices.
* Source: z_skelanime.c
**********/
#define Skeleton_Info2_M_ct z_skelanime_init
extern void z_skelanime_init(game_state_t* game_state, skelanime_t* skelanime, skeleton_t* skeleton, animation_t* animation, vec3s_t* now_joint, vec3s_t* morf_joint, int32_t limb_count);
#if NZLE || OOT_DEBUG
	asm("z_skelanime_init = 0x800A457C");
#elif CZLE || OOT_U_1_0
	asm("z_skelanime_init = 0x8008C684");
#elif NZSE || MM_U_1_0
	asm("z_skelanime_init = 0x80136A7C");
#elif NZSP || MM_DEBUG
	asm("z_skelanime_init = 0x8015E160");
#elif NZSJ || MM_J_1_0
	asm("z_skelanime_init = 0x801384EC");
#endif



/**********
* This initializes a skelanime structure. This supports rigged meshes / matrices.
* Source: z_skelanime.c
**********/
#define Skeleton_Info2_SV_M_ct z_skelanime_mtx_init
extern void z_skelanime_mtx_init(game_state_t* game_state, skelanime_t* skelanime, skeleton_t* skeleton, animation_t* animation, vec3s_t* now_joint, vec3s_t* morf_joint, int32_t limb_count);
#if NZLE || OOT_DEBUG
	asm("z_skelanime_mtx_init = 0x800A46F8");
#elif CZLE || OOT_U_1_0
	asm("z_skelanime_mtx_init = 0x8008C788");
#elif NZSE || MM_U_1_0
	asm("z_skelanime_mtx_init = 0x80136B30");
#elif NZSP || MM_DEBUG
	asm("z_skelanime_mtx_init = 0x8015E270");
#elif NZSJ || MM_J_1_0
	asm("z_skelanime_mtx_init = 0x801385A0");
#endif

static inline void zh_skelanime_init(global_t* global, skelanime_t* skelanime, skeleton_t* skel, animation_t* anim, uint8_t is_matrix)
{

	if (is_matrix)
	{
		z_skelanime_mtx_init(
			&global->state
			, skelanime
			, skel
			, anim
			, 0, 0
			, 0
    	);
	}
	else
	{
		z_skelanime_init(
			&global->state
			, skelanime
			, skel
			, anim
			, 0, 0
			, 0
    	);
	}

}

static inline void zh_skelanime_draw(global_t* global, skelanime_t* skelanime, actor_t* actor, uint8_t is_matrix)
{
	if (is_matrix)
	{
		z_skelanime_mtx_draw(
			&global->state
			, skelanime->skeleton
			, skelanime->now_joint
			, skelanime->dlist_count
			, NULL, NULL
			, actor
    	);
	}
	else
	{
		z_skelanime_draw(
			&global->state
			, skelanime->skeleton
			, skelanime->now_joint
			, NULL, NULL
			, actor
    	);
	}
}

#endif /* __Z64OVL_SKELANIME_FUNCTIONS_INCLUDED__ */