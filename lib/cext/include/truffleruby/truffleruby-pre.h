/*
* Copyright (c) 2016, 2018 Oracle and/or its affiliates. All rights reserved. This
* code is released under a tri EPL/GPL/LGPL license. You can use it,
* redistribute it and/or modify it under the terms of the:
*
* Eclipse Public License version 1.0
* GNU General Public License version 2
* GNU Lesser General Public License version 2.1
*
* This file contains code that is based on the Ruby API headers,
* copyright (C) Yukihiro Matsumoto, licensed under the 2-clause BSD licence.
*/

#ifndef TRUFFLERUBY_PRE_H
#define TRUFFLERUBY_PRE_H

#if defined(__cplusplus)
extern "C" {
#endif

#define TRUFFLERUBY

#include <sulong/truffle.h>
#include <sulong/polyglot.h>

#include <ctype.h> // isdigit

// Support

extern void* rb_tr_cext;
#define RUBY_CEXT ((void *)(&rb_tr_cext))

#define MUST_INLINE __attribute__((always_inline)) inline

#include <ruby/thread_native.h>

// Helpers

#ifndef offsetof
#define offsetof(p_type,field) ((size_t)&(((p_type *)0)->field))
#endif

#if defined(__cplusplus)
}
#endif

#endif
