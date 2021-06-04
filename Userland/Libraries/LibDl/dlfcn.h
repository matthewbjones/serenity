/*
 * Copyright (c) 2018-2020, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <sys/cdefs.h>

__BEGIN_DECLS

#define RTLD_DEFAULT 0
#define RTLD_LAZY 2
#define RTLD_NOW 4
#define RTLD_GLOBAL 8
#define RTLD_LOCAL 16

int dlclose(void*);
char* dlerror();
void* dlopen(const char*, int);
void* dlsym(void*, const char*);

typedef struct {
    const char* dli_fname; /* Pathname of shared object that
                              contains address */
    void* dli_fbase;       /* Base address at which shared
                              object is loaded */
    const char* dli_sname; /* Name of symbol whose definition
                              overlaps addr */
    void* dli_saddr;       /* Exact address of symbol named
                              in dli_sname */
} Dl_info;

int dladdr(const void* address, Dl_info* info);

__END_DECLS
