  /*
   * Copyright (c) 2002, Intel Corporation. All rights reserved.
   * Created by:  julie.n.fleischer REMOVE-THIS AT intel DOT com
   * This file is licensed under the GPL license.  For the full content
   * of this license, see the COPYING file at the top level of this
   * source tree.

   @pt:TMR
   Test that the function:
   int timer_settime(timer_t, int, const struct itimerspec *,
   struct itimerspec *);
   is declared.
   */

#include <time.h>

typedef int (*timer_settime_test) (timer_t, int, const struct itimerspec *,
				   struct itimerspec *);

static int __attribute__((unused)) dummyfcn(void)
{
	timer_settime_test __attribute__((unused)) dummyvar;
	dummyvar = timer_settime;
	return 0;
}
