#ifndef __Z64OVL_DEBUG_TEXT_TYPES_INCLUDED__
#define __Z64OVL_DEBUG_TEXT_TYPES_INCLUDED__

typedef struct {
    void (*prout)(void*, const char*, int);
    Gfx* glistp;
    uint16_t pos_x, pos_y;  /* Coordinates in Subpixel Units */
    uint16_t off_x;         /* Offset */
    uint8_t off_y;          /* Offset */
    uint8_t flags;
    /* Notes on Flags:
    * &1   : !0 = Hiragana, 0 = Katakana
    * &2   : Gradation Display
    * &4   : Shadow Display
    * &8   : Changed Attribute
    * &64  : Convert Low Resolution to High Resolution
    * &128 : Open State
    */
    rgba8_t color;          /* RGBA Color */
    //uint8_t pad0[28];       /* For Size Compatibility */
} debug_text_t;

#define DEBUG_TEXT_KANA_BIT         1
#define DEBUG_TEXT_GRADATION_BIT    2
#define DEBUG_TEXT_SHADOW_BIT       4
#define DEBUG_TEXT_ATTRIBUTE_BIT    8
#define DEBUG_TEXT_LOW2HIGH_BIT     64
#define DEBUG_TEXT_OPEN_BIT         128

#define DEBUG_TEXT_IS_OPENED(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_OPEN_BIT) != 0)
#define DEBUG_TEXT_SET_OPENED(this) (BIT_SET((this)->flags), DEBUG_TEXT_OPEN_BIT)
#define DEBUG_TEXT_CLEAR_OPENED(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_OPEN_BIT)

#define DEBUG_TEXT_IS_LOW2HIGH(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_LOW2HIGH_BIT) != 0)
#define DEBUG_TEXT_SET_LOW2HIGH(this) (BIT_SET((this)->flags), DEBUG_TEXT_LOW2HIGH_BIT)
#define DEBUG_TEXT_CLEAR_LOW2HIGH(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_LOW2HIGH_BIT)

#define DEBUG_TEXT_IS_HIRAGANA(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_KANA_BIT) != 0)
#define DEBUG_TEXT_IS_KATAKANA(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_KANA_BIT) == 0)
#define DEBUG_TEXT_SET_HIRAGANA(this) (BIT_SET((this)->flags), DEBUG_TEXT_KANA_BIT)
#define DEBUG_TEXT_SET_KATAKANA(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_KANA_BIT)

#define DEBUG_TEXT_IS_GRADATION(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_GRADATION_BIT) != 0)
#define DEBUG_TEXT_SET_GRADATION(this) (BIT_SET((this)->flags), DEBUG_TEXT_GRADATION_BIT)
#define DEBUG_TEXT_CLEAR_GRADATION(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_GRADATION_BIT)

#define DEBUG_TEXT_IS_SHADOW(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_SHADOW_BIT) != 0)
#define DEBUG_TEXT_SET_SHADOW(this) (BIT_SET((this)->flags), DEBUG_TEXT_SHADOW_BIT)
#define DEBUG_TEXT_CLEAR_SHADOW(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_SHADOW_BIT)

#define DEBUG_TEXT_IS_CHANGED(this) (BIT_CHECK((this)->flags), DEBUG_TEXT_ATTRIBUTE_BIT) != 0)
#define DEBUG_TEXT_SET_CHANGED(this) (BIT_SET((this)->flags), DEBUG_TEXT_ATTRIBUTE_BIT)
#define DEBUG_TEXT_CLEAR_CHANGED(this) (BIT_CLEAR((this)->flags), DEBUG_TEXT_ATTRIBUTE_BIT)

#define DEBUG_TEXT_GRADATION_OFF    "\212"
#define DEBUG_TEXT_GRADATION_ON     "\213"
#define DEBUG_TEXT_KATAKANA         "\214"
#define DEBUG_TEXT_HIRAGANA         "\215"

#endif /* __Z64OVL_DEBUG_TEXT_TYPES_INCLUDED__ */