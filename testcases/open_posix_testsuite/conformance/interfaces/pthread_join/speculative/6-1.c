/*
 * Copyright (c) 2002, Intel Corporation. All rights reserved.
 * Created by:  rolla.n.selbak REMOVE-THIS AT intel DOT com
 * This file is licensed under the GPL license.  For the full content
 * of this license, see the COPYING file at the top level of this
 * source tree.
 *
 * Test that pthread_join()
 *
 * pthread_join() SHALL fail if:
 *
 * -[ESRCH] No thread could be found corresponding to that thread ID
 *
 * pthread_join() MAY fail if:
 *
 * -[EINVAL] The implementation has detected that the value specified by
 *  'thread' does not refer to a joinable thread.
 * -[EDEADLK] A deadlock was detected or the value of 'thread' specifies the
 *  calling thread.
 *
 * It shall not return an error code of [EINTR]
 *
 * Testing EINVAL
 *
 * Steps:
 * 1.  Create a new thread that is non-joinable (i.e. detached state
 *     attribute is PTHREAD_CREATE_DETACHED.
 * 2.  Call pthread_join() in main.  It should return EINVAL.
 *     If not, the test fails.
 */

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include "posixtest.h"

static void* a_thread_func(void)
{
	pthread_exit(0);
	return NULL;
}

int main(void)
{
	pthread_t new_th;
	pthread_attr_t attr;
	int ret;

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

	if (pthread_create(&new_th, &attr, (void *)a_thread_func, NULL) != 0) {
		perror("Error creating thread\n");
		return PTS_UNRESOLVED;
	}

	ret = pthread_join(new_th, NULL);
	if (ret != EINVAL) {
		printf("Test FAILED: Return code should be EINVAL, "
		       "but is: %d instead.\n", ret);
		return PTS_FAIL;
	}

	printf("Test PASSED\n");
	return PTS_PASS;
}
