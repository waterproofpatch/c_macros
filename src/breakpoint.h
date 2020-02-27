#ifndef _BREAKPOINT_H_
#define _BREAKPOINT_H_

#define BREAKPOINT_X86_64() __asm__ volatile("int $0x3")
#define BREAKPOINT_ARM() __asm__ volatile("bkpt #0")

#ifdef __x86_64__
#define BREAKPOINT BREAKPOINT_X86_64
#elif __arm__
#define BREAKPOINT BREAKPOINT_ARM
#else
#error "Invalid architecture for breakpoints."
#endif

#endif

