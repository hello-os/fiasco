IMPLEMENTATION [arm && pf_arm_virt]:

#include "platform_control.h"

void __attribute__ ((noreturn))
platform_reset(void)
{
  Platform_control::system_reset();

  for (;;)
    ;
}
