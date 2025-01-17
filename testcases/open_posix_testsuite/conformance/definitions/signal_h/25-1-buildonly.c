  /*
     Test that the function:
     int killpg(pid_t, int);
     is declared.
   */

#include <signal.h>
#include <sys/types.h>

typedef int (*killpg_test) (pid_t, int);

static int __attribute__((unused)) dummyfcn(void)
{
	killpg_test  __attribute__((unused)) dummyvar;
	dummyvar = killpg;
	return 0;
}
