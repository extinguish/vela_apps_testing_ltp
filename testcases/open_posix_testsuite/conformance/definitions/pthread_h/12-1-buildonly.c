  /*
   * Copyright (c) 2002, Intel Corporation. All rights reserved.
   * Created by:  rolla.n.selbak REMOVE-THIS AT intel DOT com
   * This file is licensed under the GPL license.  For the full content
   * of this license, see the COPYING file at the top level of this
   * source tree.

   Test this function is defined:

   int pthread_attr_getdetachstate(const pthread_attr_t *, int *);
   */

#include <pthread.h>

static pthread_attr_t a;
static int *detachstate;

static void __attribute__((unused)) dummy_func(void)
{

	pthread_attr_getdetachstate(&a, detachstate);
	return;
}
