/*
 *  linux/abi/emulate.c
 *
 *  Copyright (C) 1993  Linus Torvalds
 */

/*
 * Emulate.c contains the entry point for the 'lcall 7,xxx' handler.
 */

#include "../include/linux/errno.h"
#include "../include/linux/sched.h"
#include "../include/linux/kernel.h"
#include "../include/linux/mm.h"
#include "../include/linux/stddef.h"
#include "../include/linux/unistd.h"
#include "../include/linux/segment.h"
#include "../include/linux/ptrace.h"

#include "../include/asm/segment.h"
#include "../include/asm/system.h"

asmlinkage void iABI_emulate(struct pt_regs * regs)
{
	printk("iBCS2 binaries not supported yet\n");
	do_exit(SIGSEGV);
}
