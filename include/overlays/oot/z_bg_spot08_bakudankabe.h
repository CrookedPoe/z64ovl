#ifndef __Z64OVL_Z_BG_SPOT08_BAKUDANKABE__
#define __Z64OVL_Z_BG_SPOT08_BAKUDANKABE__

#define Z_BG_SPOT08_BAKUDANKABE_ACTOR_NUMBER     0x01A8
#define Z_BG_SPOT08_BAKUDANKABE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT08_BAKUDANKABE_OBJECT_NUMBER    0x0074
#define Z_BG_SPOT08_BAKUDANKABE_FLAGS            (ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_bg_spot08_bakudankabe_s z_bg_spot08_bakudankabe_t;
struct z_bg_spot08_bakudankabe_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjJntSph sph;
    /* 0x174 */ ClObjJntSphElem elem[3];
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_BG_SPOT08_BAKUDANKABE__ */
