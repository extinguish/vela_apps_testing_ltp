  /*
   * Copyright (c) 2002, Intel Corporation. All rights reserved.
   * Created by:  julie.n.fleischer REMOVE-THIS AT intel DOT com
   * This file is licensed under the GPL license.  For the full content
   * of this license, see the COPYING file at the top level of this
   * source tree.

   @pt:TMR
   Test that the function:
   int nanosleep(const struct timespec *, struct timespec *);
   is declared.
   */

#include <time.h>

typedef int (*nanosleep_test) (const struct timespec *, struct timespec *);

static int __attribute__((unused)) dummyfcn(void)
{
	nanosleep_test __attribute__((unused)) dummyvar;
	dummyvar = nanosleep;
	return 0;
}
