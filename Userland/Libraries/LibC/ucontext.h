/*
 * Copyright (c) 2021, Matthew Jones
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <sys/cdefs.h>

__BEGIN_DECLS

typedef unsigned int sigset_t;   // TODO: Check this
typedef unsigned int stack_t;    // TODO: Check this
typedef unsigned int mcontext_t; // TODO: Check this

typedef struct user32_sigaltstack {
    unsigned int ss_sp;   /* signal stack base */
    unsigned int ss_size; /* signal stack length */
    int ss_flags;         /* SA_DISABLE and/or SA_ONSTACK */
} user32_sigaltstack;

typedef struct ucontext_t {
    struct ucontext_t* uc_link;
    sigset_t uc_sigmask;
    user32_sigaltstack uc_stack;
    mcontext_t uc_mcontext;
} ucontext_t;

int getcontext(ucontext_t*);
int setcontext(const ucontext_t*);
void makecontext(ucontext_t*, void (*)(void), int, void*, void*);
int swapcontext(ucontext_t*, const ucontext_t*);

__END_DECLS
