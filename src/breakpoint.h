/**
 * @file breakpoint.h
 * @author waterproofpatch
 * @brief breakpoint macros
 */

#ifndef _BREAKPOINT_H_
#define _BREAKPOINT_H_

/**
 * @brief Breakpoint instruction for x64
 *
 */
#define BREAKPOINT_X86_64() __asm__ volatile("int $0x3")

/**
 * @brief Breakpoint instruction for ARM
 *
 */
#define BREAKPOINT_ARM() __asm__ volatile("bkpt #0")

/**
 * @brief Platform specific breakpoint calls
 *
 */
#ifdef __x86_64__
#define BREAKPOINT BREAKPOINT_X86_64
#elif __arm__
#define BREAKPOINT BREAKPOINT_ARM
#else
#error "Invalid architecture for breakpoints."
#endif

#endif
