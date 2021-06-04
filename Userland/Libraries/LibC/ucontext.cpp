/*
 * Copyright (c) 2021, Matthew Jones
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "ucontext.h"
#include <AK/Assertions.h>

int getcontext(ucontext_t*)
{
    VERIFY_NOT_REACHED();
}

int setcontext(const ucontext_t*)
{
    VERIFY_NOT_REACHED();
}

void makecontext(ucontext_t*, void (*)(void), int, void*, void*)
{
    VERIFY_NOT_REACHED();
}

int swapcontext(ucontext_t*, const ucontext_t*)
{
    VERIFY_NOT_REACHED();
}
