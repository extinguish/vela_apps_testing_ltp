/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *
 * Test that sched_param structure is declared and includes at a minimum:
 *    int sched_priority
 */
#include <sched.h>

static struct sched_param __attribute__((unused)) this_type_should_exist, s;

static int __attribute__((unused)) dummyfcn(void)
{
	s.sched_priority = 0;

	return 0;
}
