// Interface to DS80C400 ROM functions.

#ifndef DS400ROM_H_
#define DS400ROM_H_

extern unsigned char DSS_rom_init(void xdata *loMem,
			          void xdata *hiMem) _naked;

extern unsigned long DSS_gettimemillis(void) _naked;

extern unsigned char DSS_getthreadID(void) _naked;

// Utility functions.

// A wrapper which calls rom_init allocating all available RAM in CE0
// to the heap.
unsigned char romInit(unsigned char noisy);

// Install an interrupt handler.
void installInterrupt(void (*isrPtr)(void), unsigned char offset);

#endif
