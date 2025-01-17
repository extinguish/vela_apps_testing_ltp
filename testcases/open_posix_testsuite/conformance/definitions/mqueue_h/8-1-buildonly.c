/*
  Test for the existence and valid prototype
  of the mq_setattr function as specified on
  line 9690 of the Base Definitions document
*/

#include <mqueue.h>
#include "posixtest.h"
#include <stdio.h>

static void __attribute__((unused)) test_mq_setattr_prototype(void)
{
	mqd_t mqdes;
	struct mq_attr mqs, omqs;
	int err;

	mqdes = 0;

	err = mq_setattr(mqdes, &mqs, &omqs);
	(void)err;
}
