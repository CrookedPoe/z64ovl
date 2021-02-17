#ifndef __Z64OVL_CONTEXT_INCLUDED__
#define __Z64OVL_CONTEXT_INCLUDED__

#ifdef MAJORA                                           /* Global Context */
    typedef struct z2_global_s global_t;
    typedef struct z2_gloibal_s GlobalContext;
#else
    typedef struct z_global_s global_t;
    typedef struct z_global_s GlobalContext;
#endif

//#include "skelanime/types.h"
//#include "actor/types.h"
//#include "bgcheck/types.h"
//#include "lights/types.h"
//#include "camera/types.h"

//typedef struct skeleton_s z64_skeleton_t;           /* Skeleton */
//typedef struct actor_s z64_actor_t;                 /* Actor */
//typedef struct bgcheck_context_s bgcheck_context_t;   /* BGCheck*/
//typedef struct light_context_s light_context_t;       /* Lights */
//typedef struct actor_context_s z64_actor_context_t;       /* Actor Context */
//typedef struct cutscene_context_s cutscene_context_t; /* Cutscene Context */

#endif /* __Z64OVL_CONTEXT_INCLUDED__ */