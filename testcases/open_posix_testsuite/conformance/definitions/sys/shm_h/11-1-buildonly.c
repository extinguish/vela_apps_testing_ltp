/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * Test that the function:
 * int shmget(key_t, size_t, int)
 * is declared.
 */

#include <sys/shm.h>

typedef int (*shmget_test) (key_t, size_t, int);

static int __attribute__((unused)) dummyfcn(void)
{
	shmget_test __attribute__((unused)) dummyvar;
	dummyvar = shmget;
	return 0;
}
