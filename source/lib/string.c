/*
 *  linux/lib/string.c
 *
 *  Copyright (C) 1991, 1992  Linus Torvalds
 */

#ifndef __GNUC__
#error I want gcc!
#endif

#include "../include/linux/types.h"

#define extern
#define inline
#define __LIBRARY__
#include "../include/linux/string.h"
