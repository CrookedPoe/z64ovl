#ifndef __Z64OVL_MACROS_INCLUDED__
#define __Z64OVL_MACROS_INCLUDED__

/* Return or write to an [A]rbitrary [VAL]ue in memory. */
#define AVAL(base,type,offset)  (*(type*)((uint8_t*)(base)+(offset)))

/* Return a pointer to an [A]rbitrary [ADDR]ess in memory. */
#define AADDR(a,o)  ((void*)((uint8_t*)(a)+(o)))

/* Return the offset of an element in a structure. */
#define OFFSETOF(TYPE, ELEMENT) ((uint32_t)&(((TYPE*)0)->ELEMENT))

/* Return the type of an element in a structure. */
#define TYPEOF(TYPE, ELEMENT) typeof((((TYPE*)0)->ELEMENT))

#define COMBINE1(COMBINE1A0, COMBINE1A1) COMBINE1A0##COMBINE1A1
#define COMBINE(COMBINEA0, COMBINEA1) COMBINE1(COMBINEA0, COMBINEA1)
#define PADDING(PADDINGBYTES) COMBINE(char padding,__LINE__)[PADDINGBYTES]

/* Bit Flags */
#define BIT_CHECK(STORE, BIT) ((STORE) & (BIT))
#define BIT_TEST(STORE, BIT) (BIT_CHECK((STORE), (BIT)) != 0)
#define BIT_SET(STORE, BIT) ((STORE) |= (BIT)) 
#define BIT_CLEAR(STORE, BIT) ((STORE) &= ~(BIT))
#define BIT_TOGGLE(STORE, BIT) ((STORE) ^= (BIT))

#endif /* __Z64OVL_MACROS_INCLUDED__ */