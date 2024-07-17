#include "sl_udelay.h"
int msToUs(int ms)
  {
   int us = ms * 1000;
   return us;
  }
void delay(int ms)
  {
   int us = msToUs(ms);
   sl_udelay_wait(us);
  }


