  /*
     Test that inclusion of signal.h makes visible all symbols in time.h.

     NOTE - THIS TEST CASE IS NOT COMPLETE.  NEEDS TO GROW MUCH LARGER.
   */

#include <signal.h>

static struct tm __attribute__((unused)) *mytime;
