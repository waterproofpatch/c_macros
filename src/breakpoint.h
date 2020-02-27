#ifndef _BREAKPOINT_H_
#define _BREAKPOINT_H_

#define BREAKPOINT_X86_64() __asm__ volatile("int $0x3")

#ifdef __x86_64__
#define BREAKPOINT BREAKPOINT_X86_64
#else
#error "Invalid architecture for breakpoints."
#endif

#endif

